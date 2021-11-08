// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModulesInventaryEdMode.h"
#include "ModulesInventaryEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FModulesInventaryEdMode::EM_ModulesInventaryEdModeId = TEXT("EM_ModulesInventaryEdMode");

FModulesInventaryEdMode::FModulesInventaryEdMode()
{

}

FModulesInventaryEdMode::~FModulesInventaryEdMode()
{

}

void FModulesInventaryEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FModulesInventaryEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FModulesInventaryEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FModulesInventaryEdMode::UsesToolkits() const
{
	return true;
}




