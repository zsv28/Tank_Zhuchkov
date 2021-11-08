// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include <Components/ScrollBox.h>
#include "ObjectiveWidget.h"
#include "QuestDescription.generated.h"

class UTextBlock;
class UScrollBox;
class UObjectiveWidget;
class AQuest;

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestDescription : public UUserWidget
{
	GENERATED_BODY()
public:
	void Init(class AQuest* Quest);

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* NameText;

	UPROPERTY(meta = (BindWidgetOptional))
	UScrollBox* ObjectivesList;

	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* DescriptionText;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;

};
