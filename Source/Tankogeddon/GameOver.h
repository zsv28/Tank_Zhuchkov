// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "MainMenuWidget.h"
#include "GameOver.generated.h"

/**
 * 
 */


UCLASS()
class TANKOGEDDON_API UGameOver : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* MainMenu;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Restart;
	UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly)
	UButton* Quit;

	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* GameOver_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* MainMenu_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Restart_Anim;
	UPROPERTY(meta = (BindWidgetAnim), Transient, BlueprintReadOnly)
	UWidgetAnimation* Quit_Anim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UMainMenuWidget> MenuClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMainMenuWidget* MainWidget;




	UFUNCTION()
	void OnMainMenuClicked();
	UFUNCTION()
	void OnMainMenuHovered();
	UFUNCTION()
	void OnMainMenuUnhovered();

	UFUNCTION()
	void OnRestartClicked();
	UFUNCTION()
	void OnRestartHovered();
	UFUNCTION()
	void OnRestartUnhovered();

	UFUNCTION()
	void OnQuitClicked();
	UFUNCTION()
	void OnQuitHovered();
	UFUNCTION()
	void OnQuitUnhovered();

};
