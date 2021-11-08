// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include <Blueprint/UserWidget.h>
#include <GameFramework/Actor.h>
#include "InteractionComponent.generated.h"

class UUserWidget;
class AActor;
class UPrimitiveComponent;


/**
 * 
 */
UCLASS(ClassGroup = "Collision", meta = (DisplayName = "Interaction Collision", BlueprintSpawnableComponent))
class QUESTSYSTEM_API UInteractionComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void Interact();
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InteractMessageClass;

	UPROPERTY()
	UUserWidget* InteractMessage;
	UPROPERTY()
	AActor* ActorToInteract;


	UFUNCTION()
	void OnInteractionCompBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnInteractionCompEndOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
