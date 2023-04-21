// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkillBase.h"
#include "MagicArrow.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSURVIAL_API AMagicArrow : public ASkillBase
{
	GENERATED_BODY()
	
public:
	AMagicArrow();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereCollision;

	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* HitSphereCollision;
	
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
	float SkillSpeed = 900.f;

	AActor* Target;
	ECollisionChannel EnemyCollisionType;
	FVector Direction;

	FTimerHandle TimerHandle_DestroyActor;

	bool bCanHit;
};
