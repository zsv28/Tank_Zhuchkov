// Fill out your copyright notice in the Description page of Project Settings.


#include "HpBarWidget.h"
#include <Components/ProgressBar.h>

void UHpBarWidget::SetHP(float CurrentHealth, float MaxHealth) const
{
	if (MainBar)
	{
		const float Percent{ CurrentHealth / MaxHealth };
		MainBar->SetPercent(Percent);
	}
}
