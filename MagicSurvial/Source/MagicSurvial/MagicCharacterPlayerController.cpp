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

    RegenerateFloor(FVector::ZeroVector, true);
}

AFloor* AMagicCharacterPlayerController::GetFloor(int32 dx, int32 dy)
{
    return Floors[dx][dy];
}

void AMagicCharacterPlayerController::InfiniteMap(AFloor* OverlappedFloor)
{
    // Deep copy Floors to TempFloors
    AFloor* TempFloors[3][3];
    for (int32 i = 0; i < 3; i++)
    {
        for (int32 j = 0; j < 3; j++)
        {
            TempFloors[i][j] = GetFloor(i,j);
        }
    }

    if (OverlappedFloor == Floors[1][1]) return;
    if (OverlappedFloor == Floors[0][0])
    {
        Floors[0][0] = TempFloors[2][0];
        Floors[0][1] = TempFloors[2][1];
        Floors[0][2] = TempFloors[2][2];
        Floors[1][0] = TempFloors[0][2];
        Floors[1][1] = TempFloors[0][0];
        Floors[1][2] = TempFloors[0][1];
        Floors[2][0] = TempFloors[1][2];
        Floors[2][1] = TempFloors[1][0];
        Floors[2][2] = TempFloors[1][1];
    }
    else if (OverlappedFloor == Floors[0][1])
    {
        Floors[0][0] = TempFloors[2][0];
        Floors[0][1] = TempFloors[2][1];
        Floors[0][2] = TempFloors[2][2];
        Floors[1][0] = TempFloors[0][0];
        Floors[1][1] = TempFloors[0][1];
        Floors[1][2] = TempFloors[0][2];
        Floors[2][0] = TempFloors[1][0];
        Floors[2][1] = TempFloors[1][1];
        Floors[2][2] = TempFloors[1][2];
    }
    else if (OverlappedFloor == Floors[0][2])
    {
        Floors[0][0] = TempFloors[2][0];
        Floors[0][1] = TempFloors[2][1];
        Floors[0][2] = TempFloors[2][2];
        Floors[1][0] = TempFloors[0][1];
        Floors[1][1] = TempFloors[0][2];
        Floors[1][2] = TempFloors[0][0];
        Floors[2][0] = TempFloors[1][1];
        Floors[2][1] = TempFloors[1][2];
        Floors[2][2] = TempFloors[1][0];
    }
    else if (OverlappedFloor == Floors[1][0])
    {
        Floors[0][0] = TempFloors[0][2];
        Floors[0][1] = TempFloors[0][0];
        Floors[0][2] = TempFloors[0][1];
        Floors[1][0] = TempFloors[1][2];
        Floors[1][1] = TempFloors[1][0];
        Floors[1][2] = TempFloors[1][1];
        Floors[2][0] = TempFloors[2][2];
        Floors[2][1] = TempFloors[2][0];
        Floors[2][2] = TempFloors[2][1];
    }
    else if (OverlappedFloor == Floors[1][2])
    {
        Floors[0][0] = TempFloors[0][1];
        Floors[0][1] = TempFloors[0][2];
        Floors[0][2] = TempFloors[0][0];
        Floors[1][0] = TempFloors[1][1];
        Floors[1][1] = TempFloors[1][2];
        Floors[1][2] = TempFloors[1][0];
        Floors[2][0] = TempFloors[2][1];
        Floors[2][1] = TempFloors[2][2];
        Floors[2][2] = TempFloors[2][0];
    }
    else if (OverlappedFloor == Floors[2][0])
    {
        Floors[0][0] = TempFloors[1][2];
        Floors[0][1] = TempFloors[1][0];
        Floors[0][2] = TempFloors[1][1];
        Floors[1][0] = TempFloors[2][2];
        Floors[1][1] = TempFloors[2][0];
        Floors[1][2] = TempFloors[2][1];
        Floors[2][0] = TempFloors[0][0];
        Floors[2][1] = TempFloors[0][1];
        Floors[2][2] = TempFloors[0][2];
    }
    else if (OverlappedFloor == Floors[2][1])
    {
        Floors[0][0] = TempFloors[1][0];
        Floors[0][1] = TempFloors[1][1];
        Floors[0][2] = TempFloors[1][2];
        Floors[1][0] = TempFloors[2][0];
        Floors[1][1] = TempFloors[2][1];
        Floors[1][2] = TempFloors[2][2];
        Floors[2][0] = TempFloors[0][0];
        Floors[2][1] = TempFloors[0][1];
        Floors[2][2] = TempFloors[0][2];
    }
    else if (OverlappedFloor == Floors[2][2])
    {
        Floors[0][0] = TempFloors[1][1];
        Floors[0][1] = TempFloors[1][2];
        Floors[0][2] = TempFloors[1][0];
        Floors[1][0] = TempFloors[2][1];
        Floors[1][1] = TempFloors[2][2];
        Floors[1][2] = TempFloors[2][0];
        Floors[2][0] = TempFloors[0][0];
        Floors[2][1] = TempFloors[0][1];
        Floors[2][2] = TempFloors[0][2];
    }

    RegenerateFloor(Floors[1][1]->GetActorLocation(), false);
}

void AMagicCharacterPlayerController::RegenerateFloor(const FVector& CenterFloorPos, bool bSpawn)
{
    float dx = 10000.f + CenterFloorPos.X;
    for (int32 i = 0; i < 3; i++)
    {
        float dy = -10000.f + CenterFloorPos.Y;
        for (int32 j = 0; j < 3; j++)
        {
            if (bSpawn)
            {
                // AFloor 액터 생성
                AFloor* NewFloor = GetWorld()->SpawnActor<AFloor>(FloorClass, FVector(dx, dy, 0.f), FRotator::ZeroRotator);
                NewFloor->SetFolderPath("/Map");

                // Floors 배열 요소에 할당
                Floors[i][j] = NewFloor;
            }
            else
            {
                Floors[i][j]->SetActorLocation(FVector(dx, dy, 0.f));
            }
            dy += 10000.f;
        }
        dx -= 10000.f;
    }
}
