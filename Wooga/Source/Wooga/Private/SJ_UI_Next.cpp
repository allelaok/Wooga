// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_UI_Next.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>
#include <Components/Image.h>

void USJ_UI_Next::NativeConstruct()
{
	Super::NativeConstruct();

	PlayAnimation(OpenUI);
}

void USJ_UI_Next::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	loopTime += InDeltaTime;
	if (loopTime >= 2.0f)
	{
		PlayAnimation(Blink);
		loopTime = 0;
	}

	if (player->isClose == true)
	{
		PlayAnimation(CloseUI);
	}
}