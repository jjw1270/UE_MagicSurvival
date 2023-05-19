// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SparkleBallBase.generated.h"

UCLASS()
class MAGICSURVIAL_API ASparkleBallBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASparkleBallBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USceneComponent> Base_Skill_Point_B;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<USceneComponent>> Skill_Point_B;

	UPROPERTY(EditAnywhere, Category = "Skills")
	TSubclassOf<class ASparkleBall> Skill_SparkleBallClass;

public:
	void Skill_SparkleBall();

private:
	UPROPERTY()
	TObjectPtr<class ASparkleBall> SparkleBallArray[8];

	UPROPERTY()
	TObjectPtr<class AMagicCharacter> myCharacter;

	FTimerHandle TimerHandle_DestroyActor;

	float YawDelta = 50.0f; // 매 프레임마다 30도씩 회전
};
