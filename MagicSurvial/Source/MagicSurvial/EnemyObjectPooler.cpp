// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyObjectPooler.h"
#include "EnemyCharacterBase.h"


// Called when the game starts or when spawned
void AEnemyObjectPooler::BeginPlay()
{
	Super::BeginPlay();

	// 미리 설정한 수만큼 AddObejctToPool

}

void AEnemyObjectPooler::AddObjectToPool(const FName& EnemyTag)
{
	if (EnemyTag.IsEqual(TEXT("Zombie")))
	{
		// 클래스 스폰 후 비활성화, 배열에 추가.

		Pool_Zombie.Add(ZombieClass);
	}

}

void AEnemyObjectPooler::SpawnObjectFromPool(const FName& EnemyTag)
{
	// 해당 클래스 배열에서 비활성화 된 오브젝트 찾기
	// 오브젝트 활성화

	// 배열에 비활성화 된 오브젝트가 없으면
		// 오브젝트 Add 후 GetObjectFromPool

}
