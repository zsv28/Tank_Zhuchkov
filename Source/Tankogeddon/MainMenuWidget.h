// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Animation/WidgetAnimation.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include <Components/VerticalBox.h>
#include <Components/RichTextBlock.h>
#include "MainMenuWidget.generated.h"


/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

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

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UVerticalBox* Menu;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UVerticalBox* Optional;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UVerticalBox* Control_1;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	URichTextBlock* T_NameGame;

	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* WidgetAnim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* NewGame_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Setting_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Quit_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* REturn_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Back_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Control_Anim;


	UFUNCTION()
	void OnNewGameClicked();
	UFUNCTION()
	void OnNewGameHovered();
	UFUNCTION()
	void OnNewGameUnhovered();


	UFUNCTION()
	void OnSettingClicked();
	UFUNCTION()
	void OnSettingHovered();
	UFUNCTION()
	void OnSettingUnhovered();

	UFUNCTION()
	void OnQuitClicked();
	UFUNCTION()
	void OnQuitHovered();
	UFUNCTION()
	void OnQuitUnhovered();


	UFUNCTION()
	void OnReturn_1Clicked();
	UFUNCTION()
	void OnReturn_1Hovered();
	UFUNCTION()
	void OnReturn_1Unhovered();

	UFUNCTION()
	void OnBack_1Clicked();
	UFUNCTION()
	void OnBack_1Hovered();
	UFUNCTION()
	void OnBack_1Unhovered();

	UFUNCTION()
	void OnSetting_1Clicked();

	UFUNCTION()
	void OnSetting_2Clicked();

	UFUNCTION()
	void OnSetting_3Clicked();

	UFUNCTION()
	void OnSetting_4Clicked();
	UFUNCTION()
	void OnSetting_4Hovered();
	UFUNCTION()
	void OnSetting_4Unhovered();

	
};
