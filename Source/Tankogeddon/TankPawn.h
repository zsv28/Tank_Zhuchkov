// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageTaker.h"
#include "BasePawn.h"
#include "Components/SceneCaptureComponent2D.h"

#include "EquipInventoryComponent.h"
#include "InventoryManagerComponent.h"
#include "InventoryComponent.h"
#include "InventoryOwner.h"
#include "QuestList.h"
#include "QuestListComponent.h"

#include "TankPawn.generated.h"




class USpringArmComponent;
class UCameraComponent;
class ATankPlayerController;
class ATargetPoint;
class UInventoryComponent;
class UInventoryManagerComponent;
class UEquipInventoryComponent;
class UQuestListComponent;
class UQuestList;



UCLASS()
class TANKOGEDDON_API ATankPawn : public ABasePawn, public IInventoryOwner
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

protected:
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UCameraComponent* Camera;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UInventoryComponent* InventoryComponent;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UInventoryManagerComponent* InventoryManagerComponent;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UEquipInventoryComponent* EquipmentInventoryComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UQuestListComponent* QuestListComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "QuestSystem")
	TSubclassOf<UQuestList> QuestListClass;

	UPROPERTY()
    UQuestList* QuestList;


    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float MoveSpeed = 100.f;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float MovementSmootheness = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float RotationSpeed = 100.f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float RotationSmootheness = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Patrol points", Meta = (MakeEditWidget = true))
    TArray<ATargetPoint*> PatrollingPoints;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Accurency")
    float MovementAccuracy = 50.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
    UForceFeedbackEffect* HitForceEffect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
    TSubclassOf<UMatineeCameraShake> HitShake;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    virtual void TargetDestroyed(AActor* Target) override;
    virtual void DamageTaken(float DamageValue) override;
    virtual void Die();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void MoveForward(float AxisValue);

    UFUNCTION()
    void RotateRight(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void EnableInventary();


	UFUNCTION(BlueprintCallable)
	void ToggleQuestListVisibility();

    UFUNCTION()
    TArray<FVector> GetPatrollingPoints();

    UFUNCTION()
    void SetPatrollingPoints(const TArray<ATargetPoint*>& NewPatrollingPoints);
    
    UFUNCTION()
    float GetMovementAccurency() 
    { 
        return MovementAccuracy; 
    };

	virtual void EquipItem(EEquipSlot Slot, FName ItemID);

	virtual void UnequipItem(EEquipSlot Slot, FName ItemID);

	UStaticMeshComponent* GetEquipComponents(EEquipSlot Slot);

	FORCEINLINE UInventoryManagerComponent* GetInventoryManagerComponent() const { return InventoryManagerComponent; }

private:
    float TargetForwardAxisValue = 0.f;
    float CurrentForwardAxisValue = 0.f;
    float TargetRightAxisValue = 0.f;
    float CurrentRightAxisValue = 0.f;

    int32 AccumulatedScores = 0;
    
};
