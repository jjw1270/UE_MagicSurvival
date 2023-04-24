// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicArrow.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "EngineUtils.h"

AMagicArrow::AMagicArrow()
{
    PrimaryActorTick.bCanEverTick = true;

    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    RootComponent = SphereCollision;

    SkillMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skill Mesh"));
	SkillMesh->SetupAttachment(RootComponent);

    HitSphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Hit Sphere Collision"));
    HitSphereCollision->SetupAttachment(RootComponent);
    HitSphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    HitParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Hit Particle"));
	HitParticleComp->SetupAttachment(HitSphereCollision);
	HitParticleComp->SetAutoActivate(false);

    EnemyCollisionType = ECC_GameTraceChannel2;

    // Overlap Event 선언
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AMagicArrow::OnOverlapBegin);
	HitSphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AMagicArrow::OnOverlapBegin);
}

void AMagicArrow::BeginPlay()
{
    Super::BeginPlay();

    // 모든 적 찾기
    TArray<AActor*> AllEnemy;
    // 월드의 모든 액터에서 find
    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        // Enemy tag를 가지고 있는 액터들
        if (ActorItr->ActorHasTag(TEXT("Enemy")))
        {
            // 배열에 추가합니다.
            AllEnemy.Add(*ActorItr);
        }
    }

    // 랜덤 액터 찾기
    if (AllEnemy.Num() > 0)
    {
        Target = AllEnemy[FMath::RandRange(0, AllEnemy.Num() - 1)];
    }
    else
    {
        Direction = GetActorForwardVector();
    }

    // 4초 후에 해당 액터를 제거
    FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
        this->Destroy();
    });
    GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 4.f, false);
}

void AMagicArrow::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Target == nullptr)
    {
        AddActorWorldOffset(Direction * SkillSpeed * DeltaTime, true);
    }

    // 타겟을 향해 이동
    if (!bCanHit)
    {
        FVector TargetDirection = Target->GetActorLocation() - GetActorLocation();
        FVector Movement = TargetDirection.GetSafeNormal() * SkillSpeed * DeltaTime;
        AddActorWorldOffset(Movement, true);
        SetActorRotation(TargetDirection.Rotation());
    }
}

void AMagicArrow::SetDamage()
{
    SkillDamage = FMath::RandRange(FMath::TruncToInt(DefaultDamage * 0.5f), DefaultDamage);
}

void AMagicArrow::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp) 
	{
        if (!bCanHit){
            bCanHit = true;
            HitSphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
            HitParticleComp->SetActive(true);
            SkillMesh->SetVisibility(false);
            SphereCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Hit! : %s"), *OtherActor->GetName());
            // n초 후 해당 액터 제거
            GetWorldTimerManager().ClearTimer(TimerHandle_DestroyActor);
            FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
                this->Destroy();
            });
            GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 1.5f, false);
        }
	}
}
