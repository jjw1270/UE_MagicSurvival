// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"
#include "Components/BoxComponent.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor Mesh"));
	RootComponent = FloorMesh;

	FloorMesh->SetWorldScale3D(Scale);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetupAttachment(FloorMesh);
	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 1.f));
}

// void AFloor::Copy(const AFloor& Other)
// {
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
// 	PrimaryActorTick.bCanEverTick = Other.PrimaryActorTick.bCanEverTick;

// 	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor Mesh"));
// 	RootComponent = FloorMesh;

// 	FloorMesh->SetStaticMesh(Other.FloorMesh->GetStaticMesh());
// 	FloorMesh->SetWorldTransform(Other.FloorMesh->GetComponentTransform());
// 	FloorMesh->SetWorldScale3D(Other.Scale);

// 	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
// 	BoxCollision->SetupAttachment(FloorMesh);
// 	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 1.f));
// }
