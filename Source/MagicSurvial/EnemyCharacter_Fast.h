// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacterBase.h"
#include "EnemyCharacter_Fast.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSURVIAL_API AEnemyCharacter_Fast : public AEnemyCharacterBase
{
	GENERATED_BODY()
	
public:	
	// Called every frame
	void Tick(float DeltaTime) override;

	void SetActive(bool bActive, FVector Location);

private:
	FVector TargetDirection;
};
