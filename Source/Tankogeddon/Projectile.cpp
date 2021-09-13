// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/PrimitiveComponent.h>

#include "Tankogeddon.h"
#include "ActorPoolSubsystem.h"
#include "DamageTaker.h"
#include "GameStructs.h"



// Sets default values
AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = false;
    USceneComponent* SceeneCpm = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = SceeneCpm;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
    Mesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnMeshOverlapBegin);
    Mesh->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
    Mesh->SetHiddenInGame(true);
}

void AProjectile::Start()
{
    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AProjectile::Move, MoveRate, true, MoveRate);
    StartLocation = GetActorLocation();
    Mesh->SetHiddenInGame(false);
    Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void AProjectile::Explode()
{
	if (!bDamageRadius)
	{
		return;
	}

	FVector StartPos = GetActorLocation();
	FVector EndPos = StartPos + FVector(0.1f);

	FCollisionShape Shape = FCollisionShape::MakeSphere(ExplodeRadius);
	FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
	Params.AddIgnoredActor(this);
	Params.bTraceComplex = true;
	Params.TraceTag = "Explode Trace";
	TArray<FHitResult> AttackHit;

	FQuat Rotation = FQuat::Identity;

	bool SweepResult = GetWorld()->SweepMultiByChannel
	(
		OUT AttackHit,
		StartPos,
		EndPos,
		Rotation,
		ECollisionChannel::ECC_Visibility,
		Shape,
		Params
	);

	GetWorld()->DebugDrawTraceTag = "Explode Trace";

	if (SweepResult)
	{
		for (FHitResult HitResult : AttackHit)
		{
			AActor* OtherActor = HitResult.GetActor();
			if (!OtherActor)
			{
				continue;
			}
			if (!CheckDamageForActor(OtherActor))
			{
				UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
				FVector ForceVector = OtherActor->GetActorLocation() - GetActorLocation();
				ForceVector.Normalize();
				CheckPhysicsForComponent(PrimComp, ForceVector);
			}

		}
	}
}

void AProjectile::Stop()
{
    OnDestroyedTarget.Clear();
    GetWorld()->GetTimerManager().ClearTimer(MovementTimerHandle);
    Mesh->SetHiddenInGame(true);
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    UActorPoolSubsystem* Pool = GetWorld()->GetSubsystem<UActorPoolSubsystem>();
    if (Pool->IsActorInPool(this))
    {
        Pool->ReturnActor(this);
    }
    else
    {
        Destroy();
    }
}

void AProjectile::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTankogeddon, Warning, TEXT("Projectile %s collided with %s. "), *GetName(), *OtherActor->GetName());
    if (OtherActor == GetInstigator())
    {
        return;
    }
    if (OtherComp && OtherComp->GetCollisionObjectType() == ECollisionChannel::ECC_Destructible)
    {
        OtherActor->Destroy();
    }
    else
    {
		bool bIsFatalDamage;
		if (CheckDamageForActor(OtherActor, OUT & bIsFatalDamage))
		{
			if (bIsFatalDamage && OnDestroyedTarget.IsBound())
			{
				OnDestroyedTarget.Broadcast(OtherActor);
			}
		}
		else
		{
            FVector ForceVector = GetActorForwardVector();
			CheckPhysicsForComponent(OtherComp, SweepResult, ForceVector);
        }
    }

    Stop();
}

void AProjectile::Move()
{
    FVector NextPosition = GetActorLocation() + GetActorForwardVector() * MoveSpeed * MoveRate;
    SetActorLocation(NextPosition);
    if (FVector::Distance(NextPosition, StartLocation) > FlyRange) 
    {
		Explode();
        Stop();
    }
}

bool AProjectile::CheckDamageForActor(AActor* DamageTakerActor, bool* bOutIsFatal)
{

	if (IDamageTaker* DamageTakerInterface = Cast<IDamageTaker>(DamageTakerActor))
	{
		FDamageData DamageData;
		DamageData.DamageValue = Damage;
		DamageData.DamageMaker = this;
		DamageData.Instigator = GetInstigator();
		DamageTakerInterface->TakeDamage(OUT DamageData);

		if (bOutIsFatal != nullptr)
		{
			*bOutIsFatal = DamageData.bOutIsFatalDamage;
		}
		return true;
	}

	if (bOutIsFatal != nullptr)
	{
		*bOutIsFatal = false;
	}
	return false;
}

// --------------------------------------------------------------------------------------
void AProjectile::CheckPhysicsForComponent(UPrimitiveComponent* PrimComp, const FHitResult& SweepResult, const FVector& ForceVector)
{
	if (PrimComp && PrimComp->IsSimulatingPhysics())
	{
		if (bImpulseImpact)
		{
			PrimComp->AddImpulseAtLocation(ForceVector * PushForce, SweepResult.ImpactPoint);
		}
		else
		{
			PrimComp->AddForceAtLocation(ForceVector * PushForce, SweepResult.ImpactPoint);
		}
	}
}

// --------------------------------------------------------------------------------------
void AProjectile::CheckPhysicsForComponent(UPrimitiveComponent* PrimComp, const FVector& ForceVector)
{
	if (PrimComp->IsSimulatingPhysics())
	{
		if (bImpulseImpact)
		{
			PrimComp->AddImpulse(ForceVector * PushForce, NAME_None, true);
		}
		else
		{
			PrimComp->AddForce(ForceVector * PushForce, NAME_None, true);
		}
	}
}
