// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "MagicCharacterPlayerController.generated.h"

UCLASS()
class MAGICSURVIAL_API AMagicCharacterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMagicCharacterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	void Move(const FInputActionValue& Value);

protected:
	class AMagicCharacter* myCharacter;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupInputComponent() override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UInputAction* MoveAction;

private:
	float MoveSpeed = 900;
};
