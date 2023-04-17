// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "SparkleBall.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSURVIAL_API ASparkleBall : public ASkillBase
{
	GENERATED_BODY()

public:
	ASparkleBall();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

public:
	void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class UParticleSystemComponent* SkillParticle;

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
	FVector Direction;

	FTimerHandle TimerHandle_DestroyActor;
	FTimerHandle TimerHandle_DestroyParticle;
};
