// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICTRAINING_BasicTrainingGameModeBase_generated_h
#error "BasicTrainingGameModeBase.generated.h already included, missing '#pragma once' in BasicTrainingGameModeBase.h"
#endif
#define BASICTRAINING_BasicTrainingGameModeBase_generated_h

#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_RPC_WRAPPERS
#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicTrainingGameModeBase(); \
	friend struct Z_Construct_UClass_ABasicTrainingGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABasicTrainingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicTraining"), NO_API) \
	DECLARE_SERIALIZER(ABasicTrainingGameModeBase)


#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasicTrainingGameModeBase(); \
	friend struct Z_Construct_UClass_ABasicTrainingGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABasicTrainingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicTraining"), NO_API) \
	DECLARE_SERIALIZER(ABasicTrainingGameModeBase)


#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicTrainingGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicTrainingGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicTrainingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicTrainingGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicTrainingGameModeBase(ABasicTrainingGameModeBase&&); \
	NO_API ABasicTrainingGameModeBase(const ABasicTrainingGameModeBase&); \
public:


#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicTrainingGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicTrainingGameModeBase(ABasicTrainingGameModeBase&&); \
	NO_API ABasicTrainingGameModeBase(const ABasicTrainingGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicTrainingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicTrainingGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicTrainingGameModeBase)


#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_12_PROLOG
#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_RPC_WRAPPERS \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_INCLASS \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICTRAINING_API UClass* StaticClass<class ABasicTrainingGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicTraining_Source_BasicTraining_BasicTrainingGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
