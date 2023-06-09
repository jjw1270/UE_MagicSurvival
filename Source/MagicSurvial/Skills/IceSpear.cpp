// Fill out your copyright notice in the Description page of Project Settings.


#include "IceSpear.h"
#include "Components/SphereComponent.h"
#include "Math/UnrealMath.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PrimitiveComponent.h"

AIceSpear::AIceSpear()
{
    PrimaryActorTick.bCanEverTick = true;

    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    RootComponent = SphereCollision;

    SkillMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skill Mesh"));
	SkillMesh->SetupAttachment(RootComponent);

	HitParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Hit Particle"));
	HitParticleComp->SetupAttachment(RootComponent);
	HitParticleComp->SetAutoActivate(false);

    // Overlap Event 선언
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AIceSpear::OnOverlapBegin);
}

void AIceSpear::BeginPlay()
{
    Super::BeginPlay();

    SetDamage();

    Direction = GetActorForwardVector();
}

void AIceSpear::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 생성된 방향으로 직선 이동
    if (!bIsHit)
    {
        AddActorWorldOffset(Direction * SkillSpeed * DeltaTime, true);
    }
}

void AIceSpear::SetDamage()
{
    SkillDamage = FMath::RandRange(DefaultDamage, FMath::TruncToInt(DefaultDamage * 1.5f));
}

void AIceSpear::OnOverlapBegin(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp) 
	{
        SphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		UE_LOG(LogTemp, Error, TEXT("Hit! : %s"), *OtherActor->GetName());
		HitParticleComp->SetActive(true);
		bIsHit = true;

        // 1초 후에 해당 액터를 제거
		FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
            this->Destroy();
        });
        GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 1.f, false);
	}
}
