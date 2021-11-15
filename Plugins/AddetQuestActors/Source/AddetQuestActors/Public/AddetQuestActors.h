// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <Widgets/Text/STextBlock.h>

class FToolBarBuilder;
class FMenuBuilder;
class STextBlock;

class FAddetQuestActorsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();

	void AddToolbarExtension(FToolBarBuilder& Build);

private:

	FReply OnInfoQuest();

	void RegisterMenus();

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	TSharedPtr<class FUICommandList> PluginCommands;

	TSharedPtr<STextBlock> TextNamePtr;
	TSharedPtr<STextBlock> TextDescriptionPtr;


};
