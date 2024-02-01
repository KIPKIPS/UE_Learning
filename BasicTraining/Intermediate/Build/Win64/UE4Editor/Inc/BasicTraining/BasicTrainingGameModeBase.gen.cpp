// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicTraining/BasicTrainingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicTrainingGameModeBase() {}
// Cross Module References
	BASICTRAINING_API UClass* Z_Construct_UClass_ABasicTrainingGameModeBase_NoRegister();
	BASICTRAINING_API UClass* Z_Construct_UClass_ABasicTrainingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicTraining();
// End Cross Module References
	void ABasicTrainingGameModeBase::StaticRegisterNativesABasicTrainingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABasicTrainingGameModeBase_NoRegister()
	{
		return ABasicTrainingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABasicTrainingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicTraining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicTrainingGameModeBase.h" },
		{ "ModuleRelativePath", "BasicTrainingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicTrainingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::ClassParams = {
		&ABasicTrainingGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicTrainingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicTrainingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicTrainingGameModeBase, 4050159360);
	template<> BASICTRAINING_API UClass* StaticClass<ABasicTrainingGameModeBase>()
	{
		return ABasicTrainingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicTrainingGameModeBase(Z_Construct_UClass_ABasicTrainingGameModeBase, &ABasicTrainingGameModeBase::StaticClass, TEXT("/Script/BasicTraining"), TEXT("ABasicTrainingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicTrainingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
