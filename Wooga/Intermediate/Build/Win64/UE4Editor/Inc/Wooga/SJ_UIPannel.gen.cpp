// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_UIPannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_UIPannel() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_UIPannel_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_UIPannel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ASJ_UIPannel::StaticRegisterNativesASJ_UIPannel()
	{
	}
	UClass* Z_Construct_UClass_ASJ_UIPannel_NoRegister()
	{
		return ASJ_UIPannel::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_UIPannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_planeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_planeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settingUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_settingUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_UIPannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_UIPannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_UIPannel.h" },
		{ "ModuleRelativePath", "Public/SJ_UIPannel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_UIPannel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_UIPannel, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_planeMesh_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_UIPannel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_planeMesh = { "planeMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_UIPannel, planeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_planeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_planeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_settingUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_UIPannel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_settingUI = { "settingUI", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_UIPannel, settingUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_settingUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_settingUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_UIPannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_planeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_UIPannel_Statics::NewProp_settingUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_UIPannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_UIPannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_UIPannel_Statics::ClassParams = {
		&ASJ_UIPannel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_UIPannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_UIPannel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_UIPannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_UIPannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_UIPannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_UIPannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_UIPannel, 1374253650);
	template<> WOOGA_API UClass* StaticClass<ASJ_UIPannel>()
	{
		return ASJ_UIPannel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_UIPannel(Z_Construct_UClass_ASJ_UIPannel, &ASJ_UIPannel::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_UIPannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_UIPannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
