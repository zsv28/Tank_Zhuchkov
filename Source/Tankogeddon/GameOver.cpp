// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOver.h"
#include "MainMenuWidget.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include <Blueprint/UserWidget.h>

void UGameOver::NativeConstruct()
{
	Super::NativeConstruct();

	PlayAnimation(GameOver_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);

	if (MainMenu)
	{
		MainMenu->OnClicked.AddDynamic(this, &UGameOver::OnMainMenuClicked);
		MainMenu->OnHovered.AddDynamic(this, &UGameOver::OnMainMenuHovered);
		MainMenu->OnUnhovered.AddDynamic(this, &UGameOver::OnMainMenuUnhovered);
	}
	if (Restart)
	{
		Restart->OnClicked.AddDynamic(this, &UGameOver::OnRestartClicked);
		Restart->OnHovered.AddDynamic(this, &UGameOver::OnRestartHovered);
		Restart->OnUnhovered.AddDynamic(this, &UGameOver::OnRestartUnhovered);
	}
	if (Quit)
	{
		Quit->OnClicked.AddDynamic(this, &UGameOver::OnQuitClicked);
		Quit->OnHovered.AddDynamic(this, &UGameOver::OnQuitHovered);
		Quit->OnUnhovered.AddDynamic(this, &UGameOver::OnQuitUnhovered);
	}
}



void UGameOver::OnMainMenuClicked()
{
	MainWidget = Cast<UMainMenuWidget>(CreateWidget(this, MenuClass));
	MainWidget->AddToViewport();
}

void UGameOver::OnMainMenuHovered()
{
	PlayAnimation(MainMenu_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UGameOver::OnMainMenuUnhovered()
{
	PlayAnimation(MainMenu_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UGameOver::OnRestartClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "TestLevel");
}

void UGameOver::OnRestartHovered()
{
	PlayAnimation(Restart_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UGameOver::OnRestartUnhovered()
{
	PlayAnimation(Restart_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UGameOver::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void UGameOver::OnQuitHovered()
{
	PlayAnimation(Quit_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UGameOver::OnQuitUnhovered()
{
	PlayAnimation(Quit_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}
