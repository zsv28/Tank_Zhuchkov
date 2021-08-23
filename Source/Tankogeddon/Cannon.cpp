// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include <Engine/Engine.h>
#include <TimerManager.h>
#include <Engine/World.h>

// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    USceneComponent* RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootComp;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon mesh"));
    Mesh->SetupAttachment(RootComponent);

    ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Spawn point"));
    ProjectileSpawnPoint->SetupAttachment(Mesh);
}

bool ACannon::Fire()
{
    if (!bReadyToFire)
    {
        GEngine->AddOnScreenDebugMessage(10, 2, FColor::Red, "The cannon not ready to fire!");
        return false;
    }
    --CurrentAmmo;
    if (CurrentAmmo < 1)
    {
        GEngine->AddOnScreenDebugMessage(10, 2, FColor::Red, "No ammo!");
        bReadyToFire = true;
        return false;
    }
    bReadyToFire = false;
    SingleShot();
    return true;
}

bool ACannon::FireSpecial()
{
	
	return true;
}

void ACannon::SingleShot()
{
    auto Delay{ CurrentShot < NumberShotFired ? ShotDelay : 1.f / FireRate };
    if (Type == ECannonType::FireProjectile)
    {
        float AmmoRes = float(CurrentShot) / NumberShotFired * 100;

        GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "Fire - projectile");
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "Fire - trace");
    }

    GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1.f / FireRate, false);
    ++CurrentShot;
}

bool ACannon::IsReadyToFire()
{
    return bReadyToFire;
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	
    bReadyToFire = true;
}

void ACannon::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    GetWorld()->GetTimerManager().ClearTimer(ReloadTimerHandle);
}

void ACannon::Reload()
{
	if (CurrentShot >= NumberShotFired)
	{
		Reset();
	}
	else
	{
		SingleShot();
	}
	return;
    //bReadyToFire = true;
}


void ACannon::Reset()
{
	bReadyToFire = true;
	CurrentShot = 0;
	return;
}
