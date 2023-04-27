// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterBase.h"
#include "MagicSurvivalGameMode.h"
#include "MagicCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Math/RandomStream.h"

// Sets default values
AEnemyCharacterBase::AEnemyCharacterBase()
{
	RootCapsuleComp = GetCapsuleComponent();

	// Overlap Event 선언
	RootCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyCharacterBase::OnOverlapBegin);
	RootCapsuleComp->OnComponentEndOverlap.AddDynamic(this, &AEnemyCharacterBase::OnOverlapEnd);

	Tags.Add("Enemy");
	Tags.Add("");

	RootCapsuleComp->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel2);
	RootCapsuleComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	RootCapsuleComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Overlap);
	GetMesh()->SetCollisionProfileName("NoCollision");
}

void AEnemyCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	if (AttackDamage == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("AttackDamage is 0"));
	}
	
	if (Tags[1].GetStringLength() < 1)
	{
		UE_LOG(LogTemp, Error, TEXT("Should Add Tags : %s"), *GetName());
		return;
	}
}

// Called every frame
void AEnemyCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TargetPlayer && HP > 0)
	{
		FVector TargetDirection = TargetPlayer->GetActorLocation() - GetActorLocation();
		TargetDirection.Normalize();

		AddMovementInput(TargetDirection);
		SetActorRotation(TargetDirection.Rotation());
	}
}

void AEnemyCharacterBase::SetHP()
{
	switch (GetWorld()->GetAuthGameMode<AMagicSurvivalGameMode>()->GetGamePlayTime() / 60)
	{
		case 1:
			HP = DefaultHP * 10;
			break;
		case 3:
			HP = DefaultHP * 8;
			break;
		case 6:
			HP = DefaultHP * 6;
			break;
		case 9:
			HP = DefaultHP * 4;
			break;
		case 12:
			HP = DefaultHP * 3;
			break;
		case 14:
			HP = DefaultHP * 2;
			break;
		default:
			HP = DefaultHP;
	}
}

void AEnemyCharacterBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult)
{
	if (Cast<AMagicCharacter>(OtherActor) == TargetPlayer)
	{
		// 최초 1회 Add Damage to Player Character
		UGameplayStatics::ApplyDamage(TargetPlayer, AttackDamage, GetController(), this, nullptr);
		
		// n 초마다 Add Damage to Player Character
		FTimerDelegate DamageTimerDelegate;
		DamageTimerDelegate.BindLambda([=]() mutable {
			UGameplayStatics::ApplyDamage(TargetPlayer, AttackDamage, GetController(), this, nullptr);
		});
		GetWorldTimerManager().SetTimer(DamageTimerHandle, DamageTimerDelegate, 0.3f, true);
	}
}

void AEnemyCharacterBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex)
{
    if (Cast<AMagicCharacter>(OtherActor) == TargetPlayer)
	{
		// Clear TimerHandle
		GetWorldTimerManager().ClearTimer(DamageTimerHandle);
	}
}

void AEnemyCharacterBase::SetActive(bool bActive)
{
	// 활성화
	if (bActive)
	{
		GetMesh()->SetVisibility(true);
		PrimaryActorTick.bCanEverTick = true;
		TargetPlayer = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		if (TargetPlayer == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("TargetPlayer"));
		}
		SetHP();
		SetActorLocation(GetRandomLocationtoSpawn());

		bActived = true;
		bDeath = false;
		return;
	}

	// 비활성화
	GetMesh()->SetVisibility(false);
	PrimaryActorTick.bCanEverTick = false;
	SetActorLocation(FVector(0, 0, -1000.f));
	bActived = false;
}

/////////////////////////// 플레이어 위치와 동기화 해야 함
FVector AEnemyCharacterBase::GetRandomLocationtoSpawn()
{
	// 맵상의 카메라 밖 영역의 랜덤한 위치에 스폰
	// 작은 사각형의 크기를 가져옵니다.
	FVector2D ViewportSize;
	GetWorld()->GetGameViewport()->GetViewportSize(ViewportSize);

	// 큰 사각형의 크기를 계산합니다.
	FVector2D BigBoxSize = FVector2D(ViewportSize.X + 100, ViewportSize.Y + 100);

	// 작은 사각형과 큰 사각형의 각 면 사이의 거리를 계산합니다.
	float DistanceX = (BigBoxSize.X - ViewportSize.X) / 2.f;
	float DistanceY = (BigBoxSize.Y - ViewportSize.Y) / 2.f;

	// 작은 사각형과 가장 가까운 면과의 거리를 계산합니다.
	float MinDistance = FMath::Min(DistanceX, DistanceY);

	// 랜덤 위치를 선택하기 위해 RandomStream을 생성합니다.
	FMath::RandInit(FDateTime::Now().GetTicks());

	// 큰 사각형에서 작은 사각형을 제외한 나머지 공간에서 랜덤한 위치를 선택합니다.
	FVector2D RandomLocation;
	do {
		RandomLocation = FVector2D(FMath::FRandRange(-BigBoxSize.X / 2.f, BigBoxSize.X / 2.f),
								FMath::FRandRange(-BigBoxSize.Y / 2.f, BigBoxSize.Y / 2.f));
	} while (FMath::Abs(RandomLocation.X) < DistanceX - MinDistance ||
			FMath::Abs(RandomLocation.Y) < DistanceY - MinDistance);

	// 랜덤한 위치를 출력합니다.
	UE_LOG(LogTemp, Log, TEXT("Random Location: %s"), *RandomLocation.ToString());

	return FVector(RandomLocation, 100.f);
}
