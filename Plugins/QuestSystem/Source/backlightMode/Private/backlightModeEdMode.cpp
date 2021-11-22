// Copyright Epic Games, Inc. All Rights Reserved.

#include "backlightModeEdMode.h"
#include "backlightModeEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"
#include <Engine/Selection.h>
#include "Quest.h"
#include "Objective.h"


const FEditorModeID FbacklightModeEdMode::EM_backlightModeEdModeId = TEXT("EM_backlightModeEdMode");

FbacklightModeEdMode::FbacklightModeEdMode()
{

}

FbacklightModeEdMode::~FbacklightModeEdMode()
{

}

void FbacklightModeEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FbacklightModeEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}

	UpdateSelectedActors();
}

void FbacklightModeEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

void FbacklightModeEdMode::DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View, FCanvas* Canvas)
{
	FEdMode::DrawHUD(ViewportClient, Viewport, View, Canvas);

	for (AActor* SelectedActor : SelectedActors)
	{
		if (Canvas)
		{
			FBox Bounds = SelectedActor->GetComponentsBoundingBox(true);

			FVector drawPos = Bounds.GetCenter() + FVector(0.f, 0.f, Bounds.GetExtent().Z);
			FVector2D PixelLocation;
			View->ScreenToPixel(View->WorldToScreen(drawPos), PixelLocation);
			PixelLocation /= ViewportClient->GetDPIScale();
			UFont* RenderFont = GEngine->GetSmallFont();
			Canvas->DrawShadowedText(PixelLocation.X, PixelLocation.Y, FText::FromString(SelectedActor->GetName()), RenderFont, FColor::Yellow);
		}
	}

}

void FbacklightModeEdMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	for (AActor* BoundedActor : SelectedActors)
	{
		DrawWireBox(PDI, BoundedActor->GetComponentsBoundingBox(true), FColor::Yellow, 1);
	}

	FEdMode::Render(View, Viewport, PDI);

}

void FbacklightModeEdMode::ActorSelectionChangeNotify()
{
	FEdMode::ActorSelectionChangeNotify();

	UpdateSelectedActors();

}

bool FbacklightModeEdMode::UsesToolkits() const
{
	return true;
}

void FbacklightModeEdMode::UpdateSelectedActors()
{
	SelectedActors.Empty();

	USelection* ActorsSelection = GEditor->GetSelectedActors();
	for (FSelectionIterator Iter(*ActorsSelection); Iter; ++Iter)
	{
		AActor* LevelActor = Cast<AActor>(*Iter);
		if (LevelActor && !SelectedActors.Contains(LevelActor))
		{
			SelectedActors.Add(LevelActor);
		}
		if (AQuest* Quest = Cast<AQuest>(LevelActor))
		{
			for (UObjective* Objective : Quest->Objectives)
			{
				AActor* QuestActor = Objective->GetObjectiveActor();
				SelectedActors.Add(QuestActor);
			}
		}
	}
}