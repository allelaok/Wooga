// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_WoogaGameModeBase.h"
#include "SJ_UIPannel.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>
#include "FireRock.h"
#include "FireStraw.h"

ASJ_WoogaGameModeBase::ASJ_WoogaGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASJ_WoogaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetFlowState(EFlowState::FireDiscovery);

	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	player->uiPannel = GetWorld()->SpawnActor<ASJ_UIPannel>(howToGrab, Param);
}

void ASJ_WoogaGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
#pragma region FlowStateMachine
	switch (flowState)
	{
	case EFlowState::FireDiscovery:
		break;
	case EFlowState::Collection:
		break;
	case EFlowState::FistAx:
		break;
	case EFlowState::FireUse:
		break;
	case EFlowState::Smelts:
		break;
	case EFlowState::DugoutHut:
		break;
	}
#pragma endregion

#pragma region DiscoveryStateMachine
	switch (discoveryState)
	{
	case EFireDiscoveryState::GrabActorUI:
		GrabActorUI();
		break;
	case EFireDiscoveryState::Firing:
		break;
	case EFireDiscoveryState::CompleteCourse:
		break;
	case EFireDiscoveryState::InformWatch:
		break;
	case EFireDiscoveryState::GoToNextStep:
		break;
	}

#pragma endregion

}

void ASJ_WoogaGameModeBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// PlayerInputComponent->BindAction("TurnOffUI", IE_Pressed, this, &ASJ_WoogaGameModeBase::TurnOff);
}

#pragma region FlowStateFunction
// 캡슐화
void ASJ_WoogaGameModeBase::SetFlowState(EFlowState state)
{
	flowState = state;
}

EFlowState ASJ_WoogaGameModeBase::GetFlowState()
{
	return EFlowState();
}

void ASJ_WoogaGameModeBase::FireDiscovery()
{
	SetDiscoveryState(EFireDiscoveryState::GrabActorUI);
	
}

void ASJ_WoogaGameModeBase::Collection()
{

}

void ASJ_WoogaGameModeBase::FistAx()
{

}

void ASJ_WoogaGameModeBase::FireUse()
{

}

void ASJ_WoogaGameModeBase::Smelts()
{

}

void ASJ_WoogaGameModeBase::DogoutHut()
{

}

#pragma endregion

#pragma region DiscoveryStateFunction
void ASJ_WoogaGameModeBase::SetDiscoveryState(EFireDiscoveryState state)
{
	discoveryState = state;
}
EFireDiscoveryState ASJ_WoogaGameModeBase::GetDiscoveryState()
{
	return EFireDiscoveryState();
}

void ASJ_WoogaGameModeBase::GrabActorUI()
{
	if (player->isClose == true)
	{
		SetDiscoveryState(EFireDiscoveryState::Firing);
		// UI 를 끄면 근처 아웃 라인이 켜지게
	}
}
void ASJ_WoogaGameModeBase::Firing()
{
	// 불을 켜면 홀로그램이 생성되는 기능
	AFireStraw* fireStraw = Cast<AFireStraw>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireStraw::StaticClass()));

	if (fireStraw->isClear == true)
	{
		SetDiscoveryState(EFireDiscoveryState::CompleteCourse);
	}
}
void ASJ_WoogaGameModeBase::CompleteFireCourse()
{
	// 홀로그램이 꺼지면 시계로 들어가는 기능
	// 시계 햅틱 기능
}
void ASJ_WoogaGameModeBase::InformWatch()
{
	// 시계 위에 UI 생성 및 A 버튼으로 끄는 기능
	// UI를 끄면 이동 방법을 알려주는 UI 생성 및 이동 가이드라인 생성
}
void ASJ_WoogaGameModeBase::GoToCollectState()
{

}
#pragma endregion

void ASJ_WoogaGameModeBase::TurnOff()
{
	useUI->SetActorHiddenInGame(true);
}
