// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
//Blueprintable 支持创建蓝图类
UCLASS(Blueprintable) 
class BASICTRAINING_API UMyObject : public UObject
{
	GENERATED_BODY()

public :
	UMyObject();
	//BlueprintReadWrite在蓝图中可以读写
	//Category可以在蓝图可视化中进行分类
	UPROPERTY(BlueprintReadWrite,Category="My Variables") 
	float MyFloat;

	//BlueprintCallable在蓝图中可以调用
	UFUNCTION(BlueprintCallable,Category="My Functions") 
	void MyFunction();
};
