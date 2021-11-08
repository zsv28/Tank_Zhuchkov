// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoPlane.h"
#include <MediaAssets/Public/FileMediaSource.h>
#include <DesktopPlatform/Public/IDesktopPlatform.h>
#include <MediaAssets/Public/MediaSoundComponent.h>
#include <Containers/UnrealString.h>
#include <DesktopPlatform/Public/DesktopPlatformModule.h>


// Sets default values
AVideoPlane::AVideoPlane()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AVideoPlane::BeginPlay()
{
	Super::BeginPlay();
	/*if (MediaPlayer)
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

		UMediaSoundComponent* Comp = NewObject<UMediaSoundComponent>(this);
		Comp->SetMediaPlayer(MediaPlayer);
		Comp->RegisterComponent();
	}*/
}

// Called every frame
void AVideoPlane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

