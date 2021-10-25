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

ASJ_WoogaGameModeBase::ASJ_WoogaGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASJ_WoogaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 맨 처음 불의 발견 교육으로 시작
	SetState(EFlowState::HowToGrabActorUI);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	GetWorldTimerManager().SetTimer(howToGrabOpenTIme, this, &ASJ_WoogaGameModeBase::OpenGrabUI, 3.0f);
}

#pragma region FlowStateFunction
void ASJ_WoogaGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	switch (flowState)
	{
	case EFlowState::HowToGrabActorUI:
		GrabActorUI();
		break;
	case EFlowState::HowToFireUI:
		HowToFireUI();
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

#pragma endregion

#pragma region DiscoveryStateFunction
void ASJ_WoogaGameModeBase::GrabActorUI()
{
	// 잡는 방법을 알려주는 UI 가 꺼지면 부싯돌을 잡는 상태로 넘어간다.
	if (player->isClose == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("OpenHowToFireUI"));

		// UI 를 끄면 근처 아웃 라인이 켜지게
		TArray<AActor*> bpFireRocks;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFireRock::StaticClass(), bpFireRocks);

		for (int i = 0; i < bpFireRocks.Num(); i++)
		{
			AFireRock* emptyFireRock = nullptr;
			fireRocks.Add(emptyFireRock);
		}

		for (int i = 0; i < bpFireRocks.Num(); i++)
		{
			auto fr = Cast<AFireRock>(bpFireRocks[i]);
			fr->outLine->SetVisibility(true);
		}

		SetState(EFlowState::HowToFireUI);
	}
}

void ASJ_WoogaGameModeBase::HowToFireUI()
{
	// 부싯돌을 두개 다 잡으면 불을 지필 수 있는 상태로 넘어간다.
	if (player->grabComp->fireRockR && player->grabComp->fireRockL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fire"));

		// 불을 지필 수 있는 방법을 알려주는 UI
		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		player->uiPannel = GetWorld()->SpawnActor<ASJ_UIPannel>(howToFireUIPannel, Param);

		SetState(EFlowState::Firing);
	}
}

void ASJ_WoogaGameModeBase::Firing()
{
	AFireStraw* fireStraw = Cast<AFireStraw>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireStraw::StaticClass()));

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
		// hologram->Destroy();

		// 시계 햅틱 기능
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(watchHaptic, EControllerHand::Left, 0.5f, false);

		SetState(EFlowState::InformWatch);
	}
}
void ASJ_WoogaGameModeBase::InformWatch()
{
	// 시계 위에 UI 생성 및 A 버튼으로 끄는 기능
	// UI를 끄면 이동 방법을 알려주는 UI 생성 및 이동 가이드라인 생성
	temporaryTime += GetWorld()->DeltaTimeSeconds;

	if (temporaryTime >= 2.0f)
	{
		guideLine = Cast<ASJ_GuidLine>(UGameplayStatics::GetActorOfClass(GetWorld(), ASJ_GuidLine::StaticClass()));

		guideLine->SetActorHiddenInGame(false);
	}
}
void ASJ_WoogaGameModeBase::GoToCollectState()
{

}
#pragma endregion

void ASJ_WoogaGameModeBase::OpenGrabUI()
{
	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// 시작시 잡는 방법 알려주는 UI 생성 코드
	howToGrab = GetWorld()->SpawnActor<ASJ_HowToGrabUIActor>(howToGrabActor, Param);
} 

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
}

void ASJ_WoogaGameModeBase::GoToFistAxCourse()
{
}
#pragma endregion


