// Fill out your copyright notice in the Description page of Project Settings.


#include "SparkleBallBase.h"
#include "../MagicCharacter.h"
#include "SparkleBall.h"

// Sets default values
ASparkleBallBase::ASparkleBallBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Base_Skill_Point_B = CreateDefaultSubobject<USceneComponent>(TEXT("Base Skill Point B"));
	RootComponent = Base_Skill_Point_B;

	Skill_Point_B.SetNum(8);

	float Rotate_Yaw = 0.f;
	for (int32 i = 0; i < 8; i++)
	{
		Skill_Point_B[i] = CreateDefaultSubobject<USceneComponent>(FName(FString::Printf(TEXT("Skill Point B %d"), i)));
		Skill_Point_B[i]->SetupAttachment(Base_Skill_Point_B);
		Skill_Point_B[i]->SetRelativeRotation(FRotator(0.f, Rotate_Yaw, 0.f));

		Rotate_Yaw += 45.f;
	}
}

// Called when the game starts or when spawned
void ASparkleBallBase::BeginPlay()
{
	Super::BeginPlay();

	myCharacter = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
    if (myCharacter == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("AMagicCharacter"));
        return;
    }
	// n 초 후 Destroy
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateLambda([this]() {
		for (ASparkleBall* sb : SparkleBallArray)
		{
			if (sb != nullptr)
			{
				sb->Destroy();
			}
		}
        this->Destroy();
    });
    GetWorldTimerManager().SetTimer(TimerHandle_DestroyActor, TimerDelegate, 15.f, false);

	Skill_SparkleBall();
}

// Called every frame
void ASparkleBallBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 플레이어위치에 동기화
	SetActorLocation(myCharacter->GetActorLocation());

	// Base_Skill_Point_B를 일정 속도로 시계방향 회전
	FRotator CurrentRotation = GetActorRotation();
    
    CurrentRotation.Yaw += YawDelta * DeltaTime;
    SetActorRotation(CurrentRotation);
}

void ASparkleBallBase::Skill_SparkleBall()
{
	switch (myCharacter->GetSkill_Level_SparkleBall())
	{
	case 5:
		SparkleBallArray[3] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[3]->GetComponentLocation(), Skill_Point_B[3]->GetComponentRotation());
		SparkleBallArray[3]->AttachToComponent(Skill_Point_B[3], FAttachmentTransformRules::KeepWorldTransform);
		SparkleBallArray[7] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[7]->GetComponentLocation(), Skill_Point_B[7]->GetComponentRotation());
		SparkleBallArray[7]->AttachToComponent(Skill_Point_B[7], FAttachmentTransformRules::KeepWorldTransform);
	case 4:
		SparkleBallArray[1] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[1]->GetComponentLocation(), Skill_Point_B[1]->GetComponentRotation());
		SparkleBallArray[1]->AttachToComponent(Skill_Point_B[1], FAttachmentTransformRules::KeepWorldTransform);
		SparkleBallArray[5] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[5]->GetComponentLocation(), Skill_Point_B[5]->GetComponentRotation());
		SparkleBallArray[5]->AttachToComponent(Skill_Point_B[5], FAttachmentTransformRules::KeepWorldTransform);
	case 3:
		SparkleBallArray[2] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[2]->GetComponentLocation(), Skill_Point_B[2]->GetComponentRotation());
		SparkleBallArray[2]->AttachToComponent(Skill_Point_B[2], FAttachmentTransformRules::KeepWorldTransform);
		SparkleBallArray[6] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[6]->GetComponentLocation(), Skill_Point_B[6]->GetComponentRotation());
		SparkleBallArray[6]->AttachToComponent(Skill_Point_B[6], FAttachmentTransformRules::KeepWorldTransform);
	case 2:
		SparkleBallArray[4] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[4]->GetComponentLocation(), Skill_Point_B[4]->GetComponentRotation());
		SparkleBallArray[4]->AttachToComponent(Skill_Point_B[4], FAttachmentTransformRules::KeepWorldTransform);
	case 1:
		SparkleBallArray[0] = GetWorld()->SpawnActor<ASparkleBall>(Skill_SparkleBallClass, Skill_Point_B[0]->GetComponentLocation(), Skill_Point_B[0]->GetComponentRotation());
		SparkleBallArray[0]->AttachToComponent(Skill_Point_B[0], FAttachmentTransformRules::KeepWorldTransform);
		break;
	}
}
