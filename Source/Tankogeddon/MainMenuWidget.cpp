// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Components/Widget.h>
#include "Components/SlateWrapperTypes.h"
#include "StyleSet.h"
#include "RadioButtonsWidgetStyle.h"



void UMainMenuWidget::NativePreConstruct()
{
	if (RadioButtonsWidget)
	{
		RadioButtonsWidget->WidgetStyle = FStyleSet::Get().GetWidgetStyle<FRadioButtonsStyle>("WS_RadioButtons_1");
	}

	Super::NativePreConstruct();
}

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PlayAnimation(WidgetAnim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);

	if (NewGame)
	{
		
		NewGame->OnClicked.AddDynamic(this,&UMainMenuWidget::OnNewGameClicked);
		NewGame->OnHovered.AddDynamic(this, &UMainMenuWidget::OnNewGameHovered);
		NewGame->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnNewGameUnhovered);
	}
	if (Setting)
	{
		Setting->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSettingClicked);
		Setting->OnHovered.AddDynamic(this, &UMainMenuWidget::OnSettingHovered);
		Setting->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnSettingUnhovered);
	}
	if (Return_1)
	{
		Return_1->OnClicked.AddDynamic(this, &UMainMenuWidget::OnReturn_1Clicked);
		Return_1->OnHovered.AddDynamic(this, &UMainMenuWidget::OnReturn_1Hovered);
		Return_1->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnReturn_1Unhovered);
	}
	if (Back_1)
	{
		Back_1->OnClicked.AddDynamic(this, &UMainMenuWidget::OnBack_1Clicked);
		Back_1->OnHovered.AddDynamic(this, &UMainMenuWidget::OnBack_1Hovered);
		Back_1->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnBack_1Unhovered);
	}
	if (Setting_1)
	{
		Setting_1->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSetting_1Clicked);
	}
	if (Setting_2)
	{
		Setting_2->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSetting_2Clicked);
	}
	if (Setting_3)
	{
		Setting_3->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSetting_3Clicked);
	}
	if (Setting_4)
	{
		Setting_4->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSetting_4Clicked);
		Setting_4->OnHovered.AddDynamic(this, &UMainMenuWidget::OnSetting_4Hovered);
		Setting_4->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnSetting_4Unhovered);
	}
	if (Quit)
	{
		Quit->OnClicked.AddDynamic(this, & UMainMenuWidget::OnQuitClicked);
		Quit->OnHovered.AddDynamic(this, &UMainMenuWidget::OnQuitHovered);
		Quit->OnUnhovered.AddDynamic(this, &UMainMenuWidget::OnQuitUnhovered);
	}

}

void UMainMenuWidget::OnNewGameClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "TestLevel");
}

void UMainMenuWidget::OnNewGameHovered()
{
	PlayAnimation(NewGame_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UMainMenuWidget::OnNewGameUnhovered()
{
	PlayAnimation(NewGame_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UMainMenuWidget::OnSettingClicked()
{
	Optional->UWidget::SetVisibility(ESlateVisibility::Visible);
	Menu->UWidget::SetVisibility(ESlateVisibility::Hidden);
	T_NameGame->UWidget::SetVisibility(ESlateVisibility::Hidden);
	
}

void UMainMenuWidget::OnSettingHovered()
{
	PlayAnimation(Setting_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UMainMenuWidget::OnSettingUnhovered()
{
	PlayAnimation(Setting_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}


void UMainMenuWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void UMainMenuWidget::OnQuitHovered()
{
	PlayAnimation(Quit_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UMainMenuWidget::OnQuitUnhovered()
{
	PlayAnimation(Quit_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UMainMenuWidget::OnReturn_1Clicked()
{
	Optional->UWidget::SetVisibility(ESlateVisibility::Hidden);
	Menu->UWidget::SetVisibility(ESlateVisibility::Visible);
	T_NameGame->UWidget::SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuWidget::OnReturn_1Hovered()
{
	PlayAnimation(REturn_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


void UMainMenuWidget::OnReturn_1Unhovered()
{
	PlayAnimation(REturn_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UMainMenuWidget::OnBack_1Clicked()
{
	Optional->UWidget::SetVisibility(ESlateVisibility::Visible);
	Control_1->UWidget::SetVisibility(ESlateVisibility::Hidden);
}

void UMainMenuWidget::OnBack_1Hovered()
{
	PlayAnimation(Back_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UMainMenuWidget::OnBack_1Unhovered()
{
	PlayAnimation(Back_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}

void UMainMenuWidget::OnSetting_1Clicked()
{
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "r.SetRes 640x480");
}

void UMainMenuWidget::OnSetting_2Clicked()
{
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "r.SetRes 1280x720");
}

void UMainMenuWidget::OnSetting_3Clicked()
{
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "r.SetRes 1920x1080");
}

void UMainMenuWidget::OnSetting_4Clicked()
{
	Optional->UWidget::SetVisibility(ESlateVisibility::Hidden);
	Control_1->UWidget::SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuWidget::OnSetting_4Hovered()
{
	PlayAnimation(Control_Anim, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}

void UMainMenuWidget::OnSetting_4Unhovered()
{
	PlayAnimation(Control_Anim, 0.0f, 1, EUMGSequencePlayMode::Reverse, 1.0f, false);
}


