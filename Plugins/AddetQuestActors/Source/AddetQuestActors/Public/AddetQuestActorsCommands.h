// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AddetQuestActorsStyle.h"

class FAddetQuestActorsCommands : public TCommands<FAddetQuestActorsCommands>
{
public:

	FAddetQuestActorsCommands()
		: TCommands<FAddetQuestActorsCommands>(TEXT("AddetQuestActors"), NSLOCTEXT("Contexts", "AddetQuestActors", "AddetQuestActors Plugin"), NAME_None, FAddetQuestActorsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};