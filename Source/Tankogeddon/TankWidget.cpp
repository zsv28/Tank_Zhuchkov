// Fill out your copyright notice in the Description page of Project Settings.


#include "TankWidget.h"
#include <Components/ProgressBar.h>

void UTankWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UTankWidget::UpdateHealthBar(float CurrentHealth, float MaxHealth) const
{
	const auto Percent{ CurrentHealth / MaxHealth };
	HealthBar->SetPercent(Percent);

}

