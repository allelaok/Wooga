// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef WOOGA_FirePosition_generated_h
#error "FirePosition.generated.h already included, missing '#pragma once' in FirePosition.h"
#endif
#define WOOGA_FirePosition_generated_h

#define Wooga_Source_Wooga_Public_FirePosition_h_12_SPARSE_DATA
#define Wooga_Source_Wooga_Public_FirePosition_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollisionEnter);


#define Wooga_Source_Wooga_Public_FirePosition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollisionEnter);


#define Wooga_Source_Wooga_Public_FirePosition_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirePosition(); \
	friend struct Z_Construct_UClass_AFirePosition_Statics; \
public: \
	DECLARE_CLASS(AFirePosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(AFirePosition)


#define Wooga_Source_Wooga_Public_FirePosition_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirePosition(); \
	friend struct Z_Construct_UClass_AFirePosition_Statics; \
public: \
	DECLARE_CLASS(AFirePosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wooga"), NO_API) \
	DECLARE_SERIALIZER(AFirePosition)


#define Wooga_Source_Wooga_Public_FirePosition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirePosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirePosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirePosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirePosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirePosition(AFirePosition&&); \
	NO_API AFirePosition(const AFirePosition&); \
public:


#define Wooga_Source_Wooga_Public_FirePosition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirePosition(AFirePosition&&); \
	NO_API AFirePosition(const AFirePosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirePosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirePosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirePosition)


#define Wooga_Source_Wooga_Public_FirePosition_h_12_PRIVATE_PROPERTY_OFFSET
#define Wooga_Source_Wooga_Public_FirePosition_h_9_PROLOG
#define Wooga_Source_Wooga_Public_FirePosition_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_FirePosition_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_FirePosition_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_FirePosition_h_12_RPC_WRAPPERS \
	Wooga_Source_Wooga_Public_FirePosition_h_12_INCLASS \
	Wooga_Source_Wooga_Public_FirePosition_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wooga_Source_Wooga_Public_FirePosition_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wooga_Source_Wooga_Public_FirePosition_h_12_PRIVATE_PROPERTY_OFFSET \
	Wooga_Source_Wooga_Public_FirePosition_h_12_SPARSE_DATA \
	Wooga_Source_Wooga_Public_FirePosition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_FirePosition_h_12_INCLASS_NO_PURE_DECLS \
	Wooga_Source_Wooga_Public_FirePosition_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOOGA_API UClass* StaticClass<class AFirePosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wooga_Source_Wooga_Public_FirePosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
