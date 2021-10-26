// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_SpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_SpawnPoint() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_SpawnPoint_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_SpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
// End Cross Module References
	void ASJ_SpawnPoint::StaticRegisterNativesASJ_SpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_ASJ_SpawnPoint_NoRegister()
	{
		return ASJ_SpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_SpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_SpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_SpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_SpawnPoint.h" },
		{ "ModuleRelativePath", "Public/SJ_SpawnPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_SpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_SpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_SpawnPoint_Statics::ClassParams = {
		&ASJ_SpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_SpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_SpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_SpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_SpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_SpawnPoint, 3852817876);
	template<> WOOGA_API UClass* StaticClass<ASJ_SpawnPoint>()
	{
		return ASJ_SpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_SpawnPoint(Z_Construct_UClass_ASJ_SpawnPoint, &ASJ_SpawnPoint::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_SpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_SpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
