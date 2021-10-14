// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManagerComponent.h"
#include <tuple>


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

void UInventoryManagerComponent::Init(UInventoryComponent* InInventoryComponent)
{
	if (InInventoryComponent && InventoryItemsData && InventoryWidgetClass)
	{
		if (InventoryWidget)
		{
			InventoryWidget->RemoveFromViewport();
		}
		
		LocalInventoryComponent = InInventoryComponent;

		InventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), InventoryWidgetClass);
		
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

FInventoryItemInfo* UInventoryManagerComponent::GetItemData(FName ItemID)
{
	return InventoryItemsData ? InventoryItemsData->FindRow<FInventoryItemInfo>(ItemID, "") : nullptr;
}

void UInventoryManagerComponent::OnItemDropped(UInventoryCellWidget* DraggedFrom, UInventoryCellWidget* DroppedTo)
{
	if (DraggedFrom == nullptr || DroppedTo == nullptr || LocalInventoryComponent == nullptr)
	{
		return;
	}
	
	LocalInventoryComponent->SetItem(DraggedFrom->IndexInInventory, DroppedTo->GetItem());
	LocalInventoryComponent->SetItem(DroppedTo->IndexInInventory, DraggedFrom->GetItem());

	FInventorySlotInfo FromSlot = DraggedFrom->GetItem();
	FInventorySlotInfo ToSlot = DroppedTo->GetItem();

	FInventoryItemInfo* FromInfo = GetItemData(FromSlot.ID);
	FInventoryItemInfo* ToInfo = GetItemData(ToSlot.ID);

	if (FromInfo == nullptr || (ToSlot.ID != NAME_None && ToInfo == nullptr))
	{
		return;
	}

	DraggedFrom->Clear();
	if (ToInfo)
	{
		DraggedFrom->AddItem(ToSlot, *ToInfo);
	}

	DroppedTo->Clear();
	DroppedTo->AddItem(FromSlot, *FromInfo);
}

