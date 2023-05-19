// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MagicCharacterPlayerController.generated.h"

class AFloor;

UCLASS()
class MAGICSURVIAL_API AMagicCharacterPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AFloor> FloorClass;

	AFloor* Floors[3][3];
	
public:
	AFloor* GetFloor(int32 dx, int32 dy);
	
	void InfiniteMap(AFloor* OverlappedFloor);

private:
	void RegenerateFloor(const FVector& CenterFloorPos, bool bSpawn);
};
