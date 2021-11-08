// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include <Components/StaticMeshComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Components/ArrowComponent.h>
#include <Components/BoxComponent.h>
#include <Engine/TargetPoint.h>
#include <Kismet/GameplayStatics.h>

#include "Tankogeddon.h"
#include "Cannon.h"
#include "HealthComponent.h"
#include "Scorable.h"
#include <Blueprint/WidgetBlueprintLibrary.h>
#include "TankogeddonGameModeBase.h"


// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring arm"));
    SpringArm->SetupAttachment(BodyMesh);
    SpringArm->bDoCollisionTest = false;
    SpringArm->bInheritPitch = false;
    SpringArm->bInheritYaw = false;
    SpringArm->bInheritRoll = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("Inventory");
	InventoryManagerComponent = CreateDefaultSubobject<UInventoryManagerComponent>("InventoryManager");
	EquipmentInventoryComponent = CreateDefaultSubobject<UEquipInventoryComponent>("EquipInventory");

	QuestListComponent = CreateDefaultSubobject<UQuestListComponent>("Quest List Component");

}

void ATankPawn::MoveForward(float AxisValue)
{
    TargetForwardAxisValue = AxisValue;
}

void ATankPawn::RotateRight(float AxisValue)
{
    TargetRightAxisValue = AxisValue;
}



void ATankPawn::EnableInventary()
{
	if (InventoryManagerComponent)
	{
		InventoryManagerComponent->InitLocalInventory(InventoryComponent);
		if (IsPawn())
		{
			InventoryManagerComponent->InitEquipment(EquipmentInventoryComponent);
		}
	}
}

void ATankPawn::ToggleQuestListVisibility()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (QuestList)
	{
		QuestList->RemoveFromParent();
		QuestList = nullptr;
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(PC);
		PC->bShowMouseCursor = false;
	}
	else
	{
		if (QuestListClass)
		{
			QuestList = CreateWidget<UQuestList>(GetWorld(), QuestListClass);
			QuestList->Init(QuestListComponent);
			QuestList->AddToViewport();
			UWidgetBlueprintLibrary::SetInputMode_GameAndUI(PC);
			PC->bShowMouseCursor = true;
		}
	}


}

TArray<FVector> ATankPawn::GetPatrollingPoints()
{
    TArray<FVector> Result;
    for (ATargetPoint* Point : PatrollingPoints)
    {
        Result.Add(Point->GetActorLocation());
    }

    return Result;
}

void ATankPawn::SetPatrollingPoints(const TArray<ATargetPoint*>& NewPatrollingPoints)
{
    PatrollingPoints = NewPatrollingPoints;
}

// Called when the game starts or when spawned
void ATankPawn::BeginPlay()
{
	Super::BeginPlay();

	if (InventoryManagerComponent)
	{
		InventoryManagerComponent->InitLocalInventory(InventoryComponent);
		if (IsPawn())
		{
			InventoryManagerComponent->InitEquipment(EquipmentInventoryComponent);
		}
	}
}


void ATankPawn::TargetDestroyed(AActor* Target)
{
    if (IScorable* Scorable = Cast<IScorable>(Target))
    {
        AccumulatedScores += Scorable->GetScores();
        UE_LOG(LogTankogeddon, Log, TEXT("Destroyed target %s. Current scores: %d"), *Target->GetName(), AccumulatedScores);
    }
}

void ATankPawn::DamageTaken(float DamageValue)
{
    Super::DamageTaken(DamageValue);

    if (this == GetWorld()->GetFirstPlayerController()->GetPawn())
    {
        if (HitForceEffect)
        {
            FForceFeedbackParameters HitForceEffectParams;
            HitForceEffectParams.bLooping = false;
            HitForceEffectParams.Tag = "HitForceEffectParams";
            GetWorld()->GetFirstPlayerController()->ClientPlayForceFeedback(HitForceEffect, HitForceEffectParams);
        }

        if (HitShake)
        {
            GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(HitShake);
        }
    }
}

