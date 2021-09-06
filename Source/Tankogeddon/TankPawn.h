// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageTaker.h"
#include "BasePawn.h"
#include "TankPawn.generated.h"



class USpringArmComponent;
class UCameraComponent;
class ATankPlayerController;


UCLASS()
class TANKOGEDDON_API ATankPawn : public ABasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

protected:

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UCameraComponent* Camera;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float MoveSpeed = 100.f;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float MovementSmootheness = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float RotationSpeed = 100.f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float RotationSmootheness = 0.1f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret")
    float TurretRotationSpeed = 0.5f;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void MoveForward(float AxisValue);

	UFUNCTION()
	void RotateRight(float AxisValue);

private:
    float TargetForwardAxisValue = 0.f;
    float CurrentForwardAxisValue = 0.f;
    float TargetRightAxisValue = 0.f;
    float CurrentRightAxisValue = 0.f;

    UPROPERTY()
    ATankPlayerController* TankController;

};
