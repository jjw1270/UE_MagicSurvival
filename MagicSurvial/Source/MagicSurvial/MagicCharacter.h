// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MagicCharacter.generated.h"

class UPrimitiveComponent;

UCLASS()
class MAGICSURVIAL_API AMagicCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMagicCharacter();

private:
	class AMagicSurvivalGameMode* GameMode;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UCapsuleComponent* RootCapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USceneComponent> Base_Skill_Point_A;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<USceneComponent>> Skill_Point_A;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UInputAction* MoveAction;

private:
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	int PlayerLevel = 1;

	UPROPERTY(EditAnywhere, Category = "Skills")
	TSubclassOf<class AIceSpear> Skill_IceSpearClass;

	UPROPERTY(EditAnywhere, Category = "Skills")
	TSubclassOf<class ASparkleBallBase> Skill_SparkleBallBaseClass;

	UPROPERTY(EditAnywhere, Category = "Skills")
	int Skill_Level_IceSpear = 0;
	UPROPERTY(EditAnywhere, Category = "Skills")
	int Skill_Level_SparkleBall  = 0;
	UPROPERTY(EditAnywhere, Category = "Skills")
	int Skill_Level_LightningStrike = 0;
	UPROPERTY(EditAnywhere, Category = "Skills")
	int Skill_Level_MagicArrow = 0;
	UPROPERTY(EditAnywhere, Category = "Skills")
	int Skill_Level_PunchHeavy = 0;

public:
	int GetPlayerLevel() { return PlayerLevel; };

	int GetSkill_Level_IceSpear() { return Skill_Level_IceSpear; };
	int GetSkill_Level_SparkleBall() { return Skill_Level_SparkleBall; };
	int GetSkill_Level_LightningStrike() { return Skill_Level_LightningStrike; };
	int GetSkill_Level_MagicArrow() { return Skill_Level_MagicArrow; };
	int GetSkill_Level_PunchHeavy() { return Skill_Level_PunchHeavy; };

	FTimerDelegate TimerDelegate_Skill_IceSpear;
	FTimerDelegate TimerDelegate_Skill_SparkleBall;
	FTimerDelegate TimerDelegate_Skill_LightningStrike;
	FTimerDelegate TimerDelegate_Skill_MagicArrow;
	FTimerDelegate TimerDelegate_Skill_PunchHeavy;

private:
	// 스킬 간격
	float Timer_Skill_IceSpear = 1.5f;
	float Timer_Skill_SparkleBall = 18.f;
	float Timer_Skill_LightningStrike = 3.f;
	float Timer_Skill_MagicArrow = 2.f;
	float Timer_Skill_PunchHeavy = 8.f;

public:
	float Get_Timer_Skill_IceSpear() { return Timer_Skill_IceSpear; };
	float Get_Timer_Skill_SparkleBall() { return Timer_Skill_SparkleBall; };
	float Get_Timer_Skill_LightningStrike() { return Timer_Skill_LightningStrike; };
	float Get_Timer_Skill_MagicArrow() { return Timer_Skill_MagicArrow; };
	float Get_Timer_Skill_PunchHeavy() { return Timer_Skill_PunchHeavy; };

private:
	UFUNCTION()
	void Skill_IceSpear();
	UFUNCTION()
	void Skill_SparkleBall();
	UFUNCTION()
	void Skill_LightningStrike();
	UFUNCTION()
	void Skill_MagicArrow();
	UFUNCTION()
	void Skill_PunchHeavy();
};
