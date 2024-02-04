// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMesh"));
	RootComponent = MyStaticMesh;
	MyStaticMesh->SetCollisionProfileName(TEXT("Pawn"));
	// MyStaticMesh->SetupAttachment(GetRootComponent()); //组件的附加
	//参数是资源的引用或者路径
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshAsset = TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'");
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset = TEXT("Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'");

	if (StaticMeshAsset.Succeeded() && MaterialAsset.Succeeded())
	{
		MyStaticMesh->SetStaticMesh(StaticMeshAsset.Object);
		MyStaticMesh->SetMaterial(0,MaterialAsset.Object);
		MyStaticMesh->SetWorldScale3D(FVector(0.5f));
	}
	//SpringArm
	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArm"));
	MySpringArm->SetupAttachment(GetStaticMeshComponent()); //组件的附加
	MySpringArm->SetRelativeRotation(FRotator(-45, 0, 0));
	MySpringArm->TargetArmLength = 400;
	MySpringArm->bEnableCameraLag = true;
	MySpringArm->CameraLagSpeed = 3;

	//相机
	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MyCamera->SetupAttachment(GetSpringArmComponent()); //组件的附加
	MyCamera->SetRelativeLocation(FVector(-300, 0, 300));
	MyCamera->SetRelativeRotation(FRotator(-45, 0, 0));

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	bUseControllerRotationYaw = true;
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

void AMyPawn::LookUp(float Value)
{
	MouseInput.Y = FMath::Clamp(Value, -1.f, 1.f);
}

void AMyPawn::LookRight(float Value)
{
	MouseInput.X = FMath::Clamp(Value, -1.f, 1.f);
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
	AddActorLocalOffset(Velocity * DeltaTime, true);
	AddControllerYawInput(MouseInput.X);

	//xyz 在虚幻中是row pitch yaw
	FRotator NewSpringArmRotation = MySpringArm->GetComponentRotation();
	NewSpringArmRotation.Pitch = FMath::Clamp(NewSpringArmRotation.Pitch += MouseInput.Y,-80.f,0.f);
	// NewSpringArmRotation.Yaw =  NewSpringArmRotation.Yaw += MouseInput.X;
	MySpringArm->SetWorldRotation(NewSpringArmRotation);
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyPawn::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyPawn::MoveRight);
	
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMyPawn::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AMyPawn::LookRight);
}
