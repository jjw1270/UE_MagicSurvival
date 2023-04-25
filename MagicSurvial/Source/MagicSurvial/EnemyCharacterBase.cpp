// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterBase.h"
#include "MagicSurvivalGameMode.h"
#include "MagicCharacter.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyCharacterBase::AEnemyCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootCapsuleComp = GetCapsuleComponent();

	// Overlap Event 선언
	RootCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyCharacterBase::OnOverlapBegin);
	RootCapsuleComp->OnComponentEndOverlap.AddDynamic(this, &AEnemyCharacterBase::OnOverlapEnd);

	Tags.Add("Enemy");

	RootCapsuleComp->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel2);
	RootCapsuleComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	RootCapsuleComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Overlap);
	GetMesh()->SetCollisionProfileName("NoCollision");
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
		case 13:
			HP = DefaultHP * 10;
			break;
		case 11:
			HP = DefaultHP * 8;
			break;
		case 9:
			HP = DefaultHP * 6;
			break;
		case 7:
			HP = DefaultHP * 4;
			break;
		case 5:
			HP = DefaultHP * 3;
			break;
		case 3:
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
    if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		// 최초 1회 Add Damage to Player Character
		// n 초마다 Add Damage to Player Character
	}
}

void AEnemyCharacterBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex)
{
    if (OtherActor && (OtherActor != this) && OtherComp) 
	{
        // Clear TimerHandle
	}
}

void AEnemyCharacterBase::SetActive(bool bActive)
{
	// 활성화 작업
	if (bActive)
	{
		SetActorHiddenInGame(false);
		TargetPlayer = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		bActived = true;
		bDeath = false;
		return;
	}

	// 비활성화 작업
	SetActorHiddenInGame(true);
	bActived = false;
}
