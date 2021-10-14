// Fill out your copyright notice in the Description page of Project Settings.

#include "SMiniMap.h"
#include <Rendering/DrawElements.h>
#include <Styling/CoreStyle.h>
#include <SlateOptMacros.h>

// --------------------------------------------------------------------------------------
BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMiniMap::Construct(const FArguments& InArgs)
{
	PlayerImage = InArgs._PlayerImageArg;
	PlayerPercentPos = InArgs._PlayerPercentPosArg;

	/*ChildSlot
	[
	];*/
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
// --------------------------------------------------------------------------------------
int32 SMiniMap::OnPaint(const FPaintArgs& Args,
	const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect,
	FSlateWindowElementList& OutDrawElements,
	int32 LayerId,
	const FWidgetStyle& InWidgetStyle,
	bool bParentEnabled) const
{
	const auto LocalSize{ AllottedGeometry.GetLocalSize() };
	FSlateBrush BackgroundBrush;
	BackgroundBrush.ImageSize = LocalSize;
	FSlateBrush PlayerBrush;
	PlayerBrush.SetResourceObject(PlayerImage);


	FSlateDrawElement::MakeBox(OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(FVector2D(0.5f, 0.5f), BackgroundBrush.ImageSize),
		&BackgroundBrush,
		ESlateDrawEffect::None,
		FLinearColor{ 0.1f, 0.1f, 0.1f, 0.5f }
	);


	TArray<FVector2D> Border;
	Border.Add(LocalSize * FVector2D{ 0.f, 0.f });
	Border.Add(LocalSize * FVector2D{ 0.f, 1.f });
	Border.Add(LocalSize * FVector2D{ 1.f, 1.f });
	Border.Add(LocalSize * FVector2D{ 1.f, 0.f });
	Border.Add(LocalSize * FVector2D{ 0.f, 0.f });
	FSlateDrawElement::MakeLines(
		OutDrawElements,
		LayerId, AllottedGeometry.ToPaintGeometry(),
		Border,
		ESlateDrawEffect::None,
		FLinearColor::White,
		true,
		2.f
	);
	
	TArray<FBox2D> Obstacles;
	Obstacles.Add(FBox2D{ LocalSize * FVector2D{0.1f, 0.9f}, LocalSize * FVector2D{0.4f, 0.6f} });
	Obstacles.Add(FBox2D{ LocalSize * FVector2D{0.6f, 0.6f}, LocalSize * FVector2D{0.9f, 0.9f} });
	Obstacles.Add(FBox2D{ LocalSize * FVector2D{0.1, 0.3f}, LocalSize * FVector2D{0.4f, 0.6f} });
	Obstacles.Add(FBox2D{ LocalSize * FVector2D{0.7f, 0.05f}, LocalSize * FVector2D{0.9f, 0.4f} });
	for (const auto& Obstacle : Obstacles)
	{
		TArray<FVector2D> Points;
		Points.Add(Obstacle.Min);
		Points.Add(FVector2D{ Obstacle.Max.X, Obstacle.Min.Y });
		Points.Add(Obstacle.Max);
		Points.Add(FVector2D{ Obstacle.Min.X, Obstacle.Max.Y });
		Points.Add(Obstacle.Min);
		FSlateDrawElement::MakeLines(OutDrawElements, LayerId, AllottedGeometry.ToPaintGeometry(), Points);
	}
	
	FSlateDrawElement::MakeBox(
		OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(LocalSize * FVector2D(0.425f, 0.85f), PlayerBrush.ImageSize),
		&PlayerBrush
	);

	return 0;
}