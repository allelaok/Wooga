// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HowToFireUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HowToFireUI() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToFireUI_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_USJ_HowToFireUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void USJ_HowToFireUI::StaticRegisterNativesUSJ_HowToFireUI()
	{
	}
	UClass* Z_Construct_UClass_USJ_HowToFireUI_NoRegister()
	{
		return USJ_HowToFireUI::StaticClass();
	}
	struct Z_Construct_UClass_USJ_HowToFireUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USJ_HowToFireUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USJ_HowToFireUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SJ_HowToFireUI.h" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_OpenUI_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_OpenUI = { "OpenUI", nullptr, (EPropertyFlags)0x0010000000012005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USJ_HowToFireUI, OpenUI), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_OpenUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_OpenUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_CloseUI_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_CloseUI = { "CloseUI", nullptr, (EPropertyFlags)0x0010000000012005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USJ_HowToFireUI, CloseUI), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_CloseUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_CloseUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USJ_HowToFireUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_OpenUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USJ_HowToFireUI_Statics::NewProp_CloseUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USJ_HowToFireUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USJ_HowToFireUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USJ_HowToFireUI_Statics::ClassParams = {
		&USJ_HowToFireUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USJ_HowToFireUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToFireUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USJ_HowToFireUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USJ_HowToFireUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USJ_HowToFireUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USJ_HowToFireUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USJ_HowToFireUI, 394008516);
	template<> WOOGA_API UClass* StaticClass<USJ_HowToFireUI>()
	{
		return USJ_HowToFireUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USJ_HowToFireUI(Z_Construct_UClass_USJ_HowToFireUI, &USJ_HowToFireUI::StaticClass, TEXT("/Script/Wooga"), TEXT("USJ_HowToFireUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USJ_HowToFireUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
