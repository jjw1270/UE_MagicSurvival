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
	TObjectPtr<class AMagicSurvivalGameMode> GameMode;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TObjectPtr<UCapsuleComponent> RootCapsuleComp;

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
	TObjectPtr<class UInputMappingContext> InputMapping;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	TObjectPtr<class UInputAction> MoveAction;

private:
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
	TSubclassOf<class ALightningStrike> Skill_LightningStrikeClass;
	UPROPERTY(EditAnywhere, Category = "Skills")
	TSubclassOf<class AMagicArrow> Skill_MagicArrowClass;
	UPROPERTY(EditAnywhere, Category = "Skills")
	TSubclassOf<class APunchHeavy> Skill_PunchHeavyClass;

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
	FORCEINLINE int GetPlayerLevel() { return PlayerLevel; };

	FORCEINLINE int GetSkill_Level_IceSpear() { return Skill_Level_IceSpear; };
	FORCEINLINE int GetSkill_Level_SparkleBall() { return Skill_Level_SparkleBall; };
	FORCEINLINE int GetSkill_Level_LightningStrike() { return Skill_Level_LightningStrike; };
	FORCEINLINE int GetSkill_Level_MagicArrow() { return Skill_Level_MagicArrow; };
	FORCEINLINE int GetSkill_Level_PunchHeavy() { return Skill_Level_PunchHeavy; };

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
	float Timer_Skill_MagicArrow = 4.f;
	FTimerHandle Skill_MagicArrow_Delay_TimerHandle;
	float Timer_Skill_PunchHeavy = 5.f;

public:
	FORCEINLINE float Get_Timer_Skill_IceSpear() { return Timer_Skill_IceSpear; };
	FORCEINLINE float Get_Timer_Skill_SparkleBall() { return Timer_Skill_SparkleBall; };
	FORCEINLINE float Get_Timer_Skill_LightningStrike() { return Timer_Skill_LightningStrike; };
	FORCEINLINE float Get_Timer_Skill_MagicArrow() { return Timer_Skill_MagicArrow; };
	FORCEINLINE float Get_Timer_Skill_PunchHeavy() { return Timer_Skill_PunchHeavy; };

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
