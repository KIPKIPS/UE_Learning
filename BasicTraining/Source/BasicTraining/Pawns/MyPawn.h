// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"


UCLASS()
class BASICTRAINING_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	UPROPERTY(VisibleAnywhere, Category="My Pawn Component");
	class UStaticMeshComponent* MyStaticMesh;

	UPROPERTY(VisibleAnywhere, Category="My Pawn Component");
	class UCameraComponent* MyCamera;

	UPROPERTY(EditAnywhere, Category="My Pawn Movement");
	float MaxSpeed;
	// UPROPERTY(EditAnywhere, Category="My Pawn Movement");
	// float MaxSpeed;
private:
	void MoveForward(float Value);
	void MoveRight(float Value);
	FVector Velocity;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
