// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "Components/ActorComponent.h"
#include "InventoryWidget.h"
#include "InventoryComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MODULESINVENTARY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual FInventorySlotInfo* GetItem(int32 SlotIndex);
	virtual void SetItem(int32 SlotIndex, const FInventorySlotInfo& Item);
	void ClearItem(int32 SlotIndex);
	const TMap<int32, FInventorySlotInfo>& GetItems() const;
	int32 GetItemsNum() const; 
	virtual int32 GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& Item);

protected:
	
	UPROPERTY(EditAnywhere)
    TMap<int32, FInventorySlotInfo> Items;

};
