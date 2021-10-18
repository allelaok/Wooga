// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Wooga.h"
#include "GameFramework/GameModeBase.h"
#include "SJ_WoogaGameModeBase.generated.h"

UCLASS()
class WOOGA_API ASJ_WoogaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ASJ_WoogaGameModeBase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

public:
	EFlowState flowState;
	void SetFlowState(EFlowState state);
	EFlowState GetFlowState();

	void FireDiscovery();
	void Collection();
	void FistAx();
	void FireUse();
	void Smelts();
	void DogoutHut();

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_UIPannel> howToGrab;

	class AVR_Player* player;

	FVector p;
};
