// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICTRAINING_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define BASICTRAINING_MyObject_generated_h

#define BasicTraining_Source_BasicTraining_MyObject_h_16_SPARSE_DATA
#define BasicTraining_Source_BasicTraining_MyObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define BasicTraining_Source_BasicTraining_MyObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define BasicTraining_Source_BasicTraining_MyObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicTraining"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define BasicTraining_Source_BasicTraining_MyObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicTraining"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define BasicTraining_Source_BasicTraining_MyObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public:


#define BasicTraining_Source_BasicTraining_MyObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyObject)


#define BasicTraining_Source_BasicTraining_MyObject_h_16_PRIVATE_PROPERTY_OFFSET
#define BasicTraining_Source_BasicTraining_MyObject_h_13_PROLOG
#define BasicTraining_Source_BasicTraining_MyObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicTraining_Source_BasicTraining_MyObject_h_16_PRIVATE_PROPERTY_OFFSET \
	BasicTraining_Source_BasicTraining_MyObject_h_16_SPARSE_DATA \
	BasicTraining_Source_BasicTraining_MyObject_h_16_RPC_WRAPPERS \
	BasicTraining_Source_BasicTraining_MyObject_h_16_INCLASS \
	BasicTraining_Source_BasicTraining_MyObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicTraining_Source_BasicTraining_MyObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicTraining_Source_BasicTraining_MyObject_h_16_PRIVATE_PROPERTY_OFFSET \
	BasicTraining_Source_BasicTraining_MyObject_h_16_SPARSE_DATA \
	BasicTraining_Source_BasicTraining_MyObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicTraining_Source_BasicTraining_MyObject_h_16_INCLASS_NO_PURE_DECLS \
	BasicTraining_Source_BasicTraining_MyObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICTRAINING_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicTraining_Source_BasicTraining_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
