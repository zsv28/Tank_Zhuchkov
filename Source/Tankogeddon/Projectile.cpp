// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <TimerManager.h>
#include <Engine/World.h>

#include "Tankogeddon.h"

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
}

void AProjectile::Start()
{
    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &AProjectile::Move, MoveRate, true, MoveRate);
    SetLifeSpan(FlyRange / MoveSpeed);
}

void AProjectile::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTankogeddon, Warning, TEXT("Projectile %s collided with %s. "), *GetName(), *OtherActor->GetName());
    OtherActor->Destroy();
    Destroy();
}

void AProjectile::Move()
{
    FVector NextPosition = GetActorLocation() + GetActorForwardVector() * MoveSpeed * MoveRate;
    SetActorLocation(NextPosition);
}

