// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "InventoryCellWidget.generated.h"

class UInventoryWidget;
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnItemDrop, UInventoryCellWidget* /*from*/, UInventoryCellWidget* /*to*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnItemUse, UInventoryCellWidget* /*CellWidget*/);

/**
 * 
 */
UCLASS()
class MODULESINVENTARY_API UInventoryCellWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	bool HasItem() const { return bHasItem; }
	
	bool AddItem(const FInventorySlotInfo& Item, const FInventoryItemInfo& ItemInfo);
	
	void Clear();
	

	const FInventorySlotInfo& GetItem();

	UPROPERTY(EditAnywhere)
	int32 IndexInInventory = -1;

	FOnItemDrop OnItemDrop;
	FOnItemUse OnItemUse;


	UPROPERTY()
	UInventoryWidget* ParentInventoryWidget;

    
protected:
  
	bool bHasItem;

	UPROPERTY(meta = (BindWidgetOptional))
	UImage* ItemImage;
    
	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* CountText;

	UPROPERTY()
	FInventorySlotInfo StoredItem;

protected:
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
    
	UPROPERTY(EditDefaultsOnly)
	bool bIsDraggable = true;
};