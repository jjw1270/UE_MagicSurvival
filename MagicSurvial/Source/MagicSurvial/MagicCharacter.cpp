// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MagicSurvivalGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "Components/PrimitiveComponent.h"
#include "Components/CapsuleComponent.h"
#include "Floor.h"
#include "MagicCharacterPlayerController.h"

#include "IceSpear.h"
#include "SparkleBallBase.h"
#include "LightningStrike.h"
#include "MagicArrow.h"
#include "PunchHeavy.h"

// Sets default values
AMagicCharacter::AMagicCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootCapsuleComp = GetCapsuleComponent();

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
    SpringArm->TargetArmLength = 1800;
    SpringArm->SetRelativeRotation(FRotator(-75.f, 0.f, 0.f));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritYaw = false; SpringArm->bInheritPitch = false; SpringArm->bInheritRoll = false;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	// Skill Spawn Point
	Base_Skill_Point_A = CreateDefaultSubobject<USceneComponent>(TEXT("Base Skill Point A"));
	Base_Skill_Point_A->SetupAttachment(RootComponent);
	Skill_Point_A.SetNum(8);

	float Rotate_Yaw = 0.f;
	for (int32 i = 0; i < 8; i++)
	{
		Skill_Point_A[i] = CreateDefaultSubobject<USceneComponent>(FName(FString::Printf(TEXT("Skill Point A %d"), i)));
		Skill_Point_A[i]->SetupAttachment(Base_Skill_Point_A);
		Skill_Point_A[i]->SetRelativeRotation(FRotator(0.f, Rotate_Yaw, 0.f));

		Rotate_Yaw += 45.f;
	}

	// Overlap Event 선언
	RootCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AMagicCharacter::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AMagicCharacter::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AMagicSurvivalGameMode>(GetWorld()->GetAuthGameMode());

	// Skill 타이머 델리게이트 생성
	TimerDelegate_Skill_IceSpear = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_IceSpear);
	TimerDelegate_Skill_SparkleBall = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_SparkleBall);
	TimerDelegate_Skill_LightningStrike = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_LightningStrike);
	TimerDelegate_Skill_MagicArrow = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_MagicArrow);
	TimerDelegate_Skill_PunchHeavy = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_PunchHeavy);
}

// Called every frame
void AMagicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMagicCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerController"));
		return;
	}
	// Get the local player subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
    if (Subsystem == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Subsystem"));
		return;
	}
	// Clear out existing mapping, and our mapping
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

    // Get the EnhancedInputComponent
    UEnhancedInputComponent* EnhancedInputComp = Cast<UEnhancedInputComponent>(InputComponent);

    // Bind the actions
    // Completed : 눌렀다 뗐을 때, Triggered : 누르고 있을 때
    EnhancedInputComp->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMagicCharacter::Move);
}

void AMagicCharacter::Move(const FInputActionValue& Value)
{
	if (!GameMode->bGameStart)
	{
		return;
	}
    // input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
    
	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// set movement rotation
		FVector MovementDirection(MovementVector.Y, MovementVector.X, 0.f);
		FRotator NewRotation = FRotationMatrix::MakeFromX(MovementDirection).Rotator();
    	SetActorRotation(NewRotation);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMagicCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		AFloor* OverlappedFloor = Cast<AFloor>(OtherActor);
		if(OverlappedFloor)
		{
			Cast<AMagicCharacterPlayerController>(GetController())->InfiniteMap(OverlappedFloor);
		}
	}
}

void AMagicCharacter::Skill_IceSpear()
{
	if (GetSkill_Level_IceSpear() == 0) return;

	switch (GetSkill_Level_IceSpear())
	{
	case 5:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[3]->GetComponentLocation(), Skill_Point_A[3]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[5]->GetComponentLocation(), Skill_Point_A[5]->GetComponentRotation());
	case 4:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[1]->GetComponentLocation(), Skill_Point_A[1]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[7]->GetComponentLocation(), Skill_Point_A[7]->GetComponentRotation());
	case 3:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[2]->GetComponentLocation(), Skill_Point_A[2]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[6]->GetComponentLocation(), Skill_Point_A[6]->GetComponentRotation());
	case 2:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[4]->GetComponentLocation(), Skill_Point_A[4]->GetComponentRotation());	
	case 1:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_Point_A[0]->GetComponentLocation(), Skill_Point_A[0]->GetComponentRotation());
		break;
	}
}

void AMagicCharacter::Skill_SparkleBall()
{
	if (GetSkill_Level_SparkleBall() == 0) return;

	GetWorld()->SpawnActor<ASparkleBallBase>(Skill_SparkleBallBaseClass, GetActorLocation(), GetActorRotation());
}

void AMagicCharacter::Skill_LightningStrike()
{
	if (GetSkill_Level_LightningStrike() == 0) return;

	FVector2D ViewportSize;
	GetWorld()->GetGameViewport()->GetViewportSize(ViewportSize);
	
	for (int32 i = 0; i < GetSkill_Level_LightningStrike(); i++)
	{
		float randomX = (GetActorLocation().X + FMath::RandRange(-ViewportSize.Y, ViewportSize.Y)) * 0.7f;
		float randomY = (GetActorLocation().Y + FMath::RandRange(-ViewportSize.X, ViewportSize.X)) * 0.7f;

		GetWorld()->SpawnActor<ALightningStrike>(Skill_LightningStrikeClass, FVector(randomX, randomY, 100.f), FRotator::ZeroRotator);
	}
}

void AMagicCharacter::Skill_MagicArrow()
{
	if (GetSkill_Level_MagicArrow() == 0) return;

	int32 SkillCount = GetSkill_Level_MagicArrow();

	// 0.3초 간격으로 spawn
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([=]() mutable {
		GetWorld()->SpawnActor<AMagicArrow>(Skill_MagicArrowClass, GetActorLocation(), GetActorRotation());
		if (--SkillCount <= 0)
		{
			GetWorldTimerManager().ClearTimer(Skill_MagicArrow_Delay_TimerHandle);
			return;
		}
	});
	GetWorldTimerManager().SetTimer(Skill_MagicArrow_Delay_TimerHandle, TimerDelegate, 0.3f, true);
}

void AMagicCharacter::Skill_PunchHeavy()
{
	if (GetSkill_Level_PunchHeavy() == 0) return;

	APunchHeavy* PunchHeavy = GetWorld()->SpawnActor<APunchHeavy>(Skill_PunchHeavyClass, GetActorLocation(), GetActorRotation());
	PunchHeavy->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
}
