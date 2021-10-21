// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EFlowState : uint8
{
	FireDiscovery,
	Collection,
	FistAx,
	FireUse,
	Smelts,
	DugoutHut
};

UENUM(BlueprintType)
enum class EFireDiscoveryState : uint8
{
	// 불의  발견
	HowToGrabActorUI,
	HowToFireUI,
	Firing,
	CompleteFireDiscovery,
	InformWatch,
	GoToCollectCourse,
	// 채집
	HowToCollectActorUI,
	CollectAndEat,
	CompleteCollect,
	 GoToFistAxCourse
};

UENUM(BlueprintType)
enum class EHologramState : uint8
{
	TurnOnHologram,
	PlayHologram,
	TurnOffHologram
};

