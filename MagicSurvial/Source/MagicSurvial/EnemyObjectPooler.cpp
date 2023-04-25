// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyObjectPooler.h"
#include "EnemyCharacterBase.h"


// Called when the game starts or when spawned
void AEnemyObjectPooler::BeginPlay()
{
	Super::BeginPlay();

	// 미리 설정한 수만큼 AddObejctToPool

}

// 클래스 스폰 후 비활성화, 배열에 추가
void AEnemyObjectPooler::AddObjectToPool(const FName& EnemyTag)
{
	TSubclassOf<AEnemyCharacterBase> EnemyClass = nullptr;
	TArray<TObjectPtr<AEnemyCharacterBase>>* EnemyPool = nullptr;
	
	if (EnemyTag.IsEqual(TEXT("Zombie")))
	{
		EnemyClass = ZombieClass;
		EnemyPool = &Pool_Zombie;
	}
	// 적 추가

	AEnemyCharacterBase* EnemyObject = GetWorld()->SpawnActor<AEnemyCharacterBase>(EnemyClass);
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
	TArray<TObjectPtr<AEnemyCharacterBase>>* EnemyPool = nullptr;

	// 해당 클래스 배열에서 비활성화 된 오브젝트 찾기
	if (EnemyTag.IsEqual(TEXT("Zombie")))
	{
		EnemyPool = &Pool_Zombie;
	}
	// 적 추가

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
