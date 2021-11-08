// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InteractableObject.h"
#include "QuestDialog.h"
#include "QuestSystemCharacter.generated.h"

class UQuestList;
class UQuestDialog;



UCLASS()
class QUESTSYSTEM_API AQuestSystemCharacter : public ACharacter, public IInteractableObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuestDialog> QuestDialogClass;

	// Sets default values for this character's properties
	AQuestSystemCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) override;


};
