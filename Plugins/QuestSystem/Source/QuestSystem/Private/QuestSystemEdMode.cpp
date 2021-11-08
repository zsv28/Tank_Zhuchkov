// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuestSystemEdMode.h"
#include "QuestSystemEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FQuestSystemEdMode::EM_QuestSystemEdModeId = TEXT("EM_QuestSystemEdMode");

FQuestSystemEdMode::FQuestSystemEdMode()
{

}

FQuestSystemEdMode::~FQuestSystemEdMode()
{

}

void FQuestSystemEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FQuestSystemEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FQuestSystemEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FQuestSystemEdMode::UsesToolkits() const
{
	return true;
}




