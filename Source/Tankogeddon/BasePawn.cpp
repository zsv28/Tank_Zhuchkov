// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include <Components/BoxComponent.h>
#include <Components/SphereComponent.h>
#include "HealthComponent.h"
#include "Tankogeddon.h"
#include "Cannon.h"
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "AmmoBox.h"
#include "BasePawnAIController.h"
#include <GameFramework/Actor.h>
#include "MySaveGame.h"
#include "HpBarWidget.h"




// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body Mesh"));
    BodyMesh->bEditableWhenInherited = true;
    RootComponent = BodyMesh;

    TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
    TurretMesh->SetupAttachment(BodyMesh);
    TurretMesh->bEditableWhenInherited = true;

    CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon setup point"));
    CannonSetupPoint->AttachToComponent(TurretMesh, FAttachmentTransformRules::KeepRelativeTransform);
    CannonSetupPoint->bEditableWhenInherited = true;

    HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit collider"));
    HitCollider->SetupAttachment(BodyMesh);
    HitCollider->bEditableWhenInherited = true;

	TargetingCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Vision collider"));
	TargetingCollider->SetupAttachment(BodyMesh);
	TargetingCollider->bEditableWhenInherited = true;
	TargetingCollider->OnComponentBeginOverlap.AddDynamic(this, &ABasePawn::OnTargetingOverlapBegin);
	TargetingCollider->OnComponentEndOverlap.AddDynamic(this, &ABasePawn::OnTargetingOverlapEnd);

    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
    HealthComponent->OnDie.AddDynamic(this, &ABasePawn::Die);
    HealthComponent->OnDamaged.AddDynamic(this, &ABasePawn::DamageTaken);
    HealthComponent->bEditableWhenInherited = true;

	HealthWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBar"));
	HealthWidgetComponent->SetupAttachment(BodyMesh);
	HealthWidgetComponent->SetWidgetClass(UHpBarWidget::StaticClass());
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
    SetupCannon(CannonClass);

	if (!IsPawn())
	{
        HpBarWidget = Cast<UHpBarWidget>(HealthWidgetComponent->GetUserWidgetObject());
		if (HpBarWidget)
		{
            HpBarWidget->SetHP(HealthComponent->GetHealth(), HealthComponent->GetMaxHealth());
		}
	}
}

void ABasePawn::Destroyed()
{
	if (ActiveCannon)
	{
		ActiveCannon->Destroy();
	}

	if (InactiveCannon)
	{
		InactiveCannon->Destroy();
	}

	if (HealthWidgetComponent->GetWidget())
	{
		HealthWidgetComponent->GetWidget()->Destruct();
	}
}

void ABasePawn::TargetDestroyed(AActor* Target)
{

}

void ABasePawn::Fire() const
{
	if (ActiveCannon && ActiveCannon->IsReadyToFire())
	{
		ActiveCannon->Fire();
	}
}

void ABasePawn::FireSpecial() const
{
    if (ActiveCannon && ActiveCannon->IsReadyToFire())
    {
        ActiveCannon->FireSpecial();
    }
}

void ABasePawn::SetupCannon(TSubclassOf<ACannon> InCannonClass)
{

	if (!InCannonClass)
	{
		return;
	}

    if (ActiveCannon)
    {
        ActiveCannon->Destroy();
        ActiveCannon = nullptr;
    }

    FActorSpawnParameters Params;
    Params.Instigator = this;
    Params.Owner = this;
    ActiveCannon = GetWorld()->SpawnActor<ACannon>(InCannonClass, Params);
    ActiveCannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
    ActiveCannon->OnDestroyedTarget.AddUObject(this, &ABasePawn::TargetDestroyed);


}

void ABasePawn::CycleCannon()
{
    Swap(ActiveCannon, InactiveCannon);
    if (ActiveCannon)
    {
        ActiveCannon->SetVisibility(true);
    }

    if (InactiveCannon)
    {
        InactiveCannon->SetVisibility(false);
    }
  
}
bool ABasePawn::IsPawn() const
{
	return (Cast<APawn>(this) == GetWorld()->GetFirstPlayerController()->GetPawn());
}



ACannon* ABasePawn::GetActiveCannon() const
{
    return ActiveCannon;
}

