// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/Stem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStem() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AStem_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AStem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AStem::StaticRegisterNativesAStem()
	{
	}
	UClass* Z_Construct_UClass_AStem_NoRegister()
	{
		return AStem::StaticClass();
	}
	struct Z_Construct_UClass_AStem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_top_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_top;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constraint1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_constraint1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constraint2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_constraint2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stem.h" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, boxComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_top_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, top), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_top_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_top_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_mid_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, mid), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_mid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_mid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_bottom_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_bottom = { "bottom", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, bottom), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_bottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_constraint1_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_constraint1 = { "constraint1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, constraint1), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_constraint1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_constraint1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_constraint2_MetaData[] = {
		{ "Category", "Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_constraint2 = { "constraint2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, constraint2), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_constraint2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_constraint2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ???\xcf\xbf? ?????? Offset ???? ????\n" },
		{ "ModuleRelativePath", "Public/Stem.h" },
		{ "ToolTip", "???\xcf\xbf? ?????? Offset ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_grabOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_mid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_bottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_constraint1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_constraint2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_grabOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStem_Statics::ClassParams = {
		&AStem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStem, 1375113713);
	template<> WOOGA_API UClass* StaticClass<AStem>()
	{
		return AStem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStem(Z_Construct_UClass_AStem, &AStem::StaticClass, TEXT("/Script/Wooga"), TEXT("AStem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
