// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class BASICTRAINING_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(VisibleAnywhere, Category="My Actor Component");
	UStaticMeshComponent* MyStaticMesh;

	//只在实例上可以修改 在蓝图中不能修改
	UPROPERTY(EditInstanceOnly, Category="My Actor Properties | Vecetor",
		//clamp 控制输入的值的限定大小 ui控制拖拽修改值的限定大小
		meta=(ClampMin=-5.0f, ClampMax = 5.0f, UIMin = -5.0f, UIMax = 5.0f))
	FVector InitLocation;

	UPROPERTY(VisibleInstanceOnly, Category="My Actor Properties | Vecetor")
	FVector PlacedLocation;

	//Unreal需要bool类型变量必须以b开头 EditDefaultsOnly只能在蓝图模板进行编辑
	UPROPERTY(EditDefaultsOnly, Category="My Actor Properties | Bool")
	bool bGotoInitLocation;

	UPROPERTY(EditAnywhere, Category="My Actor Properties | Bool")
	bool bShouldMove;

	UPROPERTY(EditAnywhere, Category="My Actor Properties | Vecetor")
	FVector DelayMoveLocation;
	
	UPROPERTY(EditAnywhere, Category="My Actor Properties | Physics")
	FVector InitForce;

	UPROPERTY(EditAnywhere, Category="My Actor Properties | Physics")
	FVector InitTorque;
	UPROPERTY(EditInstanceOnly, Category="My Actor Properties | Physics")
	bool bAccelChange;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
