// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePawnAIController.generated.h"


class APawn;
class ABasePawn;

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API ABasePawnAIController : public AAIController
{
	GENERATED_BODY()
        
protected:
    UPROPERTY()
    ABasePawn* MyPawn;

    UPROPERTY()
    ABasePawn* EnemyPawn;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
    float Accuracy = 10.f;


public:
	ABasePawn* GetCurrentEnemy() const;

	void SetCurrentEnemy(ABasePawn* CurrentEnemy);
	void ResetCurrentEnemy();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void RotateToEnemy();
    //bool IsPlayerInRange();
    void Fire();
    bool DetectCanFire();
    bool DetectEnemyVisibility();
};