void ABasePawn::TakeDamage(FDamageData& DamageData)
{
	HealthComponent->TakeDamage(OUT DamageData);

	if (!IsPawn())
	{
		HpBarWidget->SetHP(HealthComponent->GetHealth(), HealthComponent->GetMaxHealth());
	}
	return;
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bIsTurretTargetSet)
    {
        FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TurretTarget);
        const FRotator CurrRotation = TurretMesh->GetComponentRotation();
        TargetRotation.Pitch = CurrRotation.Pitch;
        TargetRotation.Roll = CurrRotation.Roll;
        TurretMesh->SetWorldRotation(FMath::RInterpConstantTo(CurrRotation, TargetRotation, DeltaTime, TurretRotationSpeed));
    }
    else
    {
        FRotator NewRotation = TurretMesh->GetComponentRotation();
        NewRotation .Yaw += TurretRotationSpeed * DeltaTime * TurretRotationAxis;
        TurretMesh->SetWorldRotation(NewRotation);
    }
}

FVector ABasePawn::GetTurretForwardVector() const
{
    return TurretMesh->GetForwardVector();
}

void ABasePawn::SetTurretRotationAxis(float AxisValue)
{
    TurretRotationAxis = AxisValue;
    bIsTurretTargetSet = false;
}

void ABasePawn::SetTurretTarget(FVector TargetPosition)
{
    TurretTarget = TargetPosition;
    bIsTurretTargetSet = true;
}

FVector ABasePawn::GetEyesPosition() const
{
    return CannonSetupPoint->GetComponentLocation();
}

void ABasePawn::SaveState(UPawnSaveData* SaveDataPawn) const
{
	if (SaveDataPawn)
	{
        SaveDataPawn->BasePawnClass = this->GetClass();
        SaveDataPawn->CurrentHealth = HealthComponent->GetHealth();
        SaveDataPawn->MaxHealth = HealthComponent->GetMaxHealth();
		if (ActiveCannon)
		{
            SaveDataPawn->CurrentAmmo = ActiveCannon->GetCurrentAmmo();
            SaveDataPawn->MaxAmmo = ActiveCannon->GetMaxAmmo();
		}
        SaveDataPawn->PlayerTransform = GetActorTransform();

	}

}

void ABasePawn::LoadState(const UPawnSaveData* LoadDataPawn)
{
	if (LoadDataPawn)
	{
		HealthComponent->SetHealth(LoadDataPawn->CurrentHealth);
		HealthComponent->SetMaxHealth(LoadDataPawn->MaxHealth);
		if (ActiveCannon)
		{
			ActiveCannon->SetAmmo(LoadDataPawn->CurrentAmmo);
			ActiveCannon->SetMaxAmmo(LoadDataPawn->MaxAmmo);
		}
		SetActorTransform(LoadDataPawn->PlayerTransform, false, nullptr, ETeleportType::TeleportPhysics);
	}
}

void ABasePawn::Die()
{
    UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DestuctionParticleSystem, GetActorTransform());
    UGameplayStatics::PlaySoundAtLocation(GetWorld(), DestructionSound, GetActorLocation());
 
    if (DestructionBonusBox)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.bNoFail = true;
        GetWorld()->SpawnActor <AAmmoBox>(DestructionBonusBox, GetActorLocation(), GetActorRotation(), SpawnParams);
    }

	if (HealthWidgetComponent)
	{
		HealthWidgetComponent->ReleaseResources();
	}

    Destroy();
}

void ABasePawn::DamageTaken(float InDamage)
{
    UE_LOG(LogTankogeddon, Log, TEXT("Pawn %s taken damage:%f "), *GetName(), InDamage, HealthComponent->GetHealth());
}


void ABasePawn::OnTargetingOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto OtherPawn = Cast<ABasePawn>(OtherActor))
	{
		if (OtherPawn != this && OtherPawn->PlayerGroupID != PlayerGroupID)
		{
			if (const auto AIController{ Cast<ABasePawnAIController>(GetController()) })
			{
				AIController->SetCurrentEnemy(OtherPawn);
			}
		}
	}

	return;
}

void ABasePawn::OnTargetingOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (auto OtherPawn = Cast<ABasePawn>(OtherActor))
	{
		if (const auto AIController{ Cast<ABasePawnAIController>(GetController()) })
		{
			AIController->ResetCurrentEnemy();
		}
	}
}

