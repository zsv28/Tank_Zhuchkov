// Fill out your copyright notice in the Description page of Project Settings.


#include "HpBarWidget.h"

void UHpBarWidget::SetHP(float CurrentHealth, float MaxHealth)
{
	if (MainBar)
	{
		float Percent{ CurrentHealth / MaxHealth };
		MainBar->SetPercent(Percent);
	}
}
