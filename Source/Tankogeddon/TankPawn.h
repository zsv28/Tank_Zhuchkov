// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"


class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;


UCLASS()
class TANKOGEDDON_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

    UFUNCTION()
    void MoveForward(float AxisValue);

    void MoveRight(float AxisValue);
 
   
protected:
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* BodyMesh;
    
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* TurretMesh;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
    UCameraComponent* Camera;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float MoveSpeed = 100.f;
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
    float RotationSpeed = 100.f;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    float TargetForwardAxisValue;
    float TargetRightAxisValue;
};
