// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCharacterPlayerController.h"

#include "Blueprint/UserWidget.h"

void AMagicCharacterPlayerController::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;

    // Lobby UI Start
    if (LobbyCharacterClass != nullptr)
    {
        SpawnedLobbyCharacter = GetWorld()->SpawnActor<AActor>(LobbyCharacterClass, FVector::ZeroVector, FRotator::ZeroRotator);
    }
    UUserWidget* LobbyScreen = CreateWidget(this, LobbyScreenClass);
    if (LobbyScreen != nullptr)
    {
        LobbyScreen->AddToViewport();
    }
}
