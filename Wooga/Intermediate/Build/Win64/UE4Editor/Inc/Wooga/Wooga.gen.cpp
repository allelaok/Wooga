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
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EBlinkState();
	UPackage* Z_Construct_UPackage__Script_Wooga();
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EHologramState();
	WOOGA_API UEnum* Z_Construct_UEnum_Wooga_EFlowState();
// End Cross Module References
	static UEnum* EBlinkState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Wooga_EBlinkState, Z_Construct_UPackage__Script_Wooga(), TEXT("EBlinkState"));
		}
		return Singleton;
	}
	template<> WOOGA_API UEnum* StaticEnum<EBlinkState>()
	{
		return EBlinkState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlinkState(EBlinkState_StaticEnum, TEXT("/Script/Wooga"), TEXT("EBlinkState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Wooga_EBlinkState_Hash() { return 2409886072U; }
	UEnum* Z_Construct_UEnum_Wooga_EBlinkState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Wooga();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlinkState"), 0, Get_Z_Construct_UEnum_Wooga_EBlinkState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlinkState::OnOpacity", (int64)EBlinkState::OnOpacity },
				{ "EBlinkState::PlayOpacity", (int64)EBlinkState::PlayOpacity },
				{ "EBlinkState::OffOpacity", (int64)EBlinkState::OffOpacity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Wooga.h" },
				{ "OffOpacity.Name", "EBlinkState::OffOpacity" },
				{ "OnOpacity.Name", "EBlinkState::OnOpacity" },
				{ "PlayOpacity.Name", "EBlinkState::PlayOpacity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Wooga,
				nullptr,
				"EBlinkState",
				"EBlinkState",
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
	uint32 Get_Z_Construct_UEnum_Wooga_EFlowState_Hash() { return 679243958U; }
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
				{ "EFlowState::InGame", (int64)EFlowState::InGame },
				{ "EFlowState::HowToGrabActorUI", (int64)EFlowState::HowToGrabActorUI },
				{ "EFlowState::HowToFireUI", (int64)EFlowState::HowToFireUI },
				{ "EFlowState::HowToFireUINext", (int64)EFlowState::HowToFireUINext },
				{ "EFlowState::Firing", (int64)EFlowState::Firing },
				{ "EFlowState::CompleteFireDiscovery", (int64)EFlowState::CompleteFireDiscovery },
				{ "EFlowState::InformWatch", (int64)EFlowState::InformWatch },
				{ "EFlowState::GoToCollectCourse", (int64)EFlowState::GoToCollectCourse },
				{ "EFlowState::HowToCollectActorUI", (int64)EFlowState::HowToCollectActorUI },
				{ "EFlowState::CollectAndEat", (int64)EFlowState::CollectAndEat },
				{ "EFlowState::CompleteCollect", (int64)EFlowState::CompleteCollect },
				{ "EFlowState::GoToFistAxCourse", (int64)EFlowState::GoToFistAxCourse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CollectAndEat.Name", "EFlowState::CollectAndEat" },
				{ "CompleteCollect.Name", "EFlowState::CompleteCollect" },
				{ "CompleteFireDiscovery.Name", "EFlowState::CompleteFireDiscovery" },
				{ "Firing.Name", "EFlowState::Firing" },
				{ "GoToCollectCourse.Name", "EFlowState::GoToCollectCourse" },
				{ "GoToFistAxCourse.Name", "EFlowState::GoToFistAxCourse" },
				{ "HowToCollectActorUI.Comment", "// \xc3\xa4??\n" },
				{ "HowToCollectActorUI.Name", "EFlowState::HowToCollectActorUI" },
				{ "HowToCollectActorUI.ToolTip", "\xc3\xa4??" },
				{ "HowToFireUI.Name", "EFlowState::HowToFireUI" },
				{ "HowToFireUINext.Name", "EFlowState::HowToFireUINext" },
				{ "HowToGrabActorUI.Comment", "// ????  ?\xdf\xb0?\n" },
				{ "HowToGrabActorUI.Name", "EFlowState::HowToGrabActorUI" },
				{ "HowToGrabActorUI.ToolTip", "????  ?\xdf\xb0?" },
				{ "InformWatch.Name", "EFlowState::InformWatch" },
				{ "InGame.Name", "EFlowState::InGame" },
				{ "ModuleRelativePath", "Public/Wooga.h" },
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
