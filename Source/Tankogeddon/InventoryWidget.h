// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryCellWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/UniformGridPanel.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;
class UInventoryCellWidget;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnItemUsed, UInventoryCellWidget* /*CellWidget*/)

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	void Init(int32 ItemsNum);
	
	bool AddItem(const FInventorySlotInfo& Item, const FInventoryItemInfo& ItemInfo, int32 SlotPosition = -1);



protected:

	UPROPERTY(meta = (BindWidgetOptional))
	UUniformGridPanel* ItemCellsGrid;

	UPROPERTY(EditDefaultsOnly)
	int32 ItemsInRow = 5;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryCellWidget> CellWidgetClass;
	
	UPROPERTY(BlueprintReadWrite)
	TArray<UInventoryCellWidget*> CellWidgets;
	
	UPROPERTY(meta = (BindWidgetOptional))
	UInventoryCellWidget* GoldCell;
	
	UInventoryCellWidget* CreateCellWidget();

	void InitCellWidget(UInventoryCellWidget* Widget);
public:
	
	FOnItemDrop OnItemDrop;
	FOnItemUsed OnItemUsed;
	UPROPERTY()
	class UInventoryComponent* RepresentedInventory;



protected:
	
	void OnItemDropped(UInventoryCellWidget* DraggedFrom, UInventoryCellWidget* DroppedTo);
	
	void OnItemUsedFunc(UInventoryCellWidget* CellWidget);
};

