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


#define FOREACH_ENUM_EFIREDISCOVERYSTATE(op) \
	op(EFireDiscoveryState::GrabActorUI) \
	op(EFireDiscoveryState::HowToFireUI) \
	op(EFireDiscoveryState::Firing) \
	op(EFireDiscoveryState::CompleteCourse) \
	op(EFireDiscoveryState::InformWatch) \
	op(EFireDiscoveryState::GoToNextStep) 

enum class EFireDiscoveryState : uint8;
template<> WOOGA_API UEnum* StaticEnum<EFireDiscoveryState>();

#define FOREACH_ENUM_EFLOWSTATE(op) \
	op(EFlowState::FireDiscovery) \
	op(EFlowState::Collection) \
	op(EFlowState::FistAx) \
	op(EFlowState::FireUse) \
	op(EFlowState::Smelts) \
	op(EFlowState::DugoutHut) 

enum class EFlowState : uint8;
template<> WOOGA_API UEnum* StaticEnum<EFlowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
