// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SaveManager.h"
#include "MyGameInstance.generated.h"

class USaveManager;
class UObject;


/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	 
	UFUNCTION(BlueprintPure, meta = (WorldContext = WorldContextObject))
	static USaveManager* GetSaveManager(UObject* WorldContextObject);

	UPROPERTY(BlueprintReadOnly)
	USaveManager* SaveManager;
	
};
