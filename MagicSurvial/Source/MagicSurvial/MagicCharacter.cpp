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
    SpringArm->SetRelativeRotation(FRotator(-75.f, 0, 0));
	// SpringArm->bInheritYaw = false; SpringArm->bInheritPitch = false; SpringArm->bInheritRoll = false;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	float Dir_x = 40;
	float Dir_y = 0;
	float Rotate_z = 0;

	for (int32 i = 0; i < 8; i++)
	{
		Skill_SpawnPoint_A[i]->CreateDefaultSubobject<USceneComponent>(TEXT("Skill SpawnPoint %d"), i);
		
		float dx = (i % 2 == 0) ? -10.f : 10.f;
        float dy = (i < 2 || i > 5) ? 30.f : -10.f;
        float rz = (i % 2 == 0) ? 0.f : 40.f;

		Dir_x += dx;
        Dir_y += dy;
        Rotate_z+= rz;

		Skill_SpawnPoint_A[i]->SetRelativeLocation(FVector(Dir_x, Dir_y, 0.f));
		Skill_SpawnPoint_A[i]->SetRelativeRotation(FRotator(0.f, 0.f, Rotate_z));
	}
}

// Called when the game starts or when spawned
void AMagicCharacter::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AMagicSurvivalGameMode>(GetWorld()->GetAuthGameMode());

	// Overlap Event 선언
	RootCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AMagicCharacter::OnOverlapBegin);
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
