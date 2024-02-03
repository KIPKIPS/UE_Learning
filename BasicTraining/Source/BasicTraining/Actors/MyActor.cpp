// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	InitLocation = FVector(0.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	//设置位置到 0,0,0
	SetActorLocation(InitLocation);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	//每帧进行调用
	Super::Tick(DeltaTime);
}

