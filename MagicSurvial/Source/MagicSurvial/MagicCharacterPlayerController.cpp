// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicCharacterPlayerController.h"
#include "Floor.h"

void AMagicCharacterPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    // Map 생성
    if (FloorClass == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("FloorClass"));
        return;
    }

    float dx = 10000.f;
    for (int32 i = 0; i < 3; i++)
    {
        float dy = -10000.f;
        for (int32 j = 0; j < 3; j++)
        {
            // AFloor 액터 생성
            AFloor* NewFloor = GetWorld()->SpawnActor<AFloor>(FloorClass, FVector(dx, dy, 0.f), FRotator::ZeroRotator);

            // Floors 배열 요소에 할당
            Floors[i][j] = NewFloor;

            dy += 10000.f;
        }
        dx -= 10000.f;
    }
}

void AMagicCharacterPlayerController::InfiniteMap(AFloor* OverlappedFloor)
{
    for (int32 i = 0; i < 3; i++)
    {
        for (int32 j = 0; j < 3; j++)
        {
            if (Floors[i][j] == OverlappedFloor)
            {
                ///////////////////////////////////////////////////
                UE_LOG(LogTemp, Error, TEXT("배열[%d][%d]"), i, j);
                break;
            }
        }
    }
}
