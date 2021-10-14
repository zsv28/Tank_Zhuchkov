// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawnAIController.h"
#include "BasePawn.h"
#include "Turret.h"

void ABasePawnAIController::BeginPlay()
{
    Super::BeginPlay();

    MyPawn = Cast<ABasePawn>(GetPawn());
   
}

ABasePawn* ABasePawnAIController::GetCurrentEnemy() const
{
	return EnemyPawn;
}

// --------------------------------------------------------------------------------------
void ABasePawnAIController::SetCurrentEnemy(ABasePawn* CurrentEnemy)
{
	EnemyPawn = CurrentEnemy;
	return;
}

void ABasePawnAIController::ResetCurrentEnemy()
{
	EnemyPawn = nullptr;
	return;
}

void ABasePawnAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!MyPawn)
    {
        MyPawn = Cast<ABasePawn>(GetPawn());
       
        return;
    }
   
    if (!MyPawn)
    {
        return;
    }

    if (DetectCanFire())
    {
        Fire();
    }
    else
    {
        RotateToEnemy();
    }
}

void ABasePawnAIController::RotateToEnemy()
{
    if (EnemyPawn)
    {
        MyPawn->SetTurretTarget(EnemyPawn->GetActorLocation());
    }
}

bool ABasePawnAIController::DetectCanFire()
{
    if (!DetectEnemyVisibility())
    {
        return false;
    }

    FVector TargetingDir = MyPawn->GetTurretForwardVector();
    FVector DirToPlayer = EnemyPawn->GetActorLocation() - MyPawn->GetActorLocation();
    DirToPlayer.Normalize();
    float AimAngle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(TargetingDir, DirToPlayer)));
    return AimAngle <= Accuracy;
}

void ABasePawnAIController::Fire()
{
    MyPawn->Fire();
}

bool ABasePawnAIController::DetectEnemyVisibility()
{

	if (!EnemyPawn)
	{
		return false;
	}

	auto PlayerPos{ EnemyPawn->GetActorLocation() };
	const auto EyesPos{ MyPawn->GetEyesPosition() };

    FHitResult HitResult;
    FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
    traceParams.bTraceComplex = true;
    traceParams.AddIgnoredActor(MyPawn);
    traceParams.bReturnPhysicalMaterial = false;

    if (GetWorld()->LineTraceSingleByChannel(HitResult, EyesPos, PlayerPos, ECollisionChannel::ECC_Visibility, traceParams))
    {
        if (HitResult.Actor.Get())
        {
            // DrawDebugLine(GetWorld(), EyesPos, HitResult.Location, FColor::Cyan, false, 0.5f, 0, 10);
            return HitResult.Actor.Get() == EnemyPawn;
        }
    }

    // DrawDebugLine(GetWorld(), EyesPos, PlayerPos, FColor::Cyan, false, 0.5f, 0, 10);
    return false;
}
