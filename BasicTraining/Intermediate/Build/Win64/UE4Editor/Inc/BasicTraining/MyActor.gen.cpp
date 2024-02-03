// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicTraining/Actors/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	BASICTRAINING_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	BASICTRAINING_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicTraining();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMyActor::StaticRegisterNativesAMyActor()
	{
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlacedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGotoInitLocation_MetaData[];
#endif
		static void NewProp_bGotoInitLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGotoInitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMoveLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayMoveLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccelChange_MetaData[];
#endif
		static void NewProp_bAccelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicTraining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MyActor.h" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "My Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation_MetaData[] = {
		{ "Category", "My Actor Properties | Vecetor" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "-5.000000" },
		{ "Comment", "//\xe5\x8f\xaa\xe5\x9c\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe4\xb8\x8a\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbf\xae\xe6\x94\xb9 \xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xb8\x8d\xe8\x83\xbd\xe4\xbf\xae\xe6\x94\xb9\n//clamp \xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x80\xbc\xe7\x9a\x84\xe9\x99\x90\xe5\xae\x9a\xe5\xa4\xa7\xe5\xb0\x8f ui\xe6\x8e\xa7\xe5\x88\xb6\xe6\x8b\x96\xe6\x8b\xbd\xe4\xbf\xae\xe6\x94\xb9\xe5\x80\xbc\xe7\x9a\x84\xe9\x99\x90\xe5\xae\x9a\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
		{ "ToolTip", "\xe5\x8f\xaa\xe5\x9c\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe4\xb8\x8a\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbf\xae\xe6\x94\xb9 \xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xb8\x8d\xe8\x83\xbd\xe4\xbf\xae\xe6\x94\xb9\nclamp \xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\x80\xbc\xe7\x9a\x84\xe9\x99\x90\xe5\xae\x9a\xe5\xa4\xa7\xe5\xb0\x8f ui\xe6\x8e\xa7\xe5\x88\xb6\xe6\x8b\x96\xe6\x8b\xbd\xe4\xbf\xae\xe6\x94\xb9\xe5\x80\xbc\xe7\x9a\x84\xe9\x99\x90\xe5\xae\x9a\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "UIMax", "5.000000" },
		{ "UIMin", "-5.000000" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation = { "InitLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, InitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_PlacedLocation_MetaData[] = {
		{ "Category", "My Actor Properties | Vecetor" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_PlacedLocation = { "PlacedLocation", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, PlacedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_PlacedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_PlacedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation_MetaData[] = {
		{ "Category", "My Actor Properties | Bool" },
		{ "Comment", "//Unreal\xe9\x9c\x80\xe8\xa6\x81""bool\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8f\x98\xe9\x87\x8f\xe5\xbf\x85\xe9\xa1\xbb\xe4\xbb\xa5""b\xe5\xbc\x80\xe5\xa4\xb4 EditDefaultsOnly\xe5\x8f\xaa\xe8\x83\xbd\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe6\xa8\xa1\xe6\x9d\xbf\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbc\x96\xe8\xbe\x91\n" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
		{ "ToolTip", "Unreal\xe9\x9c\x80\xe8\xa6\x81""bool\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8f\x98\xe9\x87\x8f\xe5\xbf\x85\xe9\xa1\xbb\xe4\xbb\xa5""b\xe5\xbc\x80\xe5\xa4\xb4 EditDefaultsOnly\xe5\x8f\xaa\xe8\x83\xbd\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe6\xa8\xa1\xe6\x9d\xbf\xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbc\x96\xe8\xbe\x91" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->bGotoInitLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation = { "bGotoInitLocation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "Category", "My Actor Properties | Bool" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->bShouldMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_DelayMoveLocation_MetaData[] = {
		{ "Category", "My Actor Properties | Vecetor" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_DelayMoveLocation = { "DelayMoveLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, DelayMoveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_DelayMoveLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_DelayMoveLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_InitForce_MetaData[] = {
		{ "Category", "My Actor Properties | Physics" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_InitForce = { "InitForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, InitForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_InitForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_InitForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_InitTorque_MetaData[] = {
		{ "Category", "My Actor Properties | Physics" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_InitTorque = { "InitTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, InitTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_InitTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_InitTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange_MetaData[] = {
		{ "Category", "My Actor Properties | Physics" },
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->bAccelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_PlacedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bGotoInitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bShouldMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_DelayMoveLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_InitForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_InitTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_bAccelChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 2671615822);
	template<> BASICTRAINING_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/BasicTraining"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
