// Fill out your copyright notice in the Description page of Project Settings.


#include "SparkleBall.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"

ASparkleBall::ASparkleBall()
{
    PrimaryActorTick.bCanEverTick = true;

    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    RootComponent = SphereCollision;

    SkillMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skill Mesh"));
	SkillMesh->SetupAttachment(RootComponent);

    SkillParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Skill Particle"));
	SkillParticle->SetupAttachment(RootComponent);

	// Overlap Event 선언
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ASparkleBall::OnOverlapBegin);
}

void ASparkleBall::BeginPlay()
{
    Super::BeginPlay();
    
    SetDamage();
}

void ASparkleBall::SetDamage()
{
    SkillDamage = FMath::RandRange(FMath::TruncToInt(DefaultDamage * 0.75f), FMath::TruncToInt(DefaultDamage * 1.25f));
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
		UE_LOG(LogTemp, Error, TEXT("Hit! : %s"), *OtherActor->GetName());

        // Hit Location에 파티클 생성
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, OtherActor->GetActorTransform());
	}
}
