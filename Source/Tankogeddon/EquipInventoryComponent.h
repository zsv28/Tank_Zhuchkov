// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "InventoryItem.h"
#include "TankPawn.h"
#include "EquipInventoryComponent.generated.h"

class ATankPawn;


/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKOGEDDON_API UEquipInventoryComponent : public UInventoryComponent
{
	GENERATED_BODY()
	UEquipInventoryComponent();

public:
	int32 GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& Item) override;
	void SetItem(int32 SlotIndex, const FInventorySlotInfo& Item);
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
	TMap<int32, EEquipSlot> EquipSlots;

	UPROPERTY()
	ATankPawn* TankOwner;

};
