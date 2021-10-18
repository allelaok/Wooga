// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_WoogaGameModeBase.h"
#include "SJ_UIPannel.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

ASJ_WoogaGameModeBase::ASJ_WoogaGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASJ_WoogaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetFlowState(EFlowState::FireDiscovery);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	float playerX = player->GetActorLocation().X ;
	float playerY = player->GetActorLocation().Y;
	float playerZ = player->GetActorLocation().Z;

	p = FVector(playerX + 50, playerY, playerZ);

	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// 시작 시 HMD에 맞춰 UI 생성 및 A 버튼으로 UI 끄는 기능
	GetWorld()->SpawnActor<ASJ_UIPannel>(howToGrab, Param);

}

void ASJ_WoogaGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

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
}

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
	
	// UI 를 끄면 근처 아웃 라인이 켜지게
	// 불을 켜면 홀로그램이 생성되는 기능
	// 홀로그램이 꺼지면 시계로 들어가는 기능
	// 시계 햅틱 기능
	// 시계 위에 UI 생성 및 A 버튼으로 끄는 기능
	// UI를 끄면 이동 방법을 알려주는 UI 생성 및 이동 가이드라인 생성
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