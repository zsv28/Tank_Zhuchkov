// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */

UENUM()
enum class EWidgetID : uint8
{
	WI_None,
	WI_MainMenu,
	WI_Settings,
	WI_GameOver,
	WI_PawnHealth

};

UCLASS()
class TANKOGEDDON_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly)
	TMap<EWidgetID, TSubclassOf<UUserWidget>> WidgetClases;

	UPROPERTY()
	UUserWidget* CurrentWidget = nullptr;

	EWidgetID CurrentWidgetID = EWidgetID::WI_None;

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void RemoveCurrentWidget();

	UFUNCTION(BlueprintPure)
	UUserWidget* UseWidget(EWidgetID widgetID, int32 ZOrder = 0);

	UFUNCTION(BlueprintPure)
	UUserWidget* GetCurrentWidget() const { return CurrentWidget; };

	UFUNCTION(BlueprintPure)
	EWidgetID GetCurrentWidgetId() const { return CurrentWidgetID; };

	UFUNCTION(BlueprintCallable)
	UUserWidget* AddWidgetToByClass(TSubclassOf<UUserWidget> WidgetClass, int32 ZOrder = 0);


};
