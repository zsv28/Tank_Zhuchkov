// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}

void UHealthComponent::TakeDamage(FDamageData& DamageData)
{
	const float TakenDamageValue{ DamageData.DamageValue };
	CurrentHealth -= TakenDamageValue;

	if (CurrentHealth <= 0)
	{
		if (OnDie.IsBound())
		{
			DamageData.bOutIsFatalDamage = true;
			OnDie.Broadcast();
		}
	}
	else
	{
		if (OnDamaged.IsBound())
		{
			DamageData.bOutIsFatalDamage = false;
			OnDamaged.Broadcast(TakenDamageValue);
		}
	}

	return;
}

float UHealthComponent::GetHealth() const
{
	return CurrentHealth;
}

float UHealthComponent::GetMaxHealth() const
{
	return MaxHealth;
}

float UHealthComponent::GetHealthState() const
{
	return CurrentHealth / MaxHealth;
}

void UHealthComponent::SetHealth(float HealthValue)
{
	CurrentHealth = FMath::Clamp(HealthValue, 0.f, MaxHealth);
}

void UHealthComponent::SetMaxHealth(float HealthValue)
{
	MaxHealth = FMath::Clamp(HealthValue, CurrentHealth, HealthValue);
}

void UHealthComponent::AddHealth(float AddiditionalHealthValue)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + AddiditionalHealthValue, 0.f, MaxHealth);
}


