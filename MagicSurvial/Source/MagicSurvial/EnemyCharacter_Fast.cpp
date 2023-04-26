// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter_Fast.h"

// 처음 Active시 플레이어의 위치를 저장
// 해당 위치를 향해 빠른 속도로 일직선으로 이동

void AEnemyCharacter_Fast::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	if (TargetDirection != FVector::ZeroVector && HP > 0)
	{
		AddMovementInput(TargetDirection);
	}
}

void AEnemyCharacter_Fast::SetActive(bool bActive)
{
    // 활성화
	if (bActive)
	{
		GetMesh()->SetVisibility(true);
		PrimaryActorTick.bCanEverTick = true;
		TargetDirection = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation().GetSafeNormal();
		SetHP();
		// 맵상의 카메라 밖 영역의 랜덤한 위치에 스폰
		
        SetActorRotation(TargetDirection.Rotation());
		bActived = true;
		bDeath = false;
		return;
	}

	// 비활성화
	GetMesh()->SetVisibility(false);
	PrimaryActorTick.bCanEverTick = false;
    TargetDirection = FVector::ZeroVector;
	SetActorLocation(FVector(0, 0, -1000.f));
	bActived = false;
}
