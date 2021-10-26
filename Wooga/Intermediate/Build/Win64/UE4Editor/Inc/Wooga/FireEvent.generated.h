// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WOOGA_FireEvent_generated_h
#error "FireEvent.generated.h already included, missing '#pragma once' in FireEvent.h"
#endif
#define WOOGA_FireEvent_generated_h

#define Wooga_Source_Wooga_Public_FireEvent_h_12_SPARSE_DATA
#define Wooga_Source_Wooga_Public_FireEvent_h_12_RPC_WRAPPERS
#define Wooga_Source_Wooga_Public_FireEvent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Wooga_Source_Wooga_Public_FireEvent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireEvent(); \
	friend struct Z_Construct_UClass_AFireEvent_Statics; \
public: \
	DECLARE_CLASS(AFireEvent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(AFireEvent)


#define Wooga_Source_Wooga_Public_FireEvent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFireEvent(); \
	friend struct Z_Construct_UClass_AFireEvent_Statics; \
public: \
	DECLARE_CLASS(AFireEvent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(AFireEvent)


#define Wooga_Source_Wooga_Public_FireEvent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireEvent(AFireEvent&&); \
	NO_API AFireEvent(const AFireEvent&); \
public:


#define Wooga_Source_Wooga_Public_FireEvent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireEvent(AFireEvent&&); \
	NO_API AFireEvent(const AFireEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireEvent)


#define Wooga_Source_Wooga_Public_FireEvent_h_12_PRIVATE_PROPERTY_OFFSET
#define Wooga_Source_Wooga_Public_FireEvent_h_9_PROLOG
#define Wooga_Source_Wooga_Public_FireEvent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_FireEvent_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_FireEvent_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_FireEvent_h_12_RPC_WRAPPERS \
	Wooga_Source_Wooga_Public_FireEvent_h_12_INCLASS \
	Wooga_Source_Wooga_Public_FireEvent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wooga_Source_Wooga_Public_FireEvent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_FireEvent_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_FireEvent_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_FireEvent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_FireEvent_h_12_INCLASS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_FireEvent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOOGA_API UClass* StaticClass<class AFireEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wooga_Source_Wooga_Public_FireEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
