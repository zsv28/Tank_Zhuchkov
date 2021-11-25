// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/ProgressBar.h>
#include "TankWidget.generated.h"

class UProgressBar;
class UTextBlock;

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UTankWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UProgressBar* HealthBar;


public:
	virtual void NativeConstruct() override;

	void UpdateHealthBar(float CurrentHealth, float MaxHealth) const;

};
