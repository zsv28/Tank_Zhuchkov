// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <UObject/Interface.h>
#include <GameFramework/Actor.h>
#include "InteractableObject.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnInteractionFinished, AActor* /*InteractableObject*/, AActor* /*ActorInteractedWithObject*/);


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractableObject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class QUESTSYSTEM_API IInteractableObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Interact(AActor* ActorInteractedWithObject);

	UFUNCTION()
	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) {}

	virtual void NotifyInteractionFinished(AActor* InteractableObject, AActor* ActorInteractedWithObject)
	{
		if (OnInteractionFinished.IsBound())
		{
			OnInteractionFinished.Broadcast(InteractableObject, ActorInteractedWithObject);
		}
	}

	FOnInteractionFinished OnInteractionFinished;

};
