// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicSurvivalGameMode.h"

#include "Blueprint/UserWidget.h"
#include "Animation/SkeletalMeshActor.h"

void AMagicSurvivalGameMode::BeginPlay()
{
    Super::BeginPlay();

    GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

    // Lobby UI Start
    if (LobbyCharacterClass != nullptr)
    {
        SpawnedLobbyCharacter = GetWorld()->SpawnActor<ASkeletalMeshActor>(LobbyCharacterClass, FVector::ZeroVector, FRotator::ZeroRotator);
    }
    LobbyScreen = CreateWidget(GetWorld(), LobbyScreenClass);
    if (LobbyScreen != nullptr)
    {
        LobbyScreen->AddToViewport();
    }
}

void AMagicSurvivalGameMode::StartGame()
{
    // 로비 씬 제거
    if (LobbyScreen != nullptr)
    {
        LobbyScreen->RemoveFromParent();
        LobbyScreen = nullptr;
    }
    // 로비 캐릭터 제거
    if (SpawnedLobbyCharacter != nullptr)
    {
        SpawnedLobbyCharacter->Destroy();
        SpawnedLobbyCharacter = nullptr;
    }
    GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;
    bGameStart = true;
    return;
}
