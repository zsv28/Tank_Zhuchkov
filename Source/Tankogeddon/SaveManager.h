// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MySaveGame.h"
#include "SaveManager.generated.h"



class UMySaveGame;



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveAction, const FString&, SlotName);

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API USaveManager : public UObject
{
	GENERATED_BODY()
	
public:

	void Init();

	UFUNCTION(BlueprintPure)
	bool IsSaveGameExist(const FString& SlotName);

	UFUNCTION(BlueprintCallable)
	void LoadGame(const FString& SlotName);

	UFUNCTION(BlueprintCallable)
	void SaveCurrentGame(const FString& SlotName);

	UPROPERTY(BlueprintAssignable)
	FOnSaveAction OnGameSaved;
	UPROPERTY(BlueprintAssignable)
	FOnSaveAction OnGameLoaded;

	UFUNCTION(BlueprintCallable)
	UMySaveGame* GetCurrentSave() const { return CurrentSave; }

protected:
	UPROPERTY(BlueprintReadWrite)
	UMySaveGame* CurrentSave;

	void OnGameLoadedHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame);
	void OnGameSavedHandle(const FString& SlotName, const int32 UserIndex, bool bSuccess);

};
