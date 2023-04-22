// Fill out your copyright notice in the Description page of Project Settings.


#include "PunchHeavy.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "MagicCharacter.h"

APunchHeavy::APunchHeavy()
{
    PrimaryActorTick.bCanEverTick = true;

    SkillParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Skill Particle"));
	RootComponent = SkillParticle;

    BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
    BoxCollision->SetupAttachment(RootComponent);

}

void APunchHeavy::BeginPlay()
{
    Super::BeginPlay();

    // 레벨에 따라 SkillParticle Scale 조절
    AMagicCharacter* myCharacter = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
    FVector Scale = FVector(myCharacter->GetSkill_Level_PunchHeavy() * 0.6f, 1.f, 1.f);
    SkillParticle->SetWorldScale3D(Scale);

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
