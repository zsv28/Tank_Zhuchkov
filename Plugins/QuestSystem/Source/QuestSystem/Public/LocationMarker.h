// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <UObject/Interface.h>
#include <GameFramework/Actor.h>
#include "LocationMarker.generated.h"

class AActor;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULocationMarker : public UInterface
{
	GENERATED_BODY()
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnLocationReached, AActor* /*LocationMarker*/, AActor* /*OverlappedActor*/);

/**
 * 
 */
class QUESTSYSTEM_API ILocationMarker
{
	GENERATED_BODY()


public:
	virtual void NotifyOverlapWithActor(AActor* LocationMarker, AActor* OverlappedActor);

	FOnLocationReached OnLocationReached;
};