// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include <Components/StaticMeshComponent.h>
#include "BasePawn.generated.h"



class UStaticMeshComponent;
class UArrowComponent;
class ACannon;
class UHealthComponent;
class USphereComponent;
class UBoxComponent;
class UParticleSystem;
class USoundBase;
class AAmmoBox;





UENUM()
enum class EPlayerGroupID {
	None,
	Group_01,
	Group_02
};

UCLASS()
class TANKOGEDDON_API ABasePawn : public APawn, public IDamageTaker
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BodyMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* TurretMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UArrowComponent* CannonSetupPoint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UHealthComponent* HealthComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	USphereComponent* TargetingCollider;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UBoxComponent* HitCollider;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret|Cannon")
    TSubclassOf<ACannon> CannonClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Effects")
    UParticleSystem* DestuctionParticleSystem;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
    USoundBase* DestructionSound;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret")
    float TurretRotationSpeed = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bonus")
    TSubclassOf<AAmmoBox> DestructionBonusBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Team")
	EPlayerGroupID PlayerGroupID {EPlayerGroupID::None};

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    virtual void Destroyed() override;
    virtual void TargetDestroyed(AActor* Target);

    UFUNCTION()
    virtual void Die();

    UFUNCTION()
    virtual void DamageTaken(float InDamage);

	UFUNCTION()
	void OnTargetingOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnTargetingOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:	
    UFUNCTION()
    void Fire();

    UFUNCTION()
    void FireSpecial();

    UFUNCTION()
    void SetupCannon(TSubclassOf<ACannon> InCannonClass);

    UFUNCTION()
    void CycleCannon();

    UFUNCTION()
    ACannon* GetActiveCannon() const;

    UFUNCTION()
    virtual bool TakeDamage(FDamageData DamageData) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    FVector GetTurretForwardVector();

    UFUNCTION()
    void SetTurretRotationAxis(float AxisValue);

    UFUNCTION()
    void SetTurretTarget(FVector TargetPosition);

    UFUNCTION()
    FVector GetEyesPosition();

	UFUNCTION(BlueprintCallable)
	bool IsPawn() const;

	

private:
    UPROPERTY()
    ACannon* ActiveCannon;

    UPROPERTY()
    ACannon* InactiveCannon;

    UPROPERTY()
    FVector TurretTarget;

    bool bIsTurretTargetSet = false;
    float TurretRotationAxis = 0.f;
};
