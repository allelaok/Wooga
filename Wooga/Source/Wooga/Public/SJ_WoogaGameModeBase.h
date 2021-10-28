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

	// 다음 상태로 넘어가는 딜레이 타임
	UPROPERTY()
	float nextDelayTime;
	// 딜레이타임 카운트 여부
	bool bIsDelay;

	// 게임 시작
	void InGame();
	void ManipulateUI();
	void GrabActorUI();
	void FireDiscoveryTitle();

	// 조작방법 UI 
	class ASJ_Actor_HowToManipulate* manipulateUI;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_Actor_HowToManipulate> bpManipulateUI;

	// 두 UI 간에 딜레이를 위한 잡는방법UI 생성 타이머
	FTimerHandle howToGrabUITimer;
	void SpawnHowToGrabUI();

	// 잡는 방법 알려주는 UI
	class ASJ_HowToGrabUIActor* howToGrab;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToGrabUIActor> howToGrabActor;

	// 제목 생성 기능 및 타이머
	FTimerHandle titleTimer;
	void SpawnTitle();

	// 불의 발견 제목 UI
	class ASJ_Actor_TitleUI* FDTitle;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_Actor_TitleUI> bpFDTitle;

	// 부싯돌
	class AFireRock* fireRockOne;
	class AFireRock2* fireRockTwo;

	// 불의 발견 교육
	void HowToFireUI();
	void HowToFireUINext();
	void Firing();
	void CompleteFireCourse();
	void InformWatch();
	void GoToCollectState();

	// UI Sound
	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundBase* uiSound;

	// 불지피는 방법 알려주는 UI
	class ASJ_HowToFireUIActor* howToFire;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToFireUIActor> howToFireUIActor;

	// 지푸라기
	class AFirePosition* firePosition;
	// 화로
	class AFireStraw* fireStraw;

	// 불지피는 방법 다음 UI
	class ASJ_HowToFireNextUIActor* howToFireNext;

	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_HowToFireNextUIActor> howToFireNextUIActor;

	// 불에 숨을 불어 넣는 방법 UI
	class ASJ_Actor_BreatheFireUI* breatheFireUI;
	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_Actor_BreatheFireUI> bpBreatheFireUI;


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
