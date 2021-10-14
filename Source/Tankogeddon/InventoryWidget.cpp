// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UInventoryWidget::Init(int32 ItemsNum)
{
	if (ItemCellsGrid)
	{
		ItemCellsGrid->ClearChildren();
		for (int32 i = 0; i < ItemsNum; i++)
		{
			UInventoryCellWidget* Cell = CreateCellWidget();
			if (Cell)
			{
				Cell->IndexInInventory = i;
				ItemCellsGrid->AddChildToUniformGrid(Cell, i / ItemsInRow, i % ItemsInRow);
			}
		}
	}
}

bool UInventoryWidget::AddItem(const FInventorySlotInfo& Item, const FInventoryItemInfo& ItemInfo, int32 SlotPosition)
{
	if (ItemInfo.Type == EItemType::IT_Currency)
	{
		if (GoldCell)
		{
			return GoldCell->AddItem(Item, ItemInfo);
		}
	}

	if (ItemCellsGrid)
	{
		UInventoryCellWidget** WidgetToAddItemPtr = CellWidgets.FindByPredicate([SlotPosition](UInventoryCellWidget* Cell)
		{
			return Cell && Cell->IndexInInventory == SlotPosition;
		});

		UInventoryCellWidget* WidgetToAddItem = nullptr;
		if (WidgetToAddItemPtr)
		{
			WidgetToAddItem = *WidgetToAddItemPtr;
		}
		else
		{
			for (UInventoryCellWidget* Cell : CellWidgets)
			{
				if (!Cell->HasItem())
				{
					WidgetToAddItem = Cell;
					break;
				}
			}
		}

		if (WidgetToAddItem)
		{
			return WidgetToAddItem->AddItem(Item, ItemInfo);
		}
	}
	return false;
}

UInventoryCellWidget* UInventoryWidget::CreateCellWidget()
{
	if (CellWidgetClass)
	{
		UInventoryCellWidget* Cell = CreateWidget<UInventoryCellWidget>(this, CellWidgetClass);
		CellWidgets.Add(Cell);
		
		Cell->OnItemDrop.AddUObject(this, &UInventoryWidget::OnItemDropped);
		
		return Cell;
	}
	return nullptr;
}

void UInventoryWidget::OnItemDropped(UInventoryCellWidget* DraggedFrom, UInventoryCellWidget* DroppedTo)
{
	OnItemDrop.Broadcast(DraggedFrom, DroppedTo);
}
