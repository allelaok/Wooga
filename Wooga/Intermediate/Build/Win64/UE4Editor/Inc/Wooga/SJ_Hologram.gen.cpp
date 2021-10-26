// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/SJ_Hologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSJ_Hologram() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ASJ_Hologram_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ASJ_Hologram();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WOOGA_API UClass* Z_Construct_UClass_AFireEvent_NoRegister();
// End Cross Module References
	void ASJ_Hologram::StaticRegisterNativesASJ_Hologram()
	{
	}
	UClass* Z_Construct_UClass_ASJ_Hologram_NoRegister()
	{
		return ASJ_Hologram::StaticClass();
	}
	struct Z_Construct_UClass_ASJ_Hologram_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playChangeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playChangeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destroyFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knowledgePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_knowledgePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASJ_Hologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SJ_Hologram.h" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_Hologram, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Hologram" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_Hologram, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_playChangeTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_playChangeTime = { "playChangeTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_Hologram, playChangeTime), METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_playChangeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_playChangeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_destroyFX_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_destroyFX = { "destroyFX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_Hologram, destroyFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_destroyFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_destroyFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_knowledgePoint_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/SJ_Hologram.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_knowledgePoint = { "knowledgePoint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASJ_Hologram, knowledgePoint), Z_Construct_UClass_AFireEvent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_knowledgePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_knowledgePoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASJ_Hologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_playChangeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_destroyFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASJ_Hologram_Statics::NewProp_knowledgePoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASJ_Hologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASJ_Hologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASJ_Hologram_Statics::ClassParams = {
		&ASJ_Hologram::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASJ_Hologram_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASJ_Hologram_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASJ_Hologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASJ_Hologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASJ_Hologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASJ_Hologram, 1522158224);
	template<> WOOGA_API UClass* StaticClass<ASJ_Hologram>()
	{
		return ASJ_Hologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASJ_Hologram(Z_Construct_UClass_ASJ_Hologram, &ASJ_Hologram::StaticClass, TEXT("/Script/Wooga"), TEXT("ASJ_Hologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASJ_Hologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
