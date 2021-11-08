// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocationMarker.h"
#include "LocationMarkerActors.generated.h"

UCLASS()
class QUESTSYSTEM_API ALocationMarkerActors : public AActor, public ILocationMarker
{
	GENERATED_BODY()

public:	

	UFUNCTION(BlueprintCallable)
	void OnOverlapedByActor(AActor* OverlappingActor);
	
};
