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

	// hungryGaze->Percent = 0.1;

	if (player->knoweldgePoint == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("WWAWAWAWAWAW"));
		PlayAnimation(FireDiscoveryClear);

		hungryGaze->Percent = 0.7;
	}
}

void USJ_PlayerWatchUI::FireDiscovery()
{
	PlayAnimation(FireDiscoveryClear);
}
