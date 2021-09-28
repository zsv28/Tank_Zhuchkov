// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "MainMenuWidget.generated.h"


/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	vitrual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UButton* NewGame;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Setting;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Quit;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Setting_1;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Setting_2;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Setting_3;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Setting_4;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Return_1;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Back_1;

};
