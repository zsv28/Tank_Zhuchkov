// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BasePawn.h"
#include "MySaveGame.generated.h"

class ABasePawn;



UCLASS()
class TANKOGEDDON_API UPawnSaveData : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<ABasePawn> BasePawnClass;

	UPROPERTY(BlueprintReadWrite)
	float CurrentHealth = 0.f;

	UPROPERTY(BlueprintReadWrite)
	float MaxHealth = 0.f;

	UPROPERTY(BlueprintReadWrite)
	int32 CurrentAmmo = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 MaxAmmo = 0;

	UPROPERTY(BlueprintReadWrite)
	FTransform PlayerTransform;
};


UCLASS()
class TANKOGEDDON_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:

	UMySaveGame();

	UPROPERTY(BlueprintReadWrite)
	UPawnSaveData* TankPlayer;

	UPROPERTY(BlueprintReadWrite)
	TArray<UPawnSaveData*> EnemyPlayer;


};

