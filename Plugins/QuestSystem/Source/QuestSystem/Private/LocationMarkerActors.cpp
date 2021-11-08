// Fill out your copyright notice in the Description page of Project Settings.


#include "LocationMarkerActors.h"



void ALocationMarkerActors::OnOverlapedByActor(AActor* OverlappingActor)
{
	if (OverlappingActor != nullptr)
	{
		NotifyOverlapWithActor(this, OverlappingActor);
	}
}
