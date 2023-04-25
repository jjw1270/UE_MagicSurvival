// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyObjectPooler.generated.h"

class AEnemyCharacterBase;

UCLASS()
class MAGICSURVIAL_API AEnemyObjectPooler : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "EnemyClass", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> ZombieClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Object Pool", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<AEnemyCharacterBase>> Pool_Zombie;

private:
	// EnemyCharacterBase를 상속받는 Enemy를 매개변수로 받아 해당 클래스의 타입대로 분류하여 Array에 ADD
	UFUNCTION()
	void AddObjectToPool(const FName& EnemyTag);

public:
	// Enemy의 2번째 태그를 매개변수로 받아 해당 오브젝트를 Array에서 꺼네옴
	UFUNCTION()
	void SpawnObjectFromPool(const FName& EnemyTag);

};
