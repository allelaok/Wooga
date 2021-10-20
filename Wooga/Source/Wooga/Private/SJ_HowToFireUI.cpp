// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_HowToFireUI.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>


void USJ_HowToFireUI::NativeConstruct()
{
	Super::NativeConstruct();

	PlayAnimation(OpenUI);
}

void USJ_HowToFireUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	if (player->isClose == true)
	{
		PlayAnimation(CloseUI);
	}
}