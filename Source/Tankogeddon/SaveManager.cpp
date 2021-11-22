// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveManager.h"
#include <Kismet/GameplayStatics.h>
#include "MySaveGame.h"
#include "HealthComponent.h"
#include "TankPawn.h"
#include "MyGameInstance.h"
#include "BasePawn.h"


void USaveManager::Init()
{
	CurrentSave = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
}

bool USaveManager::IsSaveGameExist(const FString& SlotName)
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

void USaveManager::LoadGame(const FString& SlotName)
{

	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasePawn::StaticClass(), FoundActors);
	UMySaveGame* LoadData = MyGameInstance->SaveManager->GetCurrentSave();
	
	if (!LoadData)
	{
		return;
	}
	
	for (const auto Actor : FoundActors)
	{
		ABasePawn* Pawn = Cast<ABasePawn>(Actor);
		
		if (!Pawn->IsPawn())
		{
			Pawn->Destroy();
		}
		else
		{
			Pawn->LoadState(LoadData->TankPlayer);
		}
	}

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	for (auto LoadPawn : LoadData->EnemyPlayer)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.bNoFail = true;
		ABasePawn* OtherPawn = GetWorld()->SpawnActor<ABasePawn>(LoadPawn->BasePawnClass, FVector::ZeroVector, FRotator::ZeroRotator,SpawnParameters);
		if (OtherPawn)
		{
			OtherPawn->LoadState(LoadPawn);
		}
	}
	if (!IsSaveGameExist(SlotName))
	{
		return;
	}

	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0,FAsyncLoadGameFromSlotDelegate::CreateUObject (this,&USaveManager::OnGameLoadedHandle));
}

void USaveManager::SaveCurrentGame(const FString& SlotName)
{
	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasePawn::StaticClass(), FoundActors);
	UMySaveGame* SaveData =  MyGameInstance->SaveManager->GetCurrentSave();

	if (!SaveData)
	{
		return;
	}

	SaveData->EnemyPlayer.Empty();
	for (const auto Actor : FoundActors)
	{
		ABasePawn* Pawn = Cast<ABasePawn>(Actor);
		
		if (Pawn->IsPawn())
		{
			Pawn->SaveState(SaveData->TankPlayer);
		}
		else
		{
			UPawnSaveData* EnemyPlayerSaveData = NewObject<UPawnSaveData>();
			Pawn->SaveState(EnemyPlayerSaveData);
			SaveData->EnemyPlayer.Add(EnemyPlayerSaveData);
		}
	}

	UGameplayStatics::AsyncSaveGameToSlot(CurrentSave, SlotName, 0, FAsyncSaveGameToSlotDelegate::CreateUObject(this, &USaveManager::OnGameSavedHandle));
}

void USaveManager::OnGameLoadedHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame)
{
	CurrentSave = Cast<UMySaveGame>(SaveGame);
	OnGameLoaded.Broadcast(SlotName);
}

void USaveManager::OnGameSavedHandle(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	
	OnGameSaved.Broadcast(SlotName);
}
