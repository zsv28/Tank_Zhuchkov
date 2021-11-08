// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include <MediaPlayer.h>
#include <Components/Image.h>
#include <MediaTexture.h>
#include <MediaSoundComponent.h>
#include "MediaWidget.generated.h"

class UButton;
class UMediaPlayer;
class UImage;
class UMediaTexture;
class UMediaSoundComponent;


/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UMediaWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UButton* Browse;

	UPROPERTY(meta = (BindWidget))
	UButton* Exit;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* Tv;

	UPROPERTY(EditAnywhere)
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere)
	UMediaTexture* MediaTexture;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* MediaMaterial;

	UPROPERTY(EditAnywhere)
	UMediaSoundComponent* MediaSound;

	UFUNCTION()
	void OnBrowse();

	UFUNCTION(BlueprintCallable)
	void OnMediaPlayer();

	UFUNCTION(BlueprintCallable)
	void Clear();

private:
	void Resize(const FVector2D& ContentSize);
};
