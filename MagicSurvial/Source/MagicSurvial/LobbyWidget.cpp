// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyWidget.h"
#include "Components/Button.h"
#include "MagicSurvivalGameMode.h"
#include "Engine/EngineTypes.h"

// 위젯 클래스의 생성자
void ULobbyWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    // 버튼 클릭시 호출될 델리게이트에 함수를 등록한다
	Btn_GameStart->OnClicked.AddDynamic(this, &ULobbyWidget::Btn_GameStart_Callback);
    Btn_QuitGame->OnClicked.AddDynamic(this, &ULobbyWidget::Btn_QuitGame_Callback);
}

void ULobbyWidget::Btn_GameStart_Callback()
{
    UE_LOG(LogTemp, Warning, TEXT("GameStart Button Pressed!"));
    // 캐릭터 애니메이션 / 게임 시작 sound 실행
    currentGameMode = Cast<AMagicSurvivalGameMode>(GetWorld()->GetAuthGameMode());
    if (currentGameMode)
    {
        currentGameMode->bGameStart = true;

        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ULobbyWidget::StartGame, 1.3f, false);
    }
}

void ULobbyWidget::Btn_QuitGame_Callback()
{
    UE_LOG(LogTemp, Warning, TEXT("QuitGame!"));

    GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}

void ULobbyWidget::StartGame()
{
    currentGameMode->StartGame();
}
