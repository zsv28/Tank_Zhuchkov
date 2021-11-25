// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveManager.h"
#include <Kismet/GameplayStatics.h>
#include "MySaveGame.h"
#include "TankPawn.h"
#include "MyGameInstance.h"
#include "BasePawn.h"
#include "QuestListComponent.h"
#include "Quest.h"



void USaveManager::Init()
{
	CurrentSave = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));

	ExistingSavedSlots.Empty();
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	const FString FilePath = FPaths::Combine(FPaths::ProjectContentDir(),
	                                         ExistingSavedSlotsFilePath);
	if (PlatformFile.FileExists(*FilePath))
	{
		FString ExistingSavingsArray;
		if (FFileHelper::LoadFileToString(ExistingSavingsArray, *FilePath))
		{
			ExistingSavingsArray.ParseIntoArray(ExistingSavedSlots, TEXT(","));
		}
	}


}

bool USaveManager::IsSaveGameExist(const FString& SlotName)
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

void USaveManager::LoadGame(const FString& SlotName)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasePawn::StaticClass(), FoundActors);
	UMySaveGame* LoadDataGame = GetCurrentSave();
	
	if (!LoadDataGame)
	{
		return;
	}
	FString FileGame;
	FileLoadGame(SlotName, FileGame);
	LoadDataGame->LoadData(FileGame);
	for (const auto Actor : FoundActors)
	{
		ABasePawn* Pawn = Cast<ABasePawn>(Actor);
		
		if (!Pawn->IsPawn())
		{
			Pawn->Destroy();
		}
		else
		{
			Pawn->LoadState(LoadDataGame->TankPlayer);
			UQuestListComponent* QuestListComponent = Cast<UQuestListComponent>((Pawn->GetComponentByClass(UQuestListComponent::StaticClass())));
			if (QuestListComponent)
			{
				QuestListComponent->SetActiveQuest(LoadDataGame->Quest);
			}
		}
	}

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	for (auto LoadPawn : LoadDataGame->EnemyPlayer)
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
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasePawn::StaticClass(), FoundActors);
	UMySaveGame* SaveDataGame =  GetCurrentSave();

	if (!SaveDataGame)
	{
		return;
	}

	SaveDataGame->EnemyPlayer.Empty();
	SaveDataGame->QuestsArray.Empty();
	for (const auto Actor : FoundActors)
	{
		if (AQuest* Quests = Cast<AQuest>(Actor))
		{
			SaveDataGame->QuestsArray.AddUnique(Quests);
			
		}
		else if (ABasePawn* Pawn = Cast<ABasePawn>(Actor))
		{

			if (Pawn->IsPawn())
			{
				Pawn->SaveState(SaveDataGame->TankPlayer);

				UQuestListComponent* QuestListComponent = Cast<UQuestListComponent>((Pawn->GetComponentByClass(UQuestListComponent::StaticClass())));
				if (QuestListComponent)
				{
					SaveDataGame->Quest = QuestListComponent->GetActiveQuest();
				}
			}
			else
			{
				UPawnSaveData* EnemyPlayerSaveData = NewObject<UPawnSaveData>();
				Pawn->SaveState(EnemyPlayerSaveData);
				SaveDataGame->EnemyPlayer.Add(EnemyPlayerSaveData);
			}
		}
	}
	FileSaveGame(SlotName, SaveDataGame->SaveData());
	UGameplayStatics::AsyncSaveGameToSlot(CurrentSave, SlotName, 0, FAsyncSaveGameToSlotDelegate::CreateUObject(this, &USaveManager::OnGameSavedHandle));
}

void USaveManager::OnGameLoadedHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame)
{
	CurrentSave = Cast<UMySaveGame>(SaveGame);
	OnGameLoaded.Broadcast(SlotName);
}

void USaveManager::OnGameSavedHandle(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	
	if (!ExistingSavedSlots.Contains(SlotName))
	{
		ExistingSavedSlots.AddUnique(SlotName);
		CacheExistingSavedSlotsInfo();

	}

	OnGameSaved.Broadcast(SlotName);
}

void USaveManager::CacheExistingSavedSlotsInfo()
{
	const FString FilePath = FPaths::Combine(FPaths::ProjectContentDir(), ExistingSavedSlotsFilePath);

	FString ExistingSavingsArray = "";
	for (const FString& Slot : ExistingSavedSlots)
	{
		ExistingSavingsArray += Slot + ",";
	}

	FFileHelper::SaveStringToFile(ExistingSavingsArray, *FilePath, FFileHelper::EEncodingOptions::ForceUnicode, &IFileManager::Get(), FILEWRITE_EvenIfReadOnly);
}
void USaveManager::FileSaveGame(const FString& SlotName, const FString& Text)
{
	const FString FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), SlotName + ".sav");

	FFileHelper::SaveStringToFile(Text, *FilePath, FFileHelper::EEncodingOptions::ForceUnicode, &IFileManager::Get(), FILEWRITE_EvenIfReadOnly);
}

void USaveManager::FileLoadGame(const FString& SlotName, FString& Text) const
{
	const FString FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), SlotName + ".sav");

	FFileHelper::LoadFileToString(Text, *FilePath);

}
