// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "IceSpear.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSURVIAL_API AIceSpear : public ASkillBase
{
	GENERATED_BODY()

public:
	AIceSpear();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereCollision;
	
protected:
	void SetDamage() override;

	UFUNCTION()
	void OnOverlapBegin
	(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

private:
	UPROPERTY(EditAnywhere)
	float SkillSpeed = 1500.f;

	FVector Direction;

	FTimerHandle TimerHandle_DestroyActor;
};
