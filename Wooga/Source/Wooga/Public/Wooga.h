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

