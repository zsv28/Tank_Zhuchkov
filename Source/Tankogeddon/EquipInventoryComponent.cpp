// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipInventoryComponent.h"
#include <Misc/AssertionMacros.h>
#include "InventoryComponent.h"

UEquipInventoryComponent::UEquipInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	EquipSlots.Add(0, EEquipSlot::ES_Cannon);
	EquipSlots.Add(1, EEquipSlot::ES_Tower);
	EquipSlots.Add(2, EEquipSlot::ES_Engine);
	EquipSlots.Add(3, EEquipSlot::ES_TankTrack);
	EquipSlots.Add(4, EEquipSlot::ES_Bullet);

}

int32 UEquipInventoryComponent::GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& Item)
{
	FInventorySlotInfo* InfoPtr = Items.Find(SlotIndex);
	if (InfoPtr != nullptr || Item.Type != EItemType::IT_Equipment || !EquipSlots.Contains(SlotIndex) ||
		EquipSlots.FindChecked(SlotIndex) != Item.EquipSlot)
	{
		return 0;
	}

	return 1;

}

void UEquipInventoryComponent::SetItem(int32 SlotIndex, const FInventorySlotInfo& Item)
{
	FInventorySlotInfo* EquippedItem = GetItem(SlotIndex);
	EEquipSlot EquipSlot = EquipSlots.Contains(SlotIndex) ? EquipSlots.FindChecked(SlotIndex) : EEquipSlot::ES_None;


	if (EquippedItem && TankOwner)
	{
		TankOwner->UnequipItem(EquipSlot, EquippedItem->ID);
	}
	Super::SetItem(SlotIndex, Item);

	if(TankOwner)
	{
		TankOwner->EquipItem(EquipSlot, Item.ID);
	}

	return;
}



void UEquipInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	TankOwner = Cast<ATankPawn>(GetOwner());
}
