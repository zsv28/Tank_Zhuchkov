// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModulesInventary.h"
#include "ModulesInventaryEdMode.h"

#define LOCTEXT_NAMESPACE "FModulesInventaryModule"

void FModulesInventaryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FModulesInventaryEdMode>(FModulesInventaryEdMode::EM_ModulesInventaryEdModeId, LOCTEXT("ModulesInventaryEdModeName", "ModulesInventaryEdMode"), FSlateIcon(), true);
}

void FModulesInventaryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FModulesInventaryEdMode::EM_ModulesInventaryEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FModulesInventaryModule, ModulesInventary)