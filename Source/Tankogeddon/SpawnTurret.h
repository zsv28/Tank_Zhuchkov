// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include "SpawnTurret.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API USpawnTurret : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	FText SpawnedName;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpawnedClass;


	UPROPERTY(meta=(BindWidget))
	UTextBlock* SpawnedNameText;

	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:
	UPROPERTY()
	AActor* SpawnedActor;

	UPROPERTY()
	APlayerController* PlayerController;

	void OnMouseButtonUp();
};
