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
	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> ZombieClass;
	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> GhoulClass;
	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> SkeletonClass;
	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> LichClass;
	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyCharacterBase> GoblinClass;

	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "각각의 적 오브젝트의 스폰할 마리 수"))
	int32 Default_EnemyObjectNum;

	UPROPERTY(EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "각각의 적 오브젝트의 스폰할 마리 수"))
	int32 Fast_EnemyObjectNum;

private:
	TArray<AEnemyCharacterBase*> Pool_Zombie;
	TArray<AEnemyCharacterBase*> Pool_Ghoul;
	TArray<AEnemyCharacterBase*> Pool_Skeleton;
	TArray<AEnemyCharacterBase*> Pool_Lich;
	TArray<AEnemyCharacterBase*> Pool_Goblin;

	const FName ZombiePoolForder = TEXT("EnemyPool/ZombiePool");
	const FName GhoulPoolForder = TEXT("EnemyPool/GhoulPool");
	const FName SkeletonPoolForder = TEXT("EnemyPool/SkeletonPool");
	const FName LichPoolForder = TEXT("EnemyPool/LichPool");
	const FName GoblinPoolForder = TEXT("EnemyPool/GoblinPool");

private:
	// EnemyCharacterBase를 상속받는 Enemy를 매개변수로 받아 해당 클래스의 타입대로 분류하여 Array에 ADD
	UFUNCTION()
	void AddObjectToPool(const FName& EnemyTag);

public:
	// Enemy의 2번째 태그를 매개변수로 받아 해당 오브젝트를 Array에서 꺼네옴
	UFUNCTION()
	void SpawnObjectFromPool(const FName& EnemyTag);

};
