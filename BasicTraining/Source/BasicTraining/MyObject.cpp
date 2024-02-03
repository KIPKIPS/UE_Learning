// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"
//构造函数
UMyObject::UMyObject()
{
	MyFloat = 0.0f;
}

void UMyObject::MyFunction()
{
	//UE控制台输出
	UE_LOG(LogTemp,Log,TEXT("Hello Log"));
	UE_LOG(LogTemp,Warning,TEXT("Hello Warning"));
	UE_LOG(LogTemp,Error,TEXT("Hello Error"));
}

