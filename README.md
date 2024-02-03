# 学习ue引擎

## 1.光源

![光源](/img/light_1.png "光源的类型")

> 1.静态光源 烘焙好之后不能进行任何改变

> 2.固定光源 烘焙好之后可以改变亮度颜色 但是不能移动

> 3.可移动光源 任意移动 颜色 亮度

## 2.蓝图和c++

* 蓝图建立在c++上 蓝图和c++可以进行协作

* c++编写逻辑 完成引擎未封装的功能和自定义的玩法逻辑

* 蓝图设计人员设计游戏紫苑 功能测试 快速迭代以及调用编写好的c++代码

#### 2.1 蓝图

* 蓝图可视化脚本是一种可视化编程

* 蓝图是一种需要编译的面向对象的可视化编程语言

* 蓝图完全集成在虚幻中

* 通过节点和连线进行工作

#### 2.2 蓝图系统

* 蓝图类是游戏内容的容器

* 可以包含组件,脚本,也可以仅包含数据

## 3.虚幻和c++

### 3.1虚幻引擎c++类的层级结构(Hierarchy)

#### 3.11

![c++类的层级结构](/img/unreal_class_1.png "Hierarchy")

Object是所有类的基类,用于存储数据,在场景中不可见 Actor类可以在场景中看到 Pawn充当控制器的桥接 玩家通过控制器来控制Pawn Character派生自Pawn,适用于人形角色的控制器,有虚幻封装较好的一系列功能,跑跳游泳等各种交互方式

#### 3.12

![c++类的层级结构](/img/unreal_class_2.png "Hierarchy")

UStaticMesh UTexture等等U开头的类派生自Object

AHUD AActor等A开头的派生自Actor类

#### 3.12

![c++类的层级结构](/img/h1.png "Hierarchy")

* Package包含World

* World包含Level

* Level包含各种Actors

* Actor包含各种Components

## 4.虚幻的反射与垃圾回收系统

### 4.1使用宏参与虚幻的反射与垃圾回收系统

反射是程序在运行时检测自身的特性

![虚幻的反射与垃圾回收系统](/img/gc1.png "建立引用")

当定义一个指针指向Actor对象时,有引用存在,不会对Actor进行汇手

![虚幻的反射与垃圾回收系统](/img/gc2.png "断开引用")

当引用断开 不再使用Actor时,Actor将会被GC机制进行回收

![虚幻的反射与垃圾回收系统](/img/gc3.png "实现原理")

在需要参与虚幻的反射与垃圾回收系统的**类,变量,函数上添加一个宏SPECIAL_MACRO**,编译阶段会有UE提供的UHT识别到,生成一段代码来进行反射和垃圾回收

![虚幻的反射与垃圾回收系统](/img/gc4.png "使用案例")

使用UCLASS宏标记AMyActor标明类,用UPROPERTY标明变量,使用UFUNCTION标明函数

> _需要注意的是,所有的#include都要写在 **#include "MyActor.generated.h"** 之前_

## 4.虚幻c++的一些宏定义

### 4.1创建和使用继承自UObject的类

MyObject.h头文件

```cpp
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

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
```

MyObject.cpp

```cpp
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

```

之后就可以在蓝图中进行方法的调用

![蓝图类的使用](/img/bp_1.png "蓝图基础使用")

运行结果

![蓝图类的使用](/img/bp_2.png "运行结果")

### 4.2蓝图类的删除

> 删除改目录下的.h和.cpp文件(工程根目录/Source/工程名称/)

![蓝图类的删除](/img/bp_3.png "蓝图类的删除1")

> 二进制文件的删除(工程根目录/Binaries/) 整个文件夹删除

![二进制文件的删除](/img/bp_4.png "二进制文件的删除")

> 项目重新生成(工程根目录/项目名称.uproject) 右键 重新生成

![重新生成](/img/bp_5.png "重新生成")

## 5.Actor类与相关API

一些约定俗成

* > 派生自Actor的类带A前缀 AController
* > 派生自Object的类带有U前缀 如UComponent
* > Enums的前缀是E 如EFortificationType
* > Interface的前缀为I 如IAbilitySystemInterface
* > Template的前缀是T 如TArray
* > 派生自SWidget的类(Slate UI)带有前缀S 如SButton
* > 其他前缀为F 如FVector

Shift + F1将鼠标从视口中进行释放