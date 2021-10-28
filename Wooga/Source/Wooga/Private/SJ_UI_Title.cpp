// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_UI_Title.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

void USJ_UI_Title::NativeConstruct()
{
	Super::NativeConstruct();

	PlayAnimation(OpenUI);

}

void USJ_UI_Title::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	nextDelayTime += InDeltaTime;

	if (nextDelayTime >= 6.0f)
	{
		PlayAnimation(CloseUI);

		nextDelayTime = 0;
	}
}

