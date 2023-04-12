// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCharacterPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "MagicCharacter.h"
#include "Kismet/GameplayStatics.h"

AMagicCharacterPlayerController::AMagicCharacterPlayerController(const FObjectInitializer& ObjectInitializer)
{
    
}

void AMagicCharacterPlayerController::Move(const FInputActionValue& Value)
{
    // input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
    
    FVector DeltaLocation = FVector::ZeroVector;

    DeltaLocation.X = MovementVector.Y * MoveSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);
    DeltaLocation.Y = MovementVector.X * MoveSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);

    // calculate rotation based on movement direction
    FVector Direction = DeltaLocation;
    Direction.Normalize();
    FRotator Rotation = Direction.Rotation();
    Rotation.Pitch = 0.f;
    Rotation.Roll = 0.f;

    // set actor location and rotation
    myCharacter->AddActorLocalOffset(DeltaLocation);
    myCharacter->SetActorRotation(Rotation);
}

void AMagicCharacterPlayerController::BeginPlay()
{
    Super::BeginPlay();

    myCharacter = Cast<AMagicCharacter>(GetPawn());
    if (myCharacter == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("mycharacter"));
        return;
    }
}

void AMagicCharacterPlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMagicCharacterPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Get the local player subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    // Clear out existing mapping, and our mapping
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

    // Get the EnhancedInputComponent
    UEnhancedInputComponent* EnhancedInputComp = Cast<UEnhancedInputComponent>(InputComponent);

    // Bind the actions
    // Completed : 눌렀다 뗐을 때, Triggered : 누르고 있을 때
    EnhancedInputComp->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMagicCharacterPlayerController::Move);
}
