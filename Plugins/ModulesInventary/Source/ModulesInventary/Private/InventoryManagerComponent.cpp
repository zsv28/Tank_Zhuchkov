// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManagerComponent.h"
#include <tuple>
#include "EquipInventoryWidget.h"
#include "InventoryComponent.h"



// Sets default values for this component's properties
UInventoryManagerComponent::UInventoryManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryManagerComponent::InitLocalInventory(UInventoryComponent* InInventoryComponent)
{
	if (InInventoryComponent && InventoryItemsData && InventoryWidgetClass)
	{
		if (InventoryWidget)
		{
			InventoryWidget->RemoveFromViewport();
		}

		LocalInventoryComponent = InInventoryComponent;

		InventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), InventoryWidgetClass);

		InventoryWidget->RepresentedInventory = LocalInventoryComponent;

		InventoryWidget->AddToViewport();

		InventoryWidget->Init(FMath::Max(LocalInventoryComponent->GetItemsNum(), MinInventorySize));

		InventoryWidget->OnItemDrop.AddUObject(this, &UInventoryManagerComponent::OnItemDropped);


		for (auto& Item : LocalInventoryComponent->GetItems())
		{
			if (FInventoryItemInfo* Data = GetItemData(Item.Value.ID))
			{
				std::ignore = Data->Icon.LoadSynchronous();
				InventoryWidget->AddItem(Item.Value, *Data, Item.Key);
			}
		}
	}




}

bool UInventoryManagerComponent::EquipInventoryWidgetIsVisibled() const
{
	return EquipInventoryWidget ? EquipInventoryWidget->IsInViewport() : false;
}

void UInventoryManagerComponent::SetEquipInventoryWidgetVisible(bool bVisible)
{
	if (EquipInventoryWidget)
	{
		if (bVisible)
		{
			EquipInventoryWidget->AddToViewport();
		}
		else
		{
			EquipInventoryWidget->RemoveFromViewport();
		}
	}
	return;
}

void UInventoryManagerComponent::InitEquipment(UInventoryComponent* InInventoryComponent)
{
	if (EquipInventoryWidgetClass )
	{
		EquipInventoryWidget = CreateWidget<UEquipInventoryWidget>(GetWorld(), EquipInventoryWidgetClass);
		EquipInventoryWidget->RepresentedInventory = InInventoryComponent;

		EquipInventoryWidget->OnItemDrop.AddUObject(this, &UInventoryManagerComponent::OnItemDropped);
		EquipInventoryWidget->AddToViewport();
	}
}

FInventoryItemInfo* UInventoryManagerComponent::GetItemData(FName ItemID)
{
	return InventoryItemsData ? InventoryItemsData->FindRow<FInventoryItemInfo>(ItemID, "") : nullptr;
}

void UInventoryManagerComponent::OnItemDropped(UInventoryCellWidget* DraggedFrom, UInventoryCellWidget* DroppedTo)
{
	if (DraggedFrom == nullptr || DroppedTo == nullptr)
	{
		return;
	}

	UInventoryComponent* FromInventory = DraggedFrom->ParentInventoryWidget->RepresentedInventory;
	UInventoryComponent* ToInventory = DroppedTo->ParentInventoryWidget->RepresentedInventory;

	if (FromInventory == nullptr || ToInventory == nullptr)
	{
		return;
	}

	LocalInventoryComponent->SetItem(DraggedFrom->IndexInInventory, DroppedTo->GetItem());
	LocalInventoryComponent->SetItem(DroppedTo->IndexInInventory, DraggedFrom->GetItem());

	FInventorySlotInfo FromSlot = DraggedFrom->GetItem();
	FInventorySlotInfo ToSlot = DroppedTo->GetItem();

	if (FromSlot.Count <= 0)
	{
		return;
	}

	FInventoryItemInfo* FromInfo = GetItemData(FromSlot.ID);
	FInventoryItemInfo* ToInfo = GetItemData(ToSlot.ID);

	if (FromInfo == nullptr || (ToSlot.ID != NAME_None && ToInfo == nullptr))
	{
		return;
	}

	const int32 MaxCount = ToInventory->GetMaxItemAmount(DroppedTo->IndexInInventory, *FromInfo);

	if (MaxCount == 0)
	{
		return;
	}
	else if (MaxCount > 0)
	{
		int32 ItemsToAdd = FMath::Min(MaxCount, FromSlot.Count);

		ToSlot.Count = FromSlot.Count - ItemsToAdd;
		ToSlot.ID = FromSlot.ID;
		ToInfo = FromInfo;
		FromSlot.Count = ItemsToAdd;
	}

	FromInventory->SetItem(DraggedFrom->IndexInInventory, ToSlot);
	ToInventory->SetItem(DroppedTo->IndexInInventory, FromSlot);
	
	DraggedFrom->Clear();
	if (ToInfo)
	{
		DraggedFrom->AddItem(ToSlot, *ToInfo);
	}

	DroppedTo->Clear();
	DroppedTo->AddItem(FromSlot, *FromInfo);
}

void UInventoryManagerComponent::OnItemUsed(UInventoryCellWidget* CellWidget)
{
	const auto SlotInfo{ CellWidget->GetItem() };
	if (const auto ItemInfo = GetItemData(SlotInfo.ID))
	{
		if (ItemInfo->Type == EItemType::IT_Consumable)
		{
			OnConsumableItemUsed.Broadcast(ItemInfo);
		}
	}
}

