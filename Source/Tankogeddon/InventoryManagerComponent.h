﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "InventoryWidget.h"
#include "Components/ActorComponent.h"
#include "InventoryManagerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TANKOGEDDON_API UInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	void Init(UInventoryComponent* InInventoryComponent);

	FInventoryItemInfo* GetItemData(FName ItemID);

protected:
	
	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent;
    
	UPROPERTY(EditAnywhere)
	UDataTable* InventoryItemsData;
	
	UPROPERTY()
	UInventoryWidget* InventoryWidget;
    
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;
	
	UPROPERTY(EditAnywhere)
	int32 MinInventorySize = 20;
	
	void OnItemDropped(UInventoryCellWidget* DraggedFrom, UInventoryCellWidget* DroppedTo);
	
};
