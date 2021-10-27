// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_WoogaGameModeBase.h"
#include "SJ_UIPannel.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>
#include "FireRock.h"
#include "FireStraw.h"
#include "SJ_Hologram.h"
#include "GrabActorComponent.h"
#include "SJ_GuidLine.h"
#include "SJ_HowToGrabUIActor.h"
#include "SJ_HowToFireUIActor.h"
#include <Components/WidgetComponent.h>
#include "FirePosition.h"
#include "SJ_HowToFireNextUIActor.h"
#include "SJ_Actor_HowToManipulate.h"
#include "SJ_Actor_TitleUI.h"
#include "FireRock2.h"
#include "FireStraw.h"
#include "SJ_Actor_BreatheFireUI.h"

ASJ_WoogaGameModeBase::ASJ_WoogaGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASJ_WoogaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 맨 처음 불의 발견 교육으로 시작
	SetState(EFlowState::InGame);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
}

#pragma region FlowStateFunction
void ASJ_WoogaGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	switch (flowState)
	{
	case EFlowState::InGame:
		InGame();
		break;
	case  EFlowState::ManipulateUI:
		ManipulateUI();
		break;
	case EFlowState::HowToGrabActorUI:
		GrabActorUI();
		break;
	case EFlowState::FireDiscoveryTitle:
		break;
	case EFlowState::HowToFireUI:
		HowToFireUI();
		break;
	case EFlowState::HowToFireUINext:
		HowToFireUINext();
		break;
	case EFlowState::Firing:
		Firing();
		break;
	case EFlowState::CompleteFireDiscovery:
		CompleteFireCourse();
		break;
	case EFlowState::InformWatch:
		InformWatch();
		break;
	case EFlowState::GoToCollectCourse:
		GoToCollectState();
		break;
	case EFlowState::HowToCollectActorUI:
		HowToCollectActorUI();
		break;
	case EFlowState::CollectAndEat:
		CollectAndEat();
		break;
	case EFlowState::CompleteCollect:
		CompleteCollect();
		break;
	case EFlowState::GoToFistAxCourse:
		GoToFistAxCourse();
		break;
	}
}

// 캡슐화
void ASJ_WoogaGameModeBase::SetState(EFlowState state)
{
	flowState = state;
}

EFlowState ASJ_WoogaGameModeBase::GetState()
{
	return EFlowState();
}

void ASJ_WoogaGameModeBase::InGame()
{
	// 시작 시 약간의 딜레이를 주고 시작
	nextDelayTime += GetWorld()->DeltaTimeSeconds;

	if (nextDelayTime >= 5.0f)
	{
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// 조작방법 UI 생성
		manipulateUI = GetWorld()->SpawnActor<ASJ_Actor_HowToManipulate>(bpManipulateUI, Param);

		nextDelayTime = 0;

		SetState(EFlowState::ManipulateUI);
	}
}

void ASJ_WoogaGameModeBase::ManipulateUI()
{
	if (player->isClose == true)
	{
		// 잡는방법 UI 생성 로직
		GetWorldTimerManager().SetTimer(howToGrabUITimer, this, &ASJ_WoogaGameModeBase::SpawnHowToGrabUI, 3.0f);

		SetState(EFlowState::HowToGrabActorUI);
	}
}

void ASJ_WoogaGameModeBase::GrabActorUI()
{
	// 잡는 방법을 알려주는 UI 가 꺼지면 교육 제목을 생성한다.
	if (player->isClose == true)
	{
		bIsDelay = true;
		if (bIsDelay == true)
		{
			nextDelayTime += GetWorld()->DeltaTimeSeconds;

			if (nextDelayTime >= 3.0f)
			{
				// 딜레이 변수 초기화
				bIsDelay = false;
				nextDelayTime = 0;

				SpawnTitle();
				SetState(EFlowState::FireDiscoveryTitle);
			}
		}
	}
}

void ASJ_WoogaGameModeBase::FireDiscoveryTitle()
{
	nextDelayTime += GetWorld()->DeltaTimeSeconds;

	if (nextDelayTime >= 9.0f)
	{
		// 부싯돌 캐싱
		fireRockOne = Cast<AFireRock>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireRock::StaticClass()));
		fireRockTwo = Cast<AFireRock2>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireRock2::StaticClass()));

		// 부싯돌 아웃라인
		fireRockOne->outLine->SetVisibility(true);
		fireRockTwo->outLine->SetVisibility(true);

		// 불씨 UI 생성
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		howToFire = GetWorld()->SpawnActor<ASJ_HowToFireUIActor>(howToFireUIActor, Param);

		SetState(EFlowState::HowToFireUI);
	}
}
#pragma endregion

#pragma region DiscoveryStateFunction


