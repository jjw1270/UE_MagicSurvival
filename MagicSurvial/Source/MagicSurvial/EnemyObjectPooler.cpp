// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyObjectPooler.h"
#include "EnemyCharacterBase.h"


// Called when the game starts or when spawned
void AEnemyObjectPooler::BeginPlay()
{
	Super::BeginPlay();

	// 미리 설정한 수만큼 AddObejctToPool
	for (int i = 0; i < Default_EnemyObjectNum; i++)
	{
		AddObjectToPool(TEXT("Zombie"));
		AddObjectToPool(TEXT("Ghoul"));
		AddObjectToPool(TEXT("Skeleton"));
		AddObjectToPool(TEXT("Lich"));
	}

	for (int i = 0; i < Fast_EnemyObjectNum; i++)
	{
		AddObjectToPool(TEXT("Goblin"));
	}
}

// 클래스 스폰 후 비활성화, 배열에 추가
void AEnemyObjectPooler::AddObjectToPool(const FName& EnemyTag)
{
	TSubclassOf<AEnemyCharacterBase> EnemyClass = nullptr;
	TArray<AEnemyCharacterBase*>* EnemyPool = nullptr;
	FName PoolForder;
	
	if (EnemyTag == TEXT("Zombie"))
	{
		EnemyClass = ZombieClass;
		EnemyPool = &Pool_Zombie;
		PoolForder = ZombiePoolForder;
	}
	else if(EnemyTag == TEXT("Ghoul"))
	{
		EnemyClass = GhoulClass;
		EnemyPool = &Pool_Ghoul;
		PoolForder = GhoulPoolForder;
	}
	else if(EnemyTag == TEXT("Skeleton"))
	{
		EnemyClass = SkeletonClass;
		EnemyPool = &Pool_Skeleton;
		PoolForder = SkeletonPoolForder;
	}
	else if(EnemyTag == TEXT("Lich"))
	{
		EnemyClass = LichClass;
		EnemyPool = &Pool_Lich;
		PoolForder = LichPoolForder;
	}
	else if(EnemyTag == TEXT("Goblin"))
	{
		EnemyClass = GoblinClass;
		EnemyPool = &Pool_Goblin;
		PoolForder = GoblinPoolForder;
	}
	// 적 추가 하세요

	AEnemyCharacterBase* EnemyObject = GetWorld()->SpawnActor<AEnemyCharacterBase>(EnemyClass);
	EnemyObject->SetFolderPath(PoolForder);
	EnemyObject->SetActive(false);
	if (EnemyPool == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AddObjectToPool EnemyPool"));
		return;
	}
	EnemyPool->Add(EnemyObject);
}

void AEnemyObjectPooler::SpawnObjectFromPool(const FName& EnemyTag)
{
	TArray<AEnemyCharacterBase*>* EnemyPool = nullptr;

	// 해당 클래스 배열에서 비활성화 된 오브젝트 찾기
	if (EnemyTag == TEXT("Zombie"))
	{
		EnemyPool = &Pool_Zombie;
	}
	else if (EnemyTag == TEXT("Ghoul"))
	{
		EnemyPool = &Pool_Ghoul;
	}
	else if (EnemyTag == TEXT("Skeleton"))
	{
		EnemyPool = &Pool_Skeleton;
	}
	else if (EnemyTag == TEXT("Lich"))
	{
		EnemyPool = &Pool_Lich;
	}
	else if (EnemyTag == TEXT("Goblin"))
	{
		EnemyPool = &Pool_Goblin;
	}
	// 적 추가 하세요

	if (EnemyPool == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("SpawnObjectFromPool EnemyPool"));
		return;
	}
	for (int i = 0; i < EnemyPool->Num(); i++)
	{
		AEnemyCharacterBase* enemy = (*EnemyPool)[i];
		if (!enemy->IsActive())
		{
			enemy->SetActive(true);
			return;
		}
	}

	// 배열에 비활성화 된 오브젝트가 없으면 오브젝트 Add 후 GetObjectFromPool
	AddObjectToPool(EnemyTag);
	SpawnObjectFromPool(EnemyTag);
}
