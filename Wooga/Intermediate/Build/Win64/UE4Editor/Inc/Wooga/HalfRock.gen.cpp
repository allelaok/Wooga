// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/HalfRock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalfRock() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AHalfRock_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AHalfRock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
// End Cross Module References
	void AHalfRock::StaticRegisterNativesAHalfRock()
	{
	}
	UClass* Z_Construct_UClass_AHalfRock_NoRegister()
	{
		return AHalfRock::StaticClass();
	}
	struct Z_Construct_UClass_AHalfRock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHalfRock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHalfRock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HalfRock.h" },
		{ "ModuleRelativePath", "Public/HalfRock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHalfRock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfRock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHalfRock_Statics::ClassParams = {
		&AHalfRock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHalfRock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHalfRock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHalfRock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHalfRock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHalfRock, 1598878003);
	template<> WOOGA_API UClass* StaticClass<AHalfRock>()
	{
		return AHalfRock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHalfRock(Z_Construct_UClass_AHalfRock, &AHalfRock::StaticClass, TEXT("/Script/Wooga"), TEXT("AHalfRock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfRock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
