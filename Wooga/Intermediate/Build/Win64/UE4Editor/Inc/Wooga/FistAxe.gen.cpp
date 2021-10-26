// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/FistAxe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFistAxe() {}
// Cross Module References
	WOOGA_API UClass* Z_Construct_UClass_AFistAxe_NoRegister();
	WOOGA_API UClass* Z_Construct_UClass_AFistAxe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFistAxe::execOnCollisionEnter)
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
	void AFistAxe::StaticRegisterNativesAFistAxe()
	{
		UClass* Class = AFistAxe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollisionEnter", &AFistAxe::execOnCollisionEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics
	{
		struct FistAxe_eventOnCollisionEnter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FistAxe_eventOnCollisionEnter_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FistAxe_eventOnCollisionEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FistAxe_eventOnCollisionEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FistAxe_eventOnCollisionEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FistAxe_eventOnCollisionEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FistAxe_eventOnCollisionEnter_Parms), &Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FistAxe_eventOnCollisionEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFistAxe, nullptr, "OnCollisionEnter", nullptr, nullptr, sizeof(FistAxe_eventOnCollisionEnter_Parms), Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFistAxe_OnCollisionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFistAxe_OnCollisionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFistAxe_NoRegister()
	{
		return AFistAxe::StaticClass();
	}
	struct Z_Construct_UClass_AFistAxe_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock7_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock8_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock8;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFistAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wooga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFistAxe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFistAxe_OnCollisionEnter, "OnCollisionEnter" }, // 837992626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FistAxe.h" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_sceneComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_sceneComponent = { "sceneComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_sceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_sceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_fist_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_fist = { "fist", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, fist), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_fist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_fist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock1_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock1 = { "rock1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock2_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock2 = { "rock2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock3_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock3 = { "rock3", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock4_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock4 = { "rock4", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock4), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock5_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock5 = { "rock5", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock5), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock6_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock6 = { "rock6", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock6), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock7_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock7 = { "rock7", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock7), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistAxe_Statics::NewProp_rock8_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FistAxe.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFistAxe_Statics::NewProp_rock8 = { "rock8", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFistAxe, rock8), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::NewProp_rock8_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFistAxe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_sceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_fist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFistAxe_Statics::NewProp_rock8,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFistAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFistAxe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFistAxe_Statics::ClassParams = {
		&AFistAxe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFistAxe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFistAxe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFistAxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFistAxe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFistAxe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFistAxe, 2206544842);
	template<> WOOGA_API UClass* StaticClass<AFistAxe>()
	{
		return AFistAxe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFistAxe(Z_Construct_UClass_AFistAxe, &AFistAxe::StaticClass, TEXT("/Script/Wooga"), TEXT("AFistAxe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFistAxe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
