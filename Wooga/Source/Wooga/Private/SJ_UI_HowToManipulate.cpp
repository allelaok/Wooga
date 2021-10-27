// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_UI_HowToManipulate.h"
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

void USJ_UI_HowToManipulate::NativeConstruct()
{
	Super::NativeConstruct();

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	PlayAnimation(OpenUI);

}

void USJ_UI_HowToManipulate::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (player->isClose == true)
	{
		PlayAnimation(CloseUI);
	}
}