// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HowToFireUIActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HowToFireUIActor() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HowToFireUIActor_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HowToFireUIActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ASJ_HowToFireUIActor::StaticRegisterNativesASJ_HowToFireUIActor()
	{
	}
	UClass* Z_Construct_UClass_ASJ_HowToFireUIActor_NoRegister()
	{
		return ASJ_HowToFireUIActor::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_HowToFireUIActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_howToFireUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_howToFireUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_HowToFireUIActor.h" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUIActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireUIActor, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_plane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_plane = { "plane", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireUIActor, plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_plane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_howToFireUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_howToFireUI = { "howToFireUI", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireUIActor, howToFireUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_howToFireUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_howToFireUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_plane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::NewProp_howToFireUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_HowToFireUIActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::ClassParams = {
		&ASJ_HowToFireUIActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_HowToFireUIActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_HowToFireUIActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_HowToFireUIActor, 3271208846);
	template<> WOOGA_API UClass* StaticClass<ASJ_HowToFireUIActor>()
	{
		return ASJ_HowToFireUIActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_HowToFireUIActor(Z_Construct_UClass_ASJ_HowToFireUIActor, &ASJ_HowToFireUIActor::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_HowToFireUIActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_HowToFireUIActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
