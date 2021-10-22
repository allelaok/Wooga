// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/FirePosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirePosition() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AFirePosition_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFirePosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WOOGA_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFireRock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirePosition::execOnCollisionEnter)
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
	void AFirePosition::StaticRegisterNativesAFirePosition()
	{
		UClass* Class = AFirePosition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollisionEnter", &AFirePosition::execOnCollisionEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics
	{
		struct FirePosition_eventOnCollisionEnter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirePosition_eventOnCollisionEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirePosition_eventOnCollisionEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirePosition_eventOnCollisionEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirePosition_eventOnCollisionEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FirePosition_eventOnCollisionEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirePosition_eventOnCollisionEnter_Parms), &Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirePosition_eventOnCollisionEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirePosition, nullptr, "OnCollisionEnter", nullptr, nullptr, sizeof(FirePosition_eventOnCollisionEnter_Parms), Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirePosition_OnCollisionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirePosition_OnCollisionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirePosition_NoRegister()
	{
		return AFirePosition::StaticClass();
	}
	struct Z_Construct_UClass_AFirePosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireRock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireRock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bisFire_MetaData[];
#endif
		static void NewProp_bisFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bisFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emberFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emberFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirePosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirePosition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirePosition_OnCollisionEnter, "OnCollisionEnter" }, // 2024374696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirePosition.h" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, player), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock = { "fireRock", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, fireRock), Z_Construct_UClass_AFireRock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData[] = {
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	void Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_SetBit(void* Obj)
	{
		((AFirePosition*)Obj)->bisFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire = { "bisFire", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFirePosition), &Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData[] = {
		{ "Category", "Fire" },
		{ "ModuleRelativePath", "Public/FirePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory = { "emberFactory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePosition, emberFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_fireRock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_bisFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePosition_Statics::NewProp_emberFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirePosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirePosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirePosition_Statics::ClassParams = {
		&AFirePosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirePosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirePosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirePosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirePosition, 4022339465);
	template<> WOOGA_API UClass* StaticClass<AFirePosition>()
	{
		return AFirePosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirePosition(Z_Construct_UClass_AFirePosition, &AFirePosition::StaticClass, TEXT("/Script/Wooga"), TEXT("AFirePosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirePosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
