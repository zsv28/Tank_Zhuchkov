// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActors.h"


void AInteractableActors::OnInteractionFinished(AActor* ActorInteractedWithObject)
{
	NotifyInteractionFinished(this, ActorInteractedWithObject);
}
