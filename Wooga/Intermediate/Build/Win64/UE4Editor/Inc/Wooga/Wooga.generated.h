// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WOOGA_Wooga_generated_h
#error "Wooga.generated.h already included, missing '#pragma once' in Wooga.h"
#endif
#define WOOGA_Wooga_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wooga_Source_Wooga_Public_Wooga_h


#define FOREACH_ENUM_EHOLOGRAMSTATE(op) \
	op(EHologramState::TurnOnHologram) \
	op(EHologramState::PlayHologram) \
	op(EHologramState::TurnOffHologram) 

enum class EHologramState : uint8;
template<> WOOGA_API UEnum* StaticEnum<EHologramState>();

#define FOREACH_ENUM_EFLOWSTATE(op) \
	op(EFlowState::HowToGrabActorUI) \
	op(EFlowState::HowToFireUI) \
	op(EFlowState::Firing) \
	op(EFlowState::CompleteFireDiscovery) \
	op(EFlowState::InformWatch) \
	op(EFlowState::GoToCollectCourse) \
	op(EFlowState::HowToCollectActorUI) \
	op(EFlowState::CollectAndEat) \
	op(EFlowState::CompleteCollect) \
	op(EFlowState::GoToFistAxCourse) 

enum class EFlowState : uint8;
template<> WOOGA_API UEnum* StaticEnum<EFlowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
