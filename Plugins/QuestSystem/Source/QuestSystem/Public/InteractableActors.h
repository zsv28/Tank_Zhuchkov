// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObject.h"
#include "InteractableActors.generated.h"

UCLASS()
class QUESTSYSTEM_API AInteractableActors : public AActor, public IInteractableObject
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintCallable)
	void OnInteractionFinished(AActor* ActorInteractedWithObject);

};
