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
		{ "ModuleRelativePath", "Actors/MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation = { "InitLocation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, InitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_InitLocation,
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
	IMPLEMENT_CLASS(AMyActor, 1083334328);
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
