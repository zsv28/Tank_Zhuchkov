// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "SaveManager.h"
#include <Kismet/GameplayStatics.h>

void UMyGameInstance::Init()
{
	Super::Init();
	SaveManager = NewObject<USaveManager>(this);
	SaveManager->Init();
}

USaveManager* UMyGameInstance::GetSaveManager(UObject* WorldContextObject)
{
	auto MyInstans = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	return MyInstans ? MyInstans->SaveManager : nullptr;
}
