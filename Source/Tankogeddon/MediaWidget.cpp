// Fill out your copyright notice in the Description page of Project Settings.


#include "MediaWidget.h"
#include <MediaAssets/Public/FileMediaSource.h>
#include <DesktopPlatform/Public/IDesktopPlatform.h>
#include <MediaAssets/Public/MediaSoundComponent.h>
#include <Containers/UnrealString.h>
#include <DesktopPlatform/Public/DesktopPlatformModule.h>
#include <MediaPlayer.h>
#include <Kismet/KismetRenderingLibrary.h>


void UMediaWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Browse)
	{
		Browse->OnClicked.AddDynamic(this, &UMediaWidget::OnBrowse);
	}

}

void UMediaWidget::OnBrowse()
{
	Tv->UWidget::SetVisibility(ESlateVisibility::Visible);
	Browse->UWidget::SetVisibility(ESlateVisibility::Hidden);

	OnMediaPlayer();

}
void UMediaWidget::OnMediaPlayer()
{
	if (MediaPlayer)
	{
		FString Path;

		IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

		if (DesktopPlatform)
		{
			auto* ParentHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);

			FString FileTypes = "All Files(*.PNG;*.JPG;*.MP4)|*.PNG;*.JPG;*.MP4|"
				"Image Files(*.PNG;*.JPG;)|*.PNG;*.JPG;|"
				"Video Files(*.MP4)|*.MP4";

			TArray<FString> OutFileNames;

			DesktopPlatform->OpenFileDialog(ParentHandle, "Choose media", "", "", FileTypes, 0, OutFileNames);

			if (OutFileNames.Num() > 0)
			{
				Path = OutFileNames[0];
			}
		}

		UFileMediaSource* MediaSource = NewObject<UFileMediaSource>();
		MediaSource->FilePath = Path;
		MediaPlayer->OpenSource(MediaSource);

		auto Pawn{ GetWorld()->GetFirstPlayerController()->GetPawn() };
		MediaSound = { NewObject<UMediaSoundComponent>(Pawn) };
		MediaSound->SetMediaPlayer(MediaPlayer);
		MediaSound->RegisterComponent();

		if (Tv)
		{
			Tv->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
		}
		else
		{
			UTexture2D* Texture = UKismetRenderingLibrary::ImportFileAsTexture2D(this, Path);
			Tv->SetBrushFromTexture(Texture, true);
		}
	}
	
}

void UMediaWidget::Clear()
{
	if (MediaPlayer)
	{
		MediaPlayer->Pause();
	}
	if (MediaSound)
	{
		MediaSound->DestroyComponent();
	}
}

void UMediaWidget::Resize(const FVector2D& ContentSize)
{
	if (Tv)
	{
		const FVector2D ImageSize{ Tv->GetCachedGeometry().GetLocalSize() };

		const auto ContentAspect{ ContentSize.X / ContentSize.Y };
		const auto ImageAspect{ ImageSize.X / ImageSize.Y };
		const FVector2D ScaleSize{ ImageSize.Y * ContentAspect, ImageSize.Y };
		const auto ScaleFactor{ContentAspect > ImageAspect ? FVector2D{1.f, FMath::Min(1.f, ImageSize.X / ScaleSize.X) } : FVector2D{FMath::Min(1.f, ScaleSize.X / ImageSize.X), 1.f}};
		Tv->SetRenderScale(ScaleFactor);
	}
}
