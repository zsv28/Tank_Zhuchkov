// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnTurret.h"
#include <Kismet/GameplayStatics.h>
#include "TankPlayerController.h"
#include <CollisionQueryParams.h>




void USpawnTurret::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (SpawnedNameText)
	{
		SpawnedNameText->SetText(SpawnedName);
	}
}

void USpawnTurret::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ATankPlayerController* Controller = Cast<ATankPlayerController>(PlayerController);
	if (Controller)
	{
		Controller->OnMouseButtonUp.AddUObject(this, &USpawnTurret::OnMouseButtonUp);
	}
}

void USpawnTurret::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (SpawnedActor && PlayerController)
	{
		FVector WorldMouseLocation;
		FVector WorldMouseDirection;
		PlayerController->DeprojectMousePositionToWorld(
			WorldMouseLocation, WorldMouseDirection);

		FHitResult HitResult;
		float TraseDistance = 5000.f;
		FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
		Params.AddIgnoredActor(PlayerController->GetPawn());
		Params.AddIgnoredActor(SpawnedActor);
	

		GetWorld()->LineTraceSingleByChannel(HitResult, WorldMouseLocation, WorldMouseLocation + WorldMouseDirection 
			* TraseDistance, ECollisionChannel::ECC_WorldDynamic,Params);
		if (HitResult.Actor.Get())
		{
			SpawnedActor->SetActorLocation(HitResult.Location);
		}
	}

}

FReply USpawnTurret::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		SpawnedActor = GetWorld()->SpawnActor(SpawnedClass);
	}
	return FReply::Handled();

}

void USpawnTurret::OnMouseButtonUp()
{
	if (SpawnedActor)
	{
		SpawnedActor = nullptr;
	}

}
