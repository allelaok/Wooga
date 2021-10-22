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
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EHologramState();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EFireDiscoveryState();
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EFlowState();
// End Cross Module References
	static UEnum* EHologramState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Wooga_EHologramState, Z_Construct_UPackage__Script_Wooga(), TEXT("EHologramState"));
		}
		return Singleton;
	}
	template<> WOOGA_API UEnum* StaticEnum<EHologramState>()
	{
		return EHologramState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHologramState(EHologramState_StaticEnum, TEXT("/Script/Wooga"), TEXT("EHologramState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Wooga_EHologramState_Hash() { return 2229870996U; }
	UEnum* Z_Construct_UEnum_Wooga_EHologramState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Wooga();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHologramState"), 0, Get_Z_Construct_UEnum_Wooga_EHologramState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHologramState::TurnOnHologram", (int64)EHologramState::TurnOnHologram },
				{ "EHologramState::PlayHologram", (int64)EHologramState::PlayHologram },
				{ "EHologramState::TurnOffHologram", (int64)EHologramState::TurnOffHologram },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Wooga.h" },
				{ "PlayHologram.Name", "EHologramState::PlayHologram" },
				{ "TurnOffHologram.Name", "EHologramState::TurnOffHologram" },
				{ "TurnOnHologram.Name", "EHologramState::TurnOnHologram" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Wooga,
				nullptr,
				"EHologramState",
				"EHologramState",
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
	uint32 Get_Z_Construct_UEnum_Wooga_EFireDiscoveryState_Hash() { return 2770855114U; }
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
				{ "EFireDiscoveryState::HowToGrabActorUI", (int64)EFireDiscoveryState::HowToGrabActorUI },
				{ "EFireDiscoveryState::HowToFireUI", (int64)EFireDiscoveryState::HowToFireUI },
				{ "EFireDiscoveryState::Firing", (int64)EFireDiscoveryState::Firing },
				{ "EFireDiscoveryState::CompleteFireDiscovery", (int64)EFireDiscoveryState::CompleteFireDiscovery },
				{ "EFireDiscoveryState::InformWatch", (int64)EFireDiscoveryState::InformWatch },
				{ "EFireDiscoveryState::GoToCollectCourse", (int64)EFireDiscoveryState::GoToCollectCourse },
				{ "EFireDiscoveryState::HowToCollectActorUI", (int64)EFireDiscoveryState::HowToCollectActorUI },
				{ "EFireDiscoveryState::CollectAndEat", (int64)EFireDiscoveryState::CollectAndEat },
				{ "EFireDiscoveryState::CompleteCollect", (int64)EFireDiscoveryState::CompleteCollect },
				{ "EFireDiscoveryState::GoToFistAxCourse", (int64)EFireDiscoveryState::GoToFistAxCourse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CollectAndEat.Name", "EFireDiscoveryState::CollectAndEat" },
				{ "CompleteCollect.Name", "EFireDiscoveryState::CompleteCollect" },
				{ "CompleteFireDiscovery.Name", "EFireDiscoveryState::CompleteFireDiscovery" },
				{ "Firing.Name", "EFireDiscoveryState::Firing" },
				{ "GoToCollectCourse.Name", "EFireDiscoveryState::GoToCollectCourse" },
				{ "GoToFistAxCourse.Name", "EFireDiscoveryState::GoToFistAxCourse" },
				{ "HowToCollectActorUI.Comment", "// \xc3\xa4??\n" },
				{ "HowToCollectActorUI.Name", "EFireDiscoveryState::HowToCollectActorUI" },
				{ "HowToCollectActorUI.ToolTip", "\xc3\xa4??" },
				{ "HowToFireUI.Name", "EFireDiscoveryState::HowToFireUI" },
				{ "HowToGrabActorUI.Comment", "// ????  ?\xdf\xb0?\n" },
				{ "HowToGrabActorUI.Name", "EFireDiscoveryState::HowToGrabActorUI" },
				{ "HowToGrabActorUI.ToolTip", "????  ?\xdf\xb0?" },
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
