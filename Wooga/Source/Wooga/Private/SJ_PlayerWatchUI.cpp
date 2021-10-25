// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_PlayerWatchUI.h"
#include <Components/ProgressBar.h>
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

void USJ_PlayerWatchUI::NativeConstruct()
{
	Super::NativeConstruct();

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
}

void USJ_PlayerWatchUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (player->knowledgePoint == 1 && player->isPlayAnim == true)
	{
		player->isPlayAnim = false;
		PlayAnimation(FireDiscoveryClear);
	}
}

void USJ_PlayerWatchUI::FireDiscovery()
{
	PlayAnimation(FireDiscoveryClear);
}
