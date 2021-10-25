// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_KnoweldgePoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_KnoweldgePoint() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_KnoweldgePoint_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_KnoweldgePoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASJ_KnoweldgePoint::StaticRegisterNativesASJ_KnoweldgePoint()
	{
	}
	UClass* Z_Construct_UClass_ASJ_KnoweldgePoint_NoRegister()
	{
		return ASJ_KnoweldgePoint::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_KnoweldgePoint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_KnoweldgePoint.h" },
		{ "ModuleRelativePath", "Public/SJ_KnoweldgePoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_KnoweldgePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_KnoweldgePoint, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_KnoweldgePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_KnoweldgePoint, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_meshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::NewProp_meshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_KnoweldgePoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::ClassParams = {
		&ASJ_KnoweldgePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_KnoweldgePoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_KnoweldgePoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_KnoweldgePoint, 1710180571);
	template<> WOOGA_API UClass* StaticClass<ASJ_KnoweldgePoint>()
	{
		return ASJ_KnoweldgePoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_KnoweldgePoint(Z_Construct_UClass_ASJ_KnoweldgePoint, &ASJ_KnoweldgePoint::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_KnoweldgePoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_KnoweldgePoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
