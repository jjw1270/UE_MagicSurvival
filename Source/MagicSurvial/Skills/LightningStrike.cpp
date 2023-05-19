// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningStrike.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

ALightningStrike::ALightningStrike()
{
    PrimaryActorTick.bCanEverTick = true;

    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    RootComponent = SphereCollision;

    SkillParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Skill Particle"));
	SkillParticle->SetupAttachment(RootComponent);

    // Overlap Event 선언
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ALightningStrike::OnOverlapBegin);
}

void ALightningStrike::BeginPlay()
{
    Super::BeginPlay();

    SetDamage();

    // 1.5초 후에 해당 액터를 제거
    FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
        this->Destroy();
    });
    GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 1.5f, false);
}

void ALightningStrike::SetDamage()
{
    SkillDamage = FMath::RandRange(FMath::TruncToInt(DefaultDamage* 1.5f), FMath::TruncToInt(DefaultDamage * 2.f));
}

void ALightningStrike::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		UE_LOG(LogTemp, Error, TEXT("Hit! : %s"), *OtherActor->GetName());

	}
}
