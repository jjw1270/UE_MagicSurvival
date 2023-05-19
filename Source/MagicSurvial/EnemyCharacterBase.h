// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacterBase.generated.h"

UCLASS()
class MAGICSURVIAL_API AEnemyCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	TObjectPtr<UCapsuleComponent> RootCapsuleComp;

	FTimerHandle DamageTimerHandle;

protected:
	UPROPERTY(EditAnywhere, Category = "Defaults", meta = (AllowPrivateAccess = "true"))
	int32 DefaultHP;

	int32 HP;
	
	UPROPERTY(EditAnywhere, Category = "Defaults", meta = (AllowPrivateAccess = "true"))
	int32 AttackDamage;

	UPROPERTY()
	TObjectPtr<class AMagicCharacter> TargetPlayer;

	bool bActived;

	bool bDeath;

protected:
    void SetHP();

private:
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent *OverlappedComp,
		AActor *OtherActor,
		UPrimitiveComponent *OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult &SweepResult
	);

	UFUNCTION()
	void OnOverlapEnd(
		UPrimitiveComponent *OverlappedComp,
		AActor *OtherActor,
		UPrimitiveComponent *OtherComp,
		int32 OtherBodyIndex
	);

public:
	void SetActive(bool bActive);

	bool IsActive()
	{
		return bActived;
	}
};


// GetDamage()
// OnDeath()