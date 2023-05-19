// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "PunchHeavy.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSURVIAL_API APunchHeavy : public ASkillBase
{
	GENERATED_BODY()

public:
	APunchHeavy();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UParticleSystemComponent> SkillParticle;

	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBoxComponent> BoxCollision;

	UPROPERTY(EditAnywhere, Category = "Hit Effect", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UParticleSystem> HitParticle;
	
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
	FTimerHandle TimerHandle_DestroyActor;

};
