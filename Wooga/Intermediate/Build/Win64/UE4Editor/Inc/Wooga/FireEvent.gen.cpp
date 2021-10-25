// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/FireEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireEvent() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AFireEvent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFireEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFireEvent::StaticRegisterNativesAFireEvent()
	{
	}
	UClass* Z_Construct_UClass_AFireEvent_NoRegister()
	{
		return AFireEvent::StaticClass();
	}
	struct Z_Construct_UClass_AFireEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_planeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_planeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skelComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skelComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FireEvent.h" },
		{ "ModuleRelativePath", "Public/FireEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireEvent_Statics::NewProp_planeComp_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireEvent_Statics::NewProp_planeComp = { "planeComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireEvent, planeComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireEvent_Statics::NewProp_planeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireEvent_Statics::NewProp_planeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireEvent_Statics::NewProp_skelComp_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FireEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireEvent_Statics::NewProp_skelComp = { "skelComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireEvent, skelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireEvent_Statics::NewProp_skelComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireEvent_Statics::NewProp_skelComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireEvent_Statics::NewProp_planeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireEvent_Statics::NewProp_skelComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireEvent_Statics::ClassParams = {
		&AFireEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireEvent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireEvent, 3694916154);
	template<> WOOGA_API UClass* StaticClass<AFireEvent>()
	{
		return AFireEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireEvent(Z_Construct_UClass_AFireEvent, &AFireEvent::StaticClass, TEXT("/Script/Wooga"), TEXT("AFireEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
