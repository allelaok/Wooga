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
	// 전체 상태 머신
	EFlowState flowState;
	void SetState(EFlowState state);
	EFlowState GetState();

	void InGame();
	// 불의 발견 교육
	void GrabActorUI();
	void HowToFireUI();
	void HowToFireUINext();
	void Firing();
	void CompleteFireCourse();
	void InformWatch();
	void GoToCollectState();

	// 시작 시 잡는방법 알려주는 UI 타이머
	FTimerHandle howToGrabOpenTIme;
	void OpenGrabUI();

	// UI Sound
	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundBase* uiSound;

	// 잡는 방법 알려주는 UI
	class ASJ_HowToGrabUIActor* howToGrab;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToGrabUIActor> howToGrabActor;

	// 불지피는 방법 알려주는 UI
	class ASJ_HowToFireUIActor* howToFire;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToFireUIActor> howToFireUIActor;

	// 불지피는 방법 다음 UI
	class ASJ_HowToFireNextUIActor* howToFireNext;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToFireNextUIActor> howToFireNextUIActor;

	float nextDelayTime;
	float injae;

	// 불의 발견 홀로그램
	class ASJ_Hologram* hologram;

	UPROPERTY(EditAnywhere, Category = Hologram)
	TSubclassOf<class ASJ_Hologram> fireDisCoveryHologram;

	// 다음 장소로 이동하기 위한 가이드 라인
	UPROPERTY(EditAnywhere, Category = GuideLine)
	TSubclassOf<class ASJ_GuidLine> goToCollectGuideLine;

	class ASJ_UIPannel* useUI;

	class AVR_Player* player;

	class ASJ_GuidLine* guideLine;

	UPROPERTY()
		float currentTime;
	UPROPERTY()
		float destroyTime = 3.0f;
	UPROPERTY()
		float changeStateDelayTime;
	UPROPERTY()
	float temporaryTime;

	TArray<class AFireRock*> fireRocks;

	FVector p;

	FTimerHandle destroyTimer;

	UPROPERTY(EditAnywhere, Category = Haptic)
		class UHapticFeedbackEffect_Base* watchHaptic;

	// 채집 교육
	void HowToCollectActorUI();
	void CollectAndEat();
	void CompleteCollect();
	void GoToFistAxCourse();
};
