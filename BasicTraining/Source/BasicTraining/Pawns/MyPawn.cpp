// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	MyStaticMesh->SetupAttachment(GetRootComponent()); //组件的附加

	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MyCamera->SetupAttachment(GetRootComponent()); //组件的附加

	MyCamera->SetRelativeLocation(FVector(-300, 0, 300));
	MyCamera->SetRelativeRotation(FRotator(-45, 0, 0));

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	MaxSpeed = 100;
	Velocity = FVector::ZeroVector;
}


void AMyPawn::MoveForward(float Value)
{
	Velocity.X = MaxSpeed * FMath::Clamp(Value, -1.f, 1.f);
}

void AMyPawn::MoveRight(float Value)
{
	Velocity.Y = MaxSpeed * FMath::Clamp(Value, -1.f, 1.f);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(Velocity * DeltaTime,true);
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyPawn::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyPawn::MoveRight);
}
