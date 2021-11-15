// Copyright Epic Games, Inc. All Rights Reserved.

#include "AddetQuestActorsCommands.h"

#define LOCTEXT_NAMESPACE "FAddetQuestActorsModule"

void FAddetQuestActorsCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "AddetQuestActors", "Bring up AddetQuestActors window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