// Called every frame
void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Tank movement
    CurrentForwardAxisValue = FMath::FInterpTo(CurrentForwardAxisValue, TargetForwardAxisValue, DeltaTime, MovementSmootheness);
    
    FVector CurrentLocation = GetActorLocation();
    FVector ForwardVector = GetActorForwardVector();
    FVector MovePosition = CurrentLocation + ForwardVector * CurrentForwardAxisValue * MoveSpeed * DeltaTime;

    FHitResult* SweepHitResult = nullptr;
    SetActorLocation(MovePosition, true, SweepHitResult);
    if (SweepHitResult)
    {
        CurrentForwardAxisValue = 0.f;
    }

    // Tank rotation
    CurrentRightAxisValue = FMath::FInterpTo(CurrentRightAxisValue, TargetRightAxisValue, DeltaTime, RotationSmootheness);

    UE_LOG(LogTankogeddon, Verbose, TEXT("CurrentRightAxisValue = %f TargetRightAxisValue = %f"), CurrentRightAxisValue, TargetRightAxisValue);

    FRotator CurrentRotation = GetActorRotation();
    float YawRotation = CurrentRightAxisValue * RotationSpeed * DeltaTime;
    YawRotation += CurrentRotation.Yaw;

    FRotator NewRotation = FRotator(0.f, YawRotation, 0.f);
    SetActorRotation(NewRotation);
}

void ATankPawn::Die()
{
    bool IsPlayerPawn = Cast<APawn>(this) == GetWorld()->GetFirstPlayerController()->GetPawn();
    
    if (IsPlayerPawn)
    {
        auto CurrentGameMode = Cast<ATankogeddonGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
        CurrentGameMode->OnPawnDie();
    }

    Super::Die();
}
void ATankPawn::EquipItem(EEquipSlot Slot, FName ItemID)
{
    UStaticMeshComponent* EquipComponent = GetEquipComponents(Slot);
    if (EquipComponent)
    {
        FInventoryItemInfo* ItemInfoPtr = InventoryManagerComponent->GetItemData(ItemID);
        if (ItemInfoPtr)
        {
            EquipComponent->SetStaticMesh(ItemInfoPtr->Mesh.LoadSynchronous());

            //Damage += ItemInfoPtr->Damage;
            //Armor += ItemInfoPtr->Armor;
            //Intelligence += ItemInfoPtr->Intelligence;
        }
    }
}
void ATankPawn::UnequipItem(EEquipSlot Slot, FName ItemID)
{
	UStaticMeshComponent* EquipComponent = GetEquipComponents(Slot);
	if (EquipComponent)
	{
		EquipComponent->SetStaticMesh(nullptr);
		/*FInventoryItemInfo* ItemInfoPtr = InventoryManagerComponent->GetItemData(ItemID);
		if (ItemInfoPtr)
		{
			Damage -= ItemInfoPtr->Damage;
			Armor -= ItemInfoPtr->Armor;
			Intelligence -= ItemInfoPtr->Intelligence;
		}*/
	}
}

UStaticMeshComponent* ATankPawn::GetEquipComponents(EEquipSlot Slot)
{
	FName EquipTag = "";

	switch (Slot)
	{
	case EEquipSlot::ES_None:
		break;
	case EEquipSlot::ES_Cannon:
		EquipTag = "Equip_Ñannon";
		break;
	case EEquipSlot::ES_Tower:
		EquipTag = "Equip_Tower";
		break;
	case EEquipSlot::ES_Engine:
		EquipTag = "Equip_Engine";
		break;
	case EEquipSlot::ES_TankTrack:
		EquipTag = "Equip_TankTrack";
		break;
	case EEquipSlot::ES_Bullet:
		EquipTag = "Equip_Bullet";
		break;
	}

	TArray<UActorComponent*> Components = GetComponentsByTag(UStaticMeshComponent::StaticClass(), EquipTag);
	return Components.Num() > 0 ? Cast<UStaticMeshComponent>(Components[0]) : nullptr;
}

