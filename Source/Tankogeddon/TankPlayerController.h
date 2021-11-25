// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MiniMap.h"
#include "TankPlayerController.generated.h"

class ATankPawn;

/**
 * Main game player controller
 */
UCLASS()
class TANKOGEDDON_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	UPROPERTY()
	ATankPawn* TankPawn;

    UPROPERTY()
    FVector2D LastFrameMousePosition;

    bool bIsControllingFromMouse = false;

public:
    ATankPlayerController();
    virtual void SetupInputComponent() override;
    virtual void Tick(float DeltaTime) override;

    FSimpleMulticastDelegate OnMouseButtonUp;

	void SetHealthWidgetValue(int32 CurrentHealth, int32 MaxHealth);
	

protected:
    virtual void BeginPlay() override;
    void MoveForward(float AxisValue);
    void RotateRight(float AxisValue);
    void Fire();
    void FireSpecial();
    void CycleCannon();
    void OnLeftMouseButtonUp();
    void OnLeftMouseButtonDown();

  


    UFUNCTION(exec)
    void DumpActorPoolSubsystemStats();
};
