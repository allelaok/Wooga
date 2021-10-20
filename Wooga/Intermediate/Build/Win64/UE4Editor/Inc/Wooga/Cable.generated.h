// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WOOGA_Cable_generated_h
#error "Cable.generated.h already included, missing '#pragma once' in Cable.h"
#endif
#define WOOGA_Cable_generated_h

#define Wooga_Source_Wooga_Public_Cable_h_12_SPARSE_DATA
#define Wooga_Source_Wooga_Public_Cable_h_12_RPC_WRAPPERS
#define Wooga_Source_Wooga_Public_Cable_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Wooga_Source_Wooga_Public_Cable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACable(); \
	friend struct Z_Construct_UClass_ACable_Statics; \
public: \
	DECLARE_CLASS(ACable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(ACable)


#define Wooga_Source_Wooga_Public_Cable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACable(); \
	friend struct Z_Construct_UClass_ACable_Statics; \
public: \
	DECLARE_CLASS(ACable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(ACable)


#define Wooga_Source_Wooga_Public_Cable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACable(ACable&&); \
	NO_API ACable(const ACable&); \
public:


#define Wooga_Source_Wooga_Public_Cable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACable(ACable&&); \
	NO_API ACable(const ACable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACable)


#define Wooga_Source_Wooga_Public_Cable_h_12_PRIVATE_PROPERTY_OFFSET
#define Wooga_Source_Wooga_Public_Cable_h_9_PROLOG
#define Wooga_Source_Wooga_Public_Cable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_Cable_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_Cable_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_Cable_h_12_RPC_WRAPPERS \
	Wooga_Source_Wooga_Public_Cable_h_12_INCLASS \
	Wooga_Source_Wooga_Public_Cable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wooga_Source_Wooga_Public_Cable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_Cable_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_Cable_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_Cable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_Cable_h_12_INCLASS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_Cable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOOGA_API UClass* StaticClass<class ACable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wooga_Source_Wooga_Public_Cable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
