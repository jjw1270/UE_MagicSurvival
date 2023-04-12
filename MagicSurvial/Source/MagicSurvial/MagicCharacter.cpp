// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMagicCharacter::AMagicCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	ArrowComp->SetupAttachment(CapsuleComp);

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character Mesh"));
	CharacterMesh->SetupAttachment(CapsuleComp);

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->SetupAttachment(CharacterMesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(CapsuleComp);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void AMagicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	WeaponMesh->AttachToComponent(CharacterMesh, FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
}

// Called every frame
void AMagicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

