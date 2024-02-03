// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicTraining/MyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}
// Cross Module References
	BASICTRAINING_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
	BASICTRAINING_API UClass* Z_Construct_UClass_UMyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BasicTraining();
// End Cross Module References
	DEFINE_FUNCTION(UMyObject::execMyFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyFunction();
		P_NATIVE_END;
	}
	void UMyObject::StaticRegisterNativesUMyObject()
	{
		UClass* Class = UMyObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyFunction", &UMyObject::execMyFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyObject_MyFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyObject_MyFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "Comment", "//BlueprintCallable\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xb0\x83\xe7\x94\xa8\n" },
		{ "ModuleRelativePath", "MyObject.h" },
		{ "ToolTip", "BlueprintCallable\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xb0\x83\xe7\x94\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyObject_MyFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyObject, nullptr, "MyFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyObject_MyFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyObject_MyFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyObject_MyFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyObject_MyFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyObject_NoRegister()
	{
		return UMyObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicTraining,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyObject_MyFunction, "MyFunction" }, // 1325894322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n *///Blueprintable \xe6\x94\xaf\xe6\x8c\x81\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\n" },
		{ "IncludePath", "MyObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyObject.h" },
		{ "ToolTip", "//Blueprintable \xe6\x94\xaf\xe6\x8c\x81\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "My Variables" },
		{ "Comment", "//BlueprintReadWrite\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xaf\xbb\xe5\x86\x99\n//Category\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xa7\x86\xe5\x8c\x96\xe4\xb8\xad\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x88\x86\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "MyObject.h" },
		{ "ToolTip", "BlueprintReadWrite\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xaf\xbb\xe5\x86\x99\nCategory\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xa7\x86\xe5\x8c\x96\xe4\xb8\xad\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x88\x86\xe7\xb1\xbb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyObject_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyObject, MyFloat), METADATA_PARAMS(Z_Construct_UClass_UMyObject_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::NewProp_MyFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyObject_Statics::NewProp_MyFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
		&UMyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyObject, 1244763273);
	template<> BASICTRAINING_API UClass* StaticClass<UMyObject>()
	{
		return UMyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyObject(Z_Construct_UClass_UMyObject, &UMyObject::StaticClass, TEXT("/Script/BasicTraining"), TEXT("UMyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