void ASJ_WoogaGameModeBase::HowToFireUI()
{
	firePosition = Cast<AFirePosition>(UGameplayStatics::GetActorOfClass(GetWorld(), AFirePosition::StaticClass()));

	fireStraw = Cast<AFireStraw>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireStraw::StaticClass()));

	if (firePosition->bisFire == true)
	{
		// 지푸라기와 화로 아웃라인
		firePosition->outLine->SetVisibility(true);

		fireStraw->outLine->SetVisibility(true);
		
		//  불씨 바닥으로 옮기는 UI
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		howToFireNext = GetWorld()->SpawnActor<ASJ_HowToFireNextUIActor>(howToFireNextUIActor, Param);

		// 임무 완료 사운드
		UGameplayStatics::PlaySound2D(GetWorld(), uiSound);

		SetState(EFlowState::HowToFireUINext);
	}
}

void ASJ_WoogaGameModeBase::HowToFireUINext()
{
	// firePosition = Cast<AFirePosition>(UGameplayStatics::GetActorOfClass(GetWorld(), AFirePosition::StaticClass()));

	// fireStraw = Cast<AFireStraw>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireStraw::StaticClass()));

	if (fireStraw->bisReadyFire == true)
	{
		// 임무 완료 사운드
		UGameplayStatics::PlaySound2D(GetWorld(), uiSound);

		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		breatheFireUI = GetWorld()->SpawnActor<ASJ_Actor_BreatheFireUI>(bpBreatheFireUI, Param);
		SetState(EFlowState::Firing);
	}

	if (firePosition->bisFire == true)
	{
		// 이전 UI 꺼주기
		player->TurnOff();

		nextDelayTime += GetWorld()->DeltaTimeSeconds;

		if (nextDelayTime >= 2.0f)
		{
			// 이전에 사용하던 UI 제거
			howToFire->Destroy();

			SetState(EFlowState::Firing);
			nextDelayTime = 0;
		}
	}
}

void ASJ_WoogaGameModeBase::Firing()
{
	// AFireStraw* fireStraw = Cast<AFireStraw>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireStraw::StaticClass()));

	if (fireStraw->isClear == false)
	{
		return;
	}

	// 불을 켜면 홀로그램이 생성되고 첫번째 교육 이수 상태로 넘어간다.
	if (fireStraw->isClear == true)
	{
		changeStateDelayTime += GetWorld()->DeltaTimeSeconds;
		if (changeStateDelayTime >= 3.0f)
		{
			// UI 꺼주기
			player->TurnOff();

			UE_LOG(LogTemp, Warning, TEXT("CompleteFireCourse"));
			FActorSpawnParameters Param;
			Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			hologram = GetWorld()->SpawnActor<ASJ_Hologram>(fireDisCoveryHologram, Param);

			// UI Sound
			UGameplayStatics::PlaySound2D(GetWorld(), uiSound);

			SetState(EFlowState::CompleteFireDiscovery);
		}
	}
}
void ASJ_WoogaGameModeBase::CompleteFireCourse()
{
	// 홀로그램이 꺼지면 시계로 들어가는 기능
	currentTime += GetWorld()->DeltaTimeSeconds;

	if (currentTime >= destroyTime)
	{
		// 시계 햅틱 기능
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(watchHaptic, EControllerHand::Left, 0.5f, false);

		player->playerWatch->SetHiddenInGame(false);

		// 임무 완료 사운드
		UGameplayStatics::PlaySound2D(GetWorld(), uiSound);

		SetState(EFlowState::InformWatch);
	}
}
void ASJ_WoogaGameModeBase::InformWatch()
{
	// 시계 위에 UI 생성 및 A 버튼으로 끄는 기능
	// UI를 끄면 이동 방법을 알려주는 UI 생성 및 이동 가이드라인 생성
	temporaryTime += GetWorld()->DeltaTimeSeconds;

	if (temporaryTime >= 5.0f)
	{
		guideLine = Cast<ASJ_GuidLine>(UGameplayStatics::GetActorOfClass(GetWorld(), ASJ_GuidLine::StaticClass()));

		guideLine->SetActorHiddenInGame(false);
	}
}
void ASJ_WoogaGameModeBase::GoToCollectState()
{

}

void ASJ_WoogaGameModeBase::SpawnHowToGrabUI()
{
	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// 시작시 잡는 방법 알려주는 UI 생성 코드
	howToGrab = GetWorld()->SpawnActor<ASJ_HowToGrabUIActor>(howToGrabActor, Param);
}

void ASJ_WoogaGameModeBase::SpawnTitle()
{
	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// 불의 발견 제목
	FDTitle = GetWorld()->SpawnActor<ASJ_Actor_TitleUI>(bpFDTitle, Param);

	// 웅장한 사운드 재생
}
#pragma endregion

#pragma region CollectStateFunction
void ASJ_WoogaGameModeBase::HowToCollectActorUI()
{
	if (player->isClose == true)
	{
		SetState(EFlowState::CollectAndEat);
	}
}

void ASJ_WoogaGameModeBase::CollectAndEat()
{
	// 채집하여 먹으면 홀로그램 생성하고 다음 상태로 넘어가기

}

void ASJ_WoogaGameModeBase::CompleteCollect()
{
	// 홀로그램 재생이 끝나면 플레이어 워치로 들어가고 
}

void ASJ_WoogaGameModeBase::GoToFistAxCourse()
{
}
#pragma endregion


