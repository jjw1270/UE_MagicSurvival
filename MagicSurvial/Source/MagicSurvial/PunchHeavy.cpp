// Fill out your copyright notice in the Description page of Project Settings.


#include "PunchHeavy.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"

APunchHeavy::APunchHeavy()
{
    PrimaryActorTick.bCanEverTick = true;

    SkillParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Skill Particle Component"));
	RootComponent = SkillParticleComp;

    BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
    BoxCollision->SetupAttachment(SkillParticleComp);
}

void APunchHeavy::BeginPlay()
{
    Super::BeginPlay();

    // 레벨에 따라 BoxCollision extend, 위치 조절

    // 레벨에 따라 SkillParticleComp Scale 조절

    // Overlap Event 선언
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APunchHeavy::OnOverlapBegin);

    // 1초 후에 해당 액터를 제거
    FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
        this->Destroy();
    });
    GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 1.f, false);
}

void APunchHeavy::SetDamage()
{
    SkillDamage = FMath::RandRange(FMath::TruncToInt(DefaultDamage * 2.f), FMath::TruncToInt(DefaultDamage * 2.5f));
}

void APunchHeavy::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		UE_LOG(LogTemp, Error, TEXT("Hit! : %s"), *OtherActor->GetName());

        // Hit Location에 파티클 생성
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, OtherActor->GetActorTransform());
	}
}
