// Fill out your copyright notice in the Description page of Project Settings.


#include "MySaveGame.h"
#include "QuestListComponent.h"



UMySaveGame::UMySaveGame()
{
	TankPlayer = NewObject<UPawnSaveData>();
}

FString UMySaveGame::SaveData() const
{
	TArray<FString> QuestElements;
	
	if (Quest)
	{
		QuestElements.Add(FString::Format(TEXT("Quest_Name: {0}"), { Quest->GetName().ToString() }));
		QuestElements.Add(FString::Format(TEXT("Quest_Description: {0}"), { Quest->GetDescription().ToString() }));
		QuestElements.Add(FString::Format(TEXT("IsStoryQuest: {0}"), { Quest->bIsStoryQuest ? TEXT("true") : TEXT("false") }));
		QuestElements.Add(FString::Format(TEXT("KeepObjectivesOrder: {0}"), { Quest->KeepObjectivesOrder() ? TEXT("true") : TEXT("false") }));
		QuestElements.Add(FString::Format(TEXT("IsTaken: {0}"), { Quest->bIsTaken ? TEXT("true") : TEXT("false") }));
	}

	FString Result = FString::Join(QuestElements, _T("\n"));

	return Result;
	
}

void UMySaveGame::LoadData(const FString& File) const
{
	if (Quest)
	{
		TArray<FString> ReadQuestElements;

		for (int32 n = 0; n < ReadQuestElements.Num(); ++n)
		{
			switch (n)
			{
			case 0: Quest->SetName(FText::FromString(ReadQuestElements[n])); break;
			case 1: Quest->SetDescription(FText::FromString(ReadQuestElements[n])); break;
			case 2: Quest->SetIsStoryQuest(ReadQuestElements[n].ToBool()); break;
			case 3: Quest->SetKeepObjectivesOrder(ReadQuestElements[n].ToBool()); break;
			case 4: Quest->SetIsTaken(ReadQuestElements[n].ToBool()); break;
			default: ;
			}
		}

		File.ParseIntoArray(ReadQuestElements, _T("\n"), true);
	}
}

