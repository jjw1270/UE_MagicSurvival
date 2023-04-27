// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MagicSurvivalGameMode.generated.h"

class ASkeletalMeshActor;

UCLASS()
class MAGICSURVIAL_API AMagicSurvivalGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere, Category = "LobbyUI")
	TSubclassOf<class UUserWidget> LobbyScreenClass;

	UPROPERTY(EditAnywhere, Category = "LobbyUI")
	TSubclassOf<ASkeletalMeshActor> LobbyCharacterClass;
	UUserWidget* LobbyScreen;

	class AMagicCharacter* myCharacter;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bGameStart = false;

	ASkeletalMeshActor* SpawnedLobbyCharacter;

	void StartGame();

	void EndGame();

private:
	FTimerHandle TimerHandle_Skill_IceSpear;
	FTimerHandle TimerHandle_Skill_SparkleBall;
	FTimerHandle TimerHandle_Skill_LightningStrike;
	FTimerHandle TimerHandle_Skill_MagicArrow;
	FTimerHandle TimerHandle_Skill_PunchHeavy;

	FTimerHandle TimerHandle_GamePlay;
	UFUNCTION()
	void GameTimer();
	UPROPERTY()
	int32 GamePlayTime = 900; // 15분 (900 초)

	class AEnemyObjectPooler* EnemyObjectPooler;

	bool bStartTimer;

	UFUNCTION()
	void EnemySpawnController();

	FTimerHandle TimerHandle_Enemy_Zombie;
	FTimerHandle TimerHandle_Enemy_Ghoul;
	FTimerHandle TimerHandle_Enemy_Skeleton;
	FTimerHandle TimerHandle_Enemy_Lich;
	FTimerHandle TimerHandle_Enemy_Goblin;

	FTimerDelegate TimerDelegate_SpawnEnemy;

	UFUNCTION()
	void SpawnEnemy(FName EnemyTag, int32 EnemyCount);

public:
	int32 GetGamePlayTime()
	{
		return GamePlayTime;
	}
};
