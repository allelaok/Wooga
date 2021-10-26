// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HowToFireNextUIActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HowToFireNextUIActor() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HowToFireNextUIActor_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HowToFireNextUIActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void ASJ_HowToFireNextUIActor::StaticRegisterNativesASJ_HowToFireNextUIActor()
	{
	}
	UClass* Z_Construct_UClass_ASJ_HowToFireNextUIActor_NoRegister()
	{
		return ASJ_HowToFireNextUIActor::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics
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
	UObject* (*const Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_HowToFireNextUIActor.h" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireNextUIActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireNextUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireNextUIActor, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_plane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireNextUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_plane = { "plane", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireNextUIActor, plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_plane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_howToFireUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HowToFireNextUIActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_howToFireUI = { "howToFireUI", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HowToFireNextUIActor, howToFireUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_howToFireUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_howToFireUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_plane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::NewProp_howToFireUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_HowToFireNextUIActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::ClassParams = {
		&ASJ_HowToFireNextUIActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_HowToFireNextUIActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_HowToFireNextUIActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_HowToFireNextUIActor, 3953537324);
	template<> WOOGA_API UClass* StaticClass<ASJ_HowToFireNextUIActor>()
	{
		return ASJ_HowToFireNextUIActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_HowToFireNextUIActor(Z_Construct_UClass_ASJ_HowToFireNextUIActor, &ASJ_HowToFireNextUIActor::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_HowToFireNextUIActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_HowToFireNextUIActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
