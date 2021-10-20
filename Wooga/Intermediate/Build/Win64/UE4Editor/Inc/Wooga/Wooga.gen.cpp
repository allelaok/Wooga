// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wooga/Public/Wooga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWooga() {}
// Cross Module References
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EFireDiscoveryState();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EFlowState();
// End Cross Module References
	static UEnum* EFireDiscoveryState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Wooga_EFireDiscoveryState, Z_Construct_UPackage__Script_Wooga(), TEXT("EFireDiscoveryState"));
		}
		return Singleton;
	}
	template<> WOOGA_API UEnum* StaticEnum<EFireDiscoveryState>()
	{
		return EFireDiscoveryState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireDiscoveryState(EFireDiscoveryState_StaticEnum, TEXT("/Script/Wooga"), TEXT("EFireDiscoveryState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Wooga_EFireDiscoveryState_Hash() { return 3633178181U; }
	UEnum* Z_Construct_UEnum_Wooga_EFireDiscoveryState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Wooga();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireDiscoveryState"), 0, Get_Z_Construct_UEnum_Wooga_EFireDiscoveryState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireDiscoveryState::GrabActorUI", (int64)EFireDiscoveryState::GrabActorUI },
				{ "EFireDiscoveryState::HowToFireUI", (int64)EFireDiscoveryState::HowToFireUI },
				{ "EFireDiscoveryState::Firing", (int64)EFireDiscoveryState::Firing },
				{ "EFireDiscoveryState::CompleteCourse", (int64)EFireDiscoveryState::CompleteCourse },
				{ "EFireDiscoveryState::InformWatch", (int64)EFireDiscoveryState::InformWatch },
				{ "EFireDiscoveryState::GoToNextStep", (int64)EFireDiscoveryState::GoToNextStep },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CompleteCourse.Name", "EFireDiscoveryState::CompleteCourse" },
				{ "Firing.Name", "EFireDiscoveryState::Firing" },
				{ "GoToNextStep.Name", "EFireDiscoveryState::GoToNextStep" },
				{ "GrabActorUI.Name", "EFireDiscoveryState::GrabActorUI" },
				{ "HowToFireUI.Name", "EFireDiscoveryState::HowToFireUI" },
				{ "InformWatch.Name", "EFireDiscoveryState::InformWatch" },
				{ "ModuleRelativePath", "Public/Wooga.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Wooga,
				nullptr,
				"EFireDiscoveryState",
				"EFireDiscoveryState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFlowState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Wooga_EFlowState, Z_Construct_UPackage__Script_Wooga(), TEXT("EFlowState"));
		}
		return Singleton;
	}
	template<> WOOGA_API UEnum* StaticEnum<EFlowState>()
	{
		return EFlowState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowState(EFlowState_StaticEnum, TEXT("/Script/Wooga"), TEXT("EFlowState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Wooga_EFlowState_Hash() { return 1630262307U; }
	UEnum* Z_Construct_UEnum_Wooga_EFlowState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Wooga();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowState"), 0, Get_Z_Construct_UEnum_Wooga_EFlowState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowState::FireDiscovery", (int64)EFlowState::FireDiscovery },
				{ "EFlowState::Collection", (int64)EFlowState::Collection },
				{ "EFlowState::FistAx", (int64)EFlowState::FistAx },
				{ "EFlowState::FireUse", (int64)EFlowState::FireUse },
				{ "EFlowState::Smelts", (int64)EFlowState::Smelts },
				{ "EFlowState::DugoutHut", (int64)EFlowState::DugoutHut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collection.Name", "EFlowState::Collection" },
				{ "DugoutHut.Name", "EFlowState::DugoutHut" },
				{ "FireDiscovery.Name", "EFlowState::FireDiscovery" },
				{ "FireUse.Name", "EFlowState::FireUse" },
				{ "FistAx.Name", "EFlowState::FistAx" },
				{ "ModuleRelativePath", "Public/Wooga.h" },
				{ "Smelts.Name", "EFlowState::Smelts" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Wooga,
				nullptr,
				"EFlowState",
				"EFlowState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
