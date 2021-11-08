// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Image.h>
#include "QuestInfo.generated.h"

class UImage;

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestInfo : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* ImageInfo;
};
