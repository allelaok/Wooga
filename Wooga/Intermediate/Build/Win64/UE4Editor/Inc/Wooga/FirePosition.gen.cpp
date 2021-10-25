// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/FirePosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirePosition() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AFirePosition_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFirePosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WOOGA_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFireRock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AFirePosition::StaticRegisterNativesAFirePosition()
	{
	}
	UClass* Z_Construct_UClass_AFirePosition_NoRegister()
	{
		return AFirePosition::StaticClass();
	}
	struct Z_Construct_UClass_AFirePosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireRock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireRock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bisFire_MetaData[];
#endif
		static void NewProp_bisFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bisFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emberFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emberFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirePosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirePosition.h" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, player), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock = { "fireRock", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, fireRock), Z_Construct_UClass_AFireRock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	void Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_SetBit(void* Obj)
	{
		((AFirePosition*)Obj)->bisFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire = { "bisFire", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirePosition), &Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory = { "emberFactory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, emberFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_SoundBase_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_SoundBase = { "SoundBase", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, SoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_SoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_SoundBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_location_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_SoundBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirePosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirePosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirePosition_Statics::ClassParams = {
		&AFirePosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirePosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirePosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirePosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirePosition, 3110036818);
	template<> WOOGA_API UClass* StaticClass<AFirePosition>()
	{
		return AFirePosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirePosition(Z_Construct_UClass_AFirePosition, &AFirePosition::StaticClass, TEXT("/Script/Wooga"), TEXT("AFirePosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirePosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
