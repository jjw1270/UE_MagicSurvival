// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkillBase.generated.h"

class UPrimitiveComponent;

UCLASS()
class MAGICSURVIAL_API ASkillBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* SkillMesh;

	UPROPERTY(EditAnywhere, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	class UParticleSystemComponent* HitParticleComp;

protected:
	UPROPERTY(EditAnywhere, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	int32 DefaultDamage = 50;  // 플레이어 레벨이 오를 시 + 10
	
	int32 SkillDamage;

	UFUNCTION()
	virtual void SetDamage();

	bool bIsHit;

};
