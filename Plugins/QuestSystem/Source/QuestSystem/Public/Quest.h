// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Internationalization/Text.h>
#include <Components/WidgetComponent.h>
#include <Components/SceneComponent.h>
#include "Quest.generated.h"


class UObjective;
class AQuest;
class UWidgetComponent;
class USceneComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnQuestStatusUpdated, AQuest* /*Quest*/);

UCLASS()
class QUESTSYSTEM_API AQuest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void AddLocationObjective();

	UFUNCTION(BlueprintCallable, CallInEditor)
	void AddInteractObjective();

	void OnObjectiveCompleted(UObjective* Objective);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	const TArray<UObjective*>& GetObjectives() const { return Objectives;}


	UPROPERTY(EditAnywhere)
	TArray<UObjective*> Objectives;

	UPROPERTY(EditAnywhere)
	bool bIsStoryQuest = true;

	UPROPERTY(EditAnywhere)
	bool bKeepObjectivesOrder = true;

	UPROPERTY(EditAnywhere)
	AQuest* PrerquisedQuest;

	UPROPERTY(VisibleAnywhere)
	bool bIsTaken = false;

	bool IsCompleted() const;

	void SetVisibility(bool bActive);

	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UWidgetComponent* InfoComponent;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void UpdateLocation();

	void TakeQuest(AActor* Character);

	FOnQuestStatusUpdated OnQuestStatusUpdated;

	UFUNCTION(BlueprintPure)
	AQuest* GetPrerquisedQuest() const 
	{
		return PrerquisedQuest; 
	}

	FText GetName();

	FText GetDescription();


protected:

	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Descrition;
};
