// Copyright Epic Games, Inc. All Rights Reserved.

#include "AddetQuestActors.h"
#include "AddetQuestActorsStyle.h"
#include "AddetQuestActorsCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include <Engine/Selection.h>
#include <Framework/MultiBox/MultiBoxExtender.h>
#include <GameFramework/Actor.h>
#include <Widgets/DeclarativeSyntaxSupport.h>
#include "Quest.h"

static const FName AddetQuestActorsTabName("AddetQuestActors");

#define LOCTEXT_NAMESPACE "FAddetQuestActorsModule"

void FAddetQuestActorsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAddetQuestActorsStyle::Initialize();
	FAddetQuestActorsStyle::ReloadTextures();

	FAddetQuestActorsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FAddetQuestActorsCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FAddetQuestActorsModule::PluginButtonClicked),
		FCanExecuteAction());
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AddetQuestActorsTabName, FOnSpawnTab::CreateRaw(this, &FAddetQuestActorsModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FAddetQuestActorsTabTitle", "QuestInfoActors"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this,
	&FAddetQuestActorsModule::AddToolbarExtension));

	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
}

void FAddetQuestActorsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAddetQuestActorsStyle::Shutdown();

	FAddetQuestActorsCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AddetQuestActorsTabName);
}

TSharedRef<SDockTab> FAddetQuestActorsModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{

	FText WidgetText = FText::FromString("Quest info actors");

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.Padding(10.f, 10.f)
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Top)
		[
			SNew(SButton)
			.OnClicked_Raw(this, &FAddetQuestActorsModule::OnInfoQuest)
		[
			SNew(STextBlock)
			.Text(WidgetText)
		]
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)

		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor{ 255.0f, 255.0f, 0.f, 1.f })
			.Text(FText::FromString("Quest Name"))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)

		[
			SAssignNew(TextNamePtr, STextBlock)
			
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)

		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor{ 0.10f, 250.0f, 0.6f, 1.f })
			.Text(FText::FromString("Quest Description"))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		[
			SAssignNew(TextDescriptionPtr, STextBlock)
			
		
		]
		];

}


void FAddetQuestActorsModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(AddetQuestActorsTabName);
	
}

void FAddetQuestActorsModule::AddToolbarExtension(FToolBarBuilder& Build)
{
	Build.AddToolBarButton(FAddetQuestActorsCommands::Get().OpenPluginWindow);
}

FReply FAddetQuestActorsModule::OnInfoQuest()
{
	if (GEditor)
	{
		for (FSelectionIterator Iter((GEditor->GetSelectedActorIterator())); Iter; ++Iter)
		{
			if (AActor* Actor = Cast<AActor>(*Iter))
			{
				if (AQuest* Quest = Cast<AQuest>(Actor))
				{
					TextNamePtr->SetText(Quest->GetName());
					TextDescriptionPtr->SetText(Quest->GetDescription());
				}
			}
		}
	}
	return FReply::Handled();

}


void FAddetQuestActorsModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FAddetQuestActorsCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FAddetQuestActorsCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAddetQuestActorsModule, AddetQuestActors)