// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/LastHouse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastHouse() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_ALastHouse_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_ALastHouse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AStick_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALastHouse::execOnCollisionEnter)
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
	void ALastHouse::StaticRegisterNativesALastHouse()
	{
		UClass* Class = ALastHouse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollisionEnter", &ALastHouse::execOnCollisionEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics
	{
		struct LastHouse_eventOnCollisionEnter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LastHouse_eventOnCollisionEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LastHouse_eventOnCollisionEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LastHouse_eventOnCollisionEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LastHouse_eventOnCollisionEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LastHouse_eventOnCollisionEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LastHouse_eventOnCollisionEnter_Parms), &Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LastHouse_eventOnCollisionEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALastHouse, nullptr, "OnCollisionEnter", nullptr, nullptr, sizeof(LastHouse_eventOnCollisionEnter_Parms), Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALastHouse_OnCollisionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALastHouse_OnCollisionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALastHouse_NoRegister()
	{
		return ALastHouse::StaticClass();
	}
	struct Z_Construct_UClass_ALastHouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tree7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tree7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_offMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_onMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALastHouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALastHouse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALastHouse_OnCollisionEnter, "OnCollisionEnter" }, // 3614063045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LastHouse.h" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_sceneComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_sceneComponent = { "sceneComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_sceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_sceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree1_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree1 = { "tree1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree2_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree2 = { "tree2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree3_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree3 = { "tree3", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree4_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree4 = { "tree4", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree4), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree5_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree5 = { "tree5", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree5), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree6_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree6 = { "tree6", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree6), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_tree7_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_tree7 = { "tree7", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, tree7), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_tree7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_stick_MetaData[] = {
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_stick = { "stick", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, stick), Z_Construct_UClass_AStick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_stick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_stick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, player), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_offMaterial_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_offMaterial = { "offMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, offMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_offMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_offMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastHouse_Statics::NewProp_onMaterial_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LastHouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALastHouse_Statics::NewProp_onMaterial = { "onMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALastHouse, onMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::NewProp_onMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::NewProp_onMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALastHouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_sceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_tree7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_stick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_offMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALastHouse_Statics::NewProp_onMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALastHouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALastHouse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALastHouse_Statics::ClassParams = {
		&ALastHouse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALastHouse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALastHouse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALastHouse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALastHouse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALastHouse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALastHouse, 1908424104);
	template<> WOOGA_API UClass* StaticClass<ALastHouse>()
	{
		return ALastHouse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALastHouse(Z_Construct_UClass_ALastHouse, &ALastHouse::StaticClass, TEXT("/Script/Wooga"), TEXT("ALastHouse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALastHouse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
