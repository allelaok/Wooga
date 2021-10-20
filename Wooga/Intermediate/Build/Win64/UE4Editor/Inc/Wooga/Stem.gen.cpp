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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AStick_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStem::execOnCollisionEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollisionEnter(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AStem::StaticRegisterNativesAStem()
	{
		UClass* Class = AStem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollisionEnter", &AStem::execOnCollisionEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStem_OnCollisionEnter_Statics
	{
		struct Stem_eventOnCollisionEnter_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stem_eventOnCollisionEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stem_eventOnCollisionEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stem_eventOnCollisionEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stem_eventOnCollisionEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Stem_eventOnCollisionEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Stem_eventOnCollisionEnter_Parms), &Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stem_eventOnCollisionEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStem, nullptr, "OnCollisionEnter", nullptr, nullptr, sizeof(Stem_eventOnCollisionEnter_Parms), Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStem_OnCollisionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStem_OnCollisionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStem_NoRegister()
	{
		return AStem::StaticClass();
	}
	struct Z_Construct_UClass_AStem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_startC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStem_OnCollisionEnter, "OnCollisionEnter" }, // 117641126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stem.h" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "StemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_startC_MetaData[] = {
		{ "Category", "StemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_startC = { "startC", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, startC), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_startC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_startC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_endC_MetaData[] = {
		{ "Category", "StemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_endC = { "endC", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, endC), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_endC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_endC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_rope_MetaData[] = {
		{ "Category", "StemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_rope = { "rope", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, rope), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_rope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_rope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_cable_MetaData[] = {
		{ "Category", "StemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_cable = { "cable", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, cable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_cable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_cable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStem_Statics::NewProp_stick_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStem_Statics::NewProp_stick = { "stick", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStem, stick), Z_Construct_UClass_AStick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStem_Statics::NewProp_stick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStem_Statics::NewProp_stick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_startC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_endC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_rope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_cable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStem_Statics::NewProp_stick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStem_Statics::ClassParams = {
		&AStem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AStem, 2969754703);
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
