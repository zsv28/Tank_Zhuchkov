// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"
#include <Blueprint/WidgetBlueprintLibrary.h>

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld())
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(
				PC, nullptr, EMouseLockMode::DoNotLock, false);
			PC->bShowMouseCursor = true;
		}
	}
}

void AMyHUD::RemoveCurrentWidget()
{
	if (CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;

		CurrentWidgetID = EWidgetID::WI_None;
	}
}

UUserWidget* AMyHUD::AddWidgetToByClass(TSubclassOf<UUserWidget> WidgetClass, int32 ZOrder)
{
	RemoveCurrentWidget();

	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);

	if (CurrentWidget)
	{
		CurrentWidget->AddToViewport(ZOrder);
	}

	return CurrentWidget;
}

UUserWidget* AMyHUD::UseWidget(EWidgetID WidgetID,int32 ZOrder)
{
	if (CurrentWidgetID == WidgetID)
	{
		return CurrentWidget;
	}

	TSubclassOf<UUserWidget>* WidgetClass = WidgetClases.Find(WidgetID);
	if (WidgetClass)
	{
		CurrentWidgetID = CurrentWidgetID;
		return AddWidgetToByClass(*WidgetClass, ZOrder);
	};

	return CurrentWidget;
}
