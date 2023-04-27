// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicSurvivalGameMode.h"

#include "Blueprint/UserWidget.h"
#include "Animation/SkeletalMeshActor.h"
#include "MagicCharacter.h"
#include "EnemyObjectPooler.h"
#include "Kismet/GameplayStatics.h"

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
    
    // 레벨에서 EnemyObjectPooler클래스를 가지는 액터 가져옴
    EnemyObjectPooler = Cast<AEnemyObjectPooler>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyObjectPooler::StaticClass()));
    if (EnemyObjectPooler == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("AEnemyObjectPooler"));
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

void AMagicSurvivalGameMode::EndGame()
{
    
}

void AMagicSurvivalGameMode::GameTimer()
{
    GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("GamePlayTime: %d"), GamePlayTime));
    if (GamePlayTime < 0)
    {
        // 게임 종료
        EndGame();
    }
    EnemySpawnController();

    GamePlayTime--;
}

void AMagicSurvivalGameMode::EnemySpawnController()
{
    UE_LOG(LogTemp, Display, TEXT("%d"), GamePlayTime / 60);
    switch (GamePlayTime / 60)
    {
    case 14:
        if (!bStartTimer)
        {
            bStartTimer = true;
            TimerDelegate_SpawnEnemy = FTimerDelegate::CreateUObject(this, &AMagicSurvivalGameMode::SpawnEnemy, FName("Zombie"), 1);
            GetWorldTimerManager().SetTimer(TimerHandle_Enemy_Zombie, TimerDelegate_SpawnEnemy, 1.3f, true);
        }
        break;
    case 13:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 12:
        if (!bStartTimer)
        {
            bStartTimer = true;
            // GetWorldTimerManager().ClearTimer(TimerHandle_Enemy_Zombie);

            TimerDelegate_SpawnEnemy = FTimerDelegate::CreateUObject(this, &AMagicSurvivalGameMode::SpawnEnemy, FName("Ghoul"), 2);
            GetWorldTimerManager().SetTimer(TimerHandle_Enemy_Ghoul, TimerDelegate_SpawnEnemy, 2.0f, true);
        }
        break;
    case 11:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 10:
        break;
    case 9:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 8:
        break;
    case 7:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 6:
        break;
    case 5:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 4:
        break;
    case 3:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 2:
        break;
    case 1:
        if (bStartTimer)
        {
            bStartTimer = false;
        }
        break;
    case 0:
        // Clear
        break;
    }
}

void AMagicSurvivalGameMode::SpawnEnemy(FName EnemyTag, int32 EnemyCount)
{
    // 오브젝트 풀에서 해당하는 적 오브젝트 Active
    for (int i = 0; i < EnemyCount; i++)
    {
        EnemyObjectPooler->SpawnObjectFromPool(EnemyTag);
        UE_LOG(LogTemp, Display, TEXT("Spawn"));
    }
}
