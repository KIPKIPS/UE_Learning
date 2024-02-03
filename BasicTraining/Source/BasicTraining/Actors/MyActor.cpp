// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	InitLocation = FVector(0.0f);
	PlacedLocation = FVector(0.0f);
	DelayMoveLocation = FVector(1.0f,0,0);
	bGotoInitLocation = false;
	bShouldMove = false;
	bAccelChange = false;
	
	InitTorque = FVector(0.0f);
	InitForce = FVector(0.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	PlacedLocation = GetActorLocation();
	//设置位置到 0,0,0
	if (bGotoInitLocation)
	{
		SetActorLocation(InitLocation);
	}
	// MyStaticMesh->AddForce(InitForce,"NAME_None",bAccelChange);
	// MyStaticMesh->AddTorque(InitTorque,"NAME_None",bAccelChange);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	//每帧进行调用
	Super::Tick(DeltaTime);
	if (bShouldMove)
	{
		// PlacedLocation += DelayMoveLocation * DeltaTime;
		FHitResult hitResult;
		AddActorLocalOffset(DelayMoveLocation,true,&hitResult);
		UE_LOG(LogTemp,Warning,TEXT("X:%f,Y:%f,Z:%f"),hitResult.Location.X,hitResult.Location.Y,hitResult.Location.Z);
	}
}

