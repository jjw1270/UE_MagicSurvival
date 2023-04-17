// Fill out your copyright notice in the Description page of Project Settings.


#include "SparkleBall.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PrimitiveComponent.h"

ASparkleBall::ASparkleBall()
{
    PrimaryActorTick.bCanEverTick = true;

    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    RootComponent = SphereCollision;

    SkillMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skill Mesh"));
	SkillMesh->SetupAttachment(RootComponent);

    SkillParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Skill Particle"));
	SkillParticle->SetupAttachment(RootComponent);

	HitParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Hit Particle"));
	HitParticle->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	HitParticle->SetAutoActivate(false);
}

void ASparkleBall::BeginPlay()
{
    Super::BeginPlay();

    // Overlap Event 선언
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ASparkleBall::OnOverlapBegin);

    SetDamage();

    Direction = GetActorForwardVector();

    FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
        this->Destroy();
    });
    GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 10.f, false);
}

void ASparkleBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
}

void ASparkleBall::SetDamage()
{
    SkillDamage = FMath::RandRange(DefaultDamage-25, DefaultDamage+25);
}

void ASparkleBall::OnOverlapBegin(
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
		HitParticle->SetActive(true);

        HitParticle->SetRelativeLocation(OtherActor->GetActorLocation());

        // 0.2초 후 파티클 비활성화
		FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
            HitParticle->SetActive(false);
        });
        GetWorldTimerManager().SetTimer(TimerHandle_DestroyParticle, TimerDelegate, 0.2f, false);
	}
}
