// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HowToCollectUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HowToCollectUI() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToCollectUI_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToCollectUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Wooga();
// End Cross Module References
	void USJ_HowToCollectUI::StaticRegisterNativesUSJ_HowToCollectUI()
	{
	}
	UClass* Z_Construct_UClass_USJ_HowToCollectUI_NoRegister()
	{
		return USJ_HowToCollectUI::StaticClass();
	}
	struct Z_Construct_UClass_USJ_HowToCollectUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USJ_HowToCollectUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USJ_HowToCollectUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SJ_HowToCollectUI.h" },
		{ "ModuleRelativePath", "Public/SJ_HowToCollectUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USJ_HowToCollectUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USJ_HowToCollectUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USJ_HowToCollectUI_Statics::ClassParams = {
		&USJ_HowToCollectUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USJ_HowToCollectUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToCollectUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USJ_HowToCollectUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USJ_HowToCollectUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USJ_HowToCollectUI, 3793014140);
	template<> WOOGA_API UClass* StaticClass<USJ_HowToCollectUI>()
	{
		return USJ_HowToCollectUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USJ_HowToCollectUI(Z_Construct_UClass_USJ_HowToCollectUI, &USJ_HowToCollectUI::StaticClass, TEXT("/Script/Wooga"), TEXT("USJ_HowToCollectUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USJ_HowToCollectUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
