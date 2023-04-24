// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicSurvivalGameMode.h"

#include "Blueprint/UserWidget.h"
#include "Animation/SkeletalMeshActor.h"
#include "MagicCharacter.h"

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

    myCharacter = Cast<AMagicCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
    if (myCharacter == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("AMagicCharacter"));
        return;
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

    GetWorldTimerManager().SetTimer(TimerHandle_GamePlay, this, &AMagicSurvivalGameMode::GameTimer, 1.0f, true);
    
    // 스킬 타이머 시작
	GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_Skill_IceSpear,
        myCharacter->TimerDelegate_Skill_IceSpear,
        myCharacter->Get_Timer_Skill_IceSpear(), true);
	GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_Skill_SparkleBall,
        myCharacter->TimerDelegate_Skill_SparkleBall,
        myCharacter->Get_Timer_Skill_SparkleBall(), true);
	GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_Skill_LightningStrike,
        myCharacter->TimerDelegate_Skill_LightningStrike,
        myCharacter->Get_Timer_Skill_LightningStrike(), true);
	GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_Skill_MagicArrow,
        myCharacter->TimerDelegate_Skill_MagicArrow,
        myCharacter->Get_Timer_Skill_MagicArrow(), true);
	GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_Skill_PunchHeavy,
        myCharacter->TimerDelegate_Skill_PunchHeavy,
        myCharacter->Get_Timer_Skill_PunchHeavy(), true);
}

void AMagicSurvivalGameMode::GameTimer()
{
    if (GamePlayTime < 0)
    {
        // 게임 종료
    }
    GamePlayTime--;
    UE_LOG(LogTemp, Display, TEXT("timer : %d"), GamePlayTime);
}
