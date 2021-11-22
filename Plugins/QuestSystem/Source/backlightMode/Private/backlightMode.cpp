// Copyright Epic Games, Inc. All Rights Reserved.

#include "backlightMode.h"
#include "backlightModeEdMode.h"

#define LOCTEXT_NAMESPACE "FbacklightModeModule"

void FbacklightModeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FbacklightModeEdMode>(FbacklightModeEdMode::EM_backlightModeEdModeId, LOCTEXT("backlightModeEdModeName", "backlightModeEdMode"), FSlateIcon(), true);
}

void FbacklightModeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FbacklightModeEdMode::EM_backlightModeEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FbacklightModeModule, backlightMode)