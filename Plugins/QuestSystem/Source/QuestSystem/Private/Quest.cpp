// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest.h"
#include <GameFramework/Actor.h>
#include "Objective.h"

// Sets default values
AQuest::AQuest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = RootSceneComponent;

	InfoComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("QuestInfo"));
	InfoComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AQuest::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AQuest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AQuest::IsCompleted() const
{
	if (bKeepObjectivesOrder && Objectives.IsValidIndex(Objectives.Num()-1))
	{
		return Objectives[Objectives.Num() - 1]->bIsCompleted;
	}
	for (UObjective* Objective : Objectives)
	{
		if (Objective && !Objective->bIsCompleted)
		{
			return false;
		}
	}
	return true;
}

void AQuest::UpdateLocation()
{
	AActor* ParentActor = GetAttachParentActor();
	if (ParentActor)
	{
		SetActorLocation(ParentActor->GetActorLocation());
	}

}

void AQuest::TakeQuest(AActor* Character)
{
	for (int32 i = 0; i < Objectives.Num(); i++)
	{
		if (Objectives[i])
		{
			Objectives[i]->ActivateObjective(Character);
			Objectives[i]->bCanBeCompleted = !bKeepObjectivesOrder || i == 0;
			Objectives[i]->OnObjectiveCompleted.AddUObject(this, &AQuest::OnObjectiveCompleted);
		}
	}
	bIsTaken = true;
	SetVisibility(false);

}

void AQuest::OnObjectiveCompleted(UObjective* Objective)
{
	if (bKeepObjectivesOrder)
	{
		int32 ObjectiveIndex;
		if (Objectives.Find(Objective, ObjectiveIndex) &&
			Objectives.IsValidIndex(ObjectiveIndex + 1))
		{
			Objectives[ObjectiveIndex + 1]->bCanBeCompleted = true;
		}
	}

	OnQuestStatusUpdated.Broadcast(this);

}
bool AQuest::IsVisible() const
{
	return InfoComponent->IsVisible();
}

void AQuest::SetVisibility(bool bActive)
{
	InfoComponent->SetVisibility(bActive);
}

FText AQuest::GetName() const
{
	return Name;
}

FText AQuest::GetDescription() const
{
	return Descrition;
}

#if WITH_EDITOR

void AQuest::AddLocationObjective()
{
	Objectives.Add(NewObject<ULocationObjective>(this));
}

void AQuest::AddInteractObjective()
{
	Objectives.Add(NewObject<UInteractionObjective>(this));
}

#endif
