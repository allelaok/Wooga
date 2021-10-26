// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HowToFireUIonActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HowToFireUIonActor() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToFireUIonActor_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToFireUIonActor();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Wooga();
// End Cross Module References
	void USJ_HowToFireUIonActor::StaticRegisterNativesUSJ_HowToFireUIonActor()
	{
	}
	UClass* Z_Construct_UClass_USJ_HowToFireUIonActor_NoRegister()
	{
		return USJ_HowToFireUIonActor::StaticClass();
	}
	struct Z_Construct_UClass_USJ_HowToFireUIonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SJ_HowToFireUIonActor.h" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUIonActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USJ_HowToFireUIonActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::ClassParams = {
		&USJ_HowToFireUIonActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USJ_HowToFireUIonActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USJ_HowToFireUIonActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USJ_HowToFireUIonActor, 2115564784);
	template<> WOOGA_API UClass* StaticClass<USJ_HowToFireUIonActor>()
	{
		return USJ_HowToFireUIonActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USJ_HowToFireUIonActor(Z_Construct_UClass_USJ_HowToFireUIonActor, &USJ_HowToFireUIonActor::StaticClass, TEXT("/Script/Wooga"), TEXT("USJ_HowToFireUIonActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USJ_HowToFireUIonActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
