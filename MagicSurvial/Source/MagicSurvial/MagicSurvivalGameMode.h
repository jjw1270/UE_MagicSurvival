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
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bGameStart = false;

	ASkeletalMeshActor* SpawnedLobbyCharacter;

	void StartGame();
};