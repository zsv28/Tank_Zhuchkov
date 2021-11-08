// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <UObject/Interface.h>
#include "InventoryItem.h"
#include "InventoryOwner.generated.h"


UINTERFACE(MinimalAPI)
class UInventoryOwner : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MODULESINVENTARY_API IInventoryOwner
{
	GENERATED_BODY()

public:

	virtual void EquipItem(EEquipSlot Slot, FName ItemID) = 0;

	virtual void UnequipItem(EEquipSlot Slot, FName ItemID) = 0;
};
