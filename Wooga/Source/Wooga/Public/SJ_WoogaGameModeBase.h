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

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

public:
	// 전체 상태 머신
	EFlowState flowState;
	void SetFlowState(EFlowState state);
	EFlowState GetFlowState();

	void FireDiscovery();
	void Collection();
	void FistAx();
	void FireUse();
	void Smelts();
	void DogoutHut();

	// 불의 발견 상태머신
	EFireDiscoveryState discoveryState;
	void SetDiscoveryState(EFireDiscoveryState state);
	EFireDiscoveryState GetDiscoveryState();

	void GrabActorUI();
	void Firing();
	void CompleteFireCourse();
	void InformWatch();
	void GoToCollectState();

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_UIPannel> howToGrab;

	UPROPERTY(EditAnywhere, Category = Hologram)
	TSubclassOf<class ASJ_Hologram> fireDisCoveryHologram;

	class ASJ_UIPannel* useUI;

	class AVR_Player* player;

	TArray<class AFireRock*> fireRocks;

	FVector p;

	void TurnOff();
};
