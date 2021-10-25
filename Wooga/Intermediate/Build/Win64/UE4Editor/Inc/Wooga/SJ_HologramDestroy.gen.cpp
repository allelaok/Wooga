// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_HologramDestroy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_HologramDestroy() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HologramDestroy_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_HologramDestroy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASJ_HologramDestroy::StaticRegisterNativesASJ_HologramDestroy()
	{
	}
	UClass* Z_Construct_UClass_ASJ_HologramDestroy_NoRegister()
	{
		return ASJ_HologramDestroy::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_HologramDestroy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_niagaraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_niagaraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_HologramDestroy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HologramDestroy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_HologramDestroy.h" },
		{ "ModuleRelativePath", "Public/SJ_HologramDestroy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HologramDestroy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HologramDestroy, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_niagaraComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HologramDestroy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_niagaraComp = { "niagaraComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HologramDestroy, niagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_niagaraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_niagaraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_HologramDestroy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_HologramDestroy, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_meshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_HologramDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_niagaraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_HologramDestroy_Statics::NewProp_meshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_HologramDestroy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_HologramDestroy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_HologramDestroy_Statics::ClassParams = {
		&ASJ_HologramDestroy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_HologramDestroy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HologramDestroy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_HologramDestroy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_HologramDestroy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_HologramDestroy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_HologramDestroy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_HologramDestroy, 2857646704);
	template<> WOOGA_API UClass* StaticClass<ASJ_HologramDestroy>()
	{
		return ASJ_HologramDestroy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_HologramDestroy(Z_Construct_UClass_ASJ_HologramDestroy, &ASJ_HologramDestroy::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_HologramDestroy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_HologramDestroy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
