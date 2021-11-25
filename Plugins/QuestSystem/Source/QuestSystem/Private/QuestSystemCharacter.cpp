// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystemCharacter.h"
#include "QuestListComponent.h"
#include "QuestDialog.h"
#include "Quest.h"
#include <Blueprint/WidgetBlueprintLibrary.h>


// Sets default values
AQuestSystemCharacter::AQuestSystemCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AQuestSystemCharacter::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> AttachedActors;
	GetAttachedActors(AttachedActors);
	for (auto Actor : AttachedActors)
	{
		if (auto Quest = Cast<AQuest>(Actor))
		{
			if (auto PrerquisedQuest = Quest->GetPrerquisedQuest())
			{
				Quest->SetVisibility(false);
				PrerquisedQuest->OnQuestStatusUpdated.AddLambda([Quest](AQuest* PreviousQuest)
					{
						if (PreviousQuest->IsCompleted())
						{
							Quest->SetVisibility(true);					
						}
					});
			}
		}
	}
	
	
}

// Called every frame
void AQuestSystemCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AQuestSystemCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AQuestSystemCharacter::Interact_Implementation(AActor* ActorInteractedWithObject)
{
	if (ActorInteractedWithObject != nullptr)
	{
		auto QuestListCmp{ Cast<UQuestListComponent>(
			ActorInteractedWithObject->GetComponentByClass(UQuestListComponent::StaticClass())) };
		if (QuestListCmp == nullptr)
		{
			return;
		}

		TArray<AActor*> AttachedActors;
		GetAttachedActors(AttachedActors);
		for (auto Actor : AttachedActors)
		{
			if (auto Quest = Cast<AQuest>(Actor))
			{
				auto PrerquisedQuest{ Quest->GetPrerquisedQuest() };
				if (Quest->bIsTaken || (PrerquisedQuest && !PrerquisedQuest->IsCompleted()))
				{
					continue;
				}

				if (QuestDialogClass)
				{
					auto QuestDialog{ CreateWidget<UQuestDialog>(GetWorld(), QuestDialogClass) };
					QuestDialog->Init(Quest);
					QuestDialog->OnQuestAccepted.BindUObject(QuestListCmp, &UQuestListComponent::AddQuest, Quest);
					QuestDialog->OnQuestQuited.BindLambda([this, ActorInteractedWithObject]()
						{
							NotifyInteractionFinished(this, ActorInteractedWithObject);
						});
					QuestDialog->AddToViewport();
				}
			}
		}
	}

	NotifyInteractionFinished(this, ActorInteractedWithObject);
}


