// Fill out your copyright notice in the Description page of Project Settings.


#include "MapLoader.h"
#include <Components/StaticMeshComponent.h>
#include <Components/PointLightComponent.h>
#include <Components/BoxComponent.h>
#include <Kismet/GameplayStatics.h>
#include <GameFramework/Controller.h>
#include <Engine/World.h>

// Sets default values
AMapLoader::AMapLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = SceneComp;

    GatesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gates Mesh"));
    GatesMesh->SetupAttachment(SceneComp);

    ActivatedLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Activated lights"));
    ActivatedLight->SetupAttachment(SceneComp);

    DeactivatedLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Deactivated lights"));
    DeactivatedLight->SetupAttachment(SceneComp);

    TriggerCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger collider"));
    TriggerCollider->SetupAttachment(SceneComp);

    TriggerCollider->OnComponentBeginOverlap.AddDynamic(this, &AMapLoader::OnTriggerOverlapBegin);

    SetActiveLights();
}

void AMapLoader::SetIsActivated(bool NewIsActivated)
{
    IsActivated = NewIsActivated;

    SetActiveLights();
}

// Called when the game starts or when spawned
void AMapLoader::BeginPlay()
{
	Super::BeginPlay();
	
    SetActiveLights();
}

void AMapLoader::SetActiveLights()
{
    ActivatedLight->SetHiddenInGame(!IsActivated);
    DeactivatedLight->SetHiddenInGame(IsActivated);
}

void AMapLoader::OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!IsActivated)
    {
        return;
    }

    APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
    if (OtherActor == PlayerPawn)
    {
        UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName);
    }
}

