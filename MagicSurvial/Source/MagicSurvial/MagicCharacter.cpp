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
	Skill_SpawnPoint_A_Base = CreateDefaultSubobject<USceneComponent>(TEXT("Skill SpawnPoint Base"));
	Skill_SpawnPoint_A_Base->SetupAttachment(RootComponent);

	Skill_SpawnPoint_A.SetNum(8);
	float Rotate_Yaw = 0.f;
	for (int32 i = 0; i < 8; i++)
	{
		Skill_SpawnPoint_A[i] = CreateDefaultSubobject<USceneComponent>(FName(FString::Printf(TEXT("Skill SpawnPoint %d"), i)));
		Skill_SpawnPoint_A[i]->SetupAttachment(RootComponent);
		Skill_SpawnPoint_A[i]->SetRelativeRotation(FRotator(0.f, Rotate_Yaw, 0.f));
		Rotate_Yaw += 45.f;
	}
}

// Called when the game starts or when spawned
void AMagicCharacter::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AMagicSurvivalGameMode>(GetWorld()->GetAuthGameMode());

	// Overlap Event 선언
	RootCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AMagicCharacter::OnOverlapBegin);

	// Skill 타이머 델리게이트 생성
	TimerDelegate_Skill_IceSpear = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_IceSpear);
	TimerDelegate_Skill_SparkleBall = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_SparkleBall);
	TimerDelegate_Skill_LightningStrike = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_LightningStrike);
	TimerDelegate_Skill_MagicArrow = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_MagicArrow);
	TimerDelegate_Skill_PunchHeavy = FTimerDelegate::CreateUObject(this, &AMagicCharacter::Skill_PunchHeavy);

	// 스킬 타이머 시작
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Skill_IceSpear, TimerDelegate_Skill_IceSpear, Timer_Skill_IceSpear, true);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Skill_SparkleBall, TimerDelegate_Skill_SparkleBall, Timer_Skill_SparkleBall, true);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Skill_LightningStrike, TimerDelegate_Skill_LightningStrike, Timer_Skill_LightningStrike, true);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Skill_MagicArrow, TimerDelegate_Skill_MagicArrow, Timer_Skill_MagicArrow, true);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Skill_PunchHeavy, TimerDelegate_Skill_PunchHeavy, Timer_Skill_PunchHeavy, true);
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

int AMagicCharacter::GetPlayerLevel()
{
	return PlayerLevel;
}

int AMagicCharacter::GetSkill_Level_IceSpear()
{
	return Skill_Level_IceSpear;
}

int AMagicCharacter::GetSkill_Level_SparkleBall()
{
	return Skill_Level_SparkleBall;
}

int AMagicCharacter::GetSkill_Level_LightningStrike()
{
	return Skill_Level_LightningStrike;
}

int AMagicCharacter::GetSkill_Level_MagicArrow()
{
	return Skill_Level_MagicArrow;
}

int AMagicCharacter::GetSkill_Level_PunchHeavy()
{
	return Skill_Level_PunchHeavy;
}

void AMagicCharacter::Skill_IceSpear()
{
	if (Skill_Level_IceSpear == 0) return;

	switch (Skill_Level_IceSpear)
	{
	case 5:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[3]->GetComponentLocation(), Skill_SpawnPoint_A[3]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[5]->GetComponentLocation(), Skill_SpawnPoint_A[5]->GetComponentRotation());
	case 4:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[1]->GetComponentLocation(), Skill_SpawnPoint_A[1]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[7]->GetComponentLocation(), Skill_SpawnPoint_A[7]->GetComponentRotation());
	case 3:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[2]->GetComponentLocation(), Skill_SpawnPoint_A[2]->GetComponentRotation());
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[6]->GetComponentLocation(), Skill_SpawnPoint_A[6]->GetComponentRotation());
	case 2:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[4]->GetComponentLocation(), Skill_SpawnPoint_A[4]->GetComponentRotation());	
	case 1:
		GetWorld()->SpawnActor<AIceSpear>(Skill_IceSpearClass, Skill_SpawnPoint_A[0]->GetComponentLocation(), Skill_SpawnPoint_A[0]->GetComponentRotation());
		break;
	}
}

void AMagicCharacter::Skill_SparkleBall()
{
	if (Skill_Level_SparkleBall == 0) return;

	switch (Skill_Level_SparkleBall)
	{
	case 1:
		
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
	
		break;
	}
}

void AMagicCharacter::Skill_LightningStrike()
{
	if (Skill_Level_LightningStrike == 0) return;

	switch (Skill_Level_LightningStrike)
	{
	case 1:
		
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
	
		break;
	}
}

void AMagicCharacter::Skill_MagicArrow()
{
	if (Skill_Level_MagicArrow == 0) return;

	switch (Skill_Level_MagicArrow)
	{
	case 1:
		
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
	
		break;
	}
}

void AMagicCharacter::Skill_PunchHeavy()
{
	if (Skill_Level_PunchHeavy == 0) return;

	switch (Skill_Level_PunchHeavy)
	{
	case 1:
		
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
	
		break;
	}
}
