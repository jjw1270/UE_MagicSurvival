// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyObjectPooler.h"
#include "EnemyCharacterBase.h"
#include "EnemyCharacter_Fast.h"
#include "MagicCharacter.h"

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
void AEnemyObjectPooler::AddObjectToPool(const FName& EnemyTag, const bool bIsSpawned)
{
	TSubclassOf<AEnemyCharacterBase> EnemyClass = nullptr;
	TArray<TObjectPtr<AEnemyCharacterBase>> EnemyPool;
	FName PoolForder;
	
	if (EnemyTag == TEXT("Zombie"))
	{
		EnemyClass = ZombieClass;
		EnemyPool = Pool_Zombie;
		PoolForder = ZombiePoolForder;
	}
	else if(EnemyTag == TEXT("Ghoul"))
	{
		EnemyClass = GhoulClass;
		EnemyPool = Pool_Ghoul;
		PoolForder = GhoulPoolForder;
	}
	else if(EnemyTag == TEXT("Skeleton"))
	{
		EnemyClass = SkeletonClass;
		EnemyPool = Pool_Skeleton;
		PoolForder = SkeletonPoolForder;
	}
	else if(EnemyTag == TEXT("Lich"))
	{
		EnemyClass = LichClass;
		EnemyPool = Pool_Lich;
		PoolForder = LichPoolForder;
	}
	else if(EnemyTag == TEXT("Goblin"))
	{
		EnemyClass = GoblinClass;
		EnemyPool = Pool_Goblin;
		PoolForder = GoblinPoolForder;
	}
	// 적 추가 하세요

	AEnemyCharacterBase* EnemyObject = GetWorld()->SpawnActor<AEnemyCharacterBase>(EnemyClass);
	if (!bIsSpawned) {
		EnemyObject->SetActive(false);
	}
	EnemyObject->SetFolderPath(PoolForder);
	EnemyPool.Add(EnemyObject);
}

FVector AEnemyObjectPooler::GetRandomLocationtoSpawn()
{
	AMagicCharacter* Player = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Player == nullptr) 
	{
		UE_LOG(LogTemp, Error, TEXT("AMagicCharacter"));
		return FVector::ZeroVector;
	}
	
	FVector PlayerPosition = Player->GetActorLocation();

	FVector2D ViewportSize = FVector2D();
	GetWorld()->GetGameViewport()->GetViewportSize(ViewportSize);
		
	int32 UpY = ViewportSize.Y + 100.f + PlayerPosition.X;
	UE_LOG(LogTemp, Error, TEXT("%d"), UpY);
	int32 DownY = -(ViewportSize.Y + ViewportSize.Y * 0.5f) + PlayerPosition.X;
	UE_LOG(LogTemp, Error, TEXT("%d"), DownY);

	int32 UpX = ViewportSize.X + ViewportSize.X*0.5f + PlayerPosition.Y;
	UE_LOG(LogTemp, Error, TEXT("%d"), UpX);

	// 랜덤 위치를 선택하기 위해 RandomStream을 생성합니다.
	FMath::RandInit(FDateTime::Now().GetTicks());

	int32 SpawnRotation = FMath::RandRange(0, 3);

	FVector2D RandomLocation;
	switch (SpawnRotation)
	{
		case 0:
			RandomLocation = FVector2D(UpY, FMath::FRandRange(-UpX, UpX));
			break;
		case 1:
			RandomLocation = FVector2D(FMath::FRandRange(DownY, UpY), UpX);
			break;
		case 2:
			RandomLocation = FVector2D(DownY, FMath::FRandRange(-UpX, UpX));
			break;
		case 3:
			RandomLocation = FVector2D(FMath::FRandRange(DownY, UpY), -UpX);
			break;
	}

	// 랜덤한 위치를 출력합니다.
	UE_LOG(LogTemp, Log, TEXT("Random Location: %s"), *RandomLocation.ToString());

	return FVector(RandomLocation, 100.f);
}

void AEnemyObjectPooler::SpawnObjectFromPool(const FName& EnemyTag, const bool bIsSpawned)
{
	TArray<TObjectPtr<AEnemyCharacterBase>> EnemyPool;
	FVector RandPosforFastEnemy = FVector::ZeroVector;

	// 해당 클래스 배열에서 비활성화 된 오브젝트 찾기
	if (EnemyTag == TEXT("Zombie"))
	{
		EnemyPool = Pool_Zombie;
	}
	else if (EnemyTag == TEXT("Ghoul"))
	{
		EnemyPool = Pool_Ghoul;
	}
	else if (EnemyTag == TEXT("Skeleton"))
	{
		EnemyPool = Pool_Skeleton;
	}
	else if (EnemyTag == TEXT("Lich"))
	{
		EnemyPool = Pool_Lich;
	}
	else if (EnemyTag == TEXT("Goblin"))
	{
		EnemyPool = Pool_Goblin;
		RandPosforFastEnemy = GetRandomLocationtoSpawn();
	}
	// 적 추가 하세요

	for (auto Enemy : EnemyPool)
	{
		if (!Enemy->IsActive())
		{
			UE_LOG(LogTemp, Warning, TEXT("Spawn Enemy : %s"), *Enemy->GetName());
			if (RandPosforFastEnemy != FVector::ZeroVector)
			{
				Enemy->SetActorLocation(RandPosforFastEnemy);
				Enemy->SetActive(true);
				return;
			}
			Enemy->SetActorLocation(GetRandomLocationtoSpawn());
			Enemy->SetActive(true);
			return;
		}
	}

	// 배열에 비활성화 된 오브젝트가 없으면 오브젝트 Add 후 GetObjectFromPool
	AddObjectToPool(EnemyTag, true);
	SpawnObjectFromPool(EnemyTag, true);
}
