// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SJ_PlayerWatchUI.generated.h"

/**
 *
 */
UCLASS()
class WOOGA_API USJ_PlayerWatchUI : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	// 불의 발견
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* FireDiscoveryIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* FireDiscoveryClear;

	// 채집
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* CollectIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* CollectClear;

	// 주먹도끼
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* HandAxIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* HandAxClear;

	// 불의 사용
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* FireUseIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* FireUseClear;

	// 슴베찌르개
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* SpearIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* SpearClear;

	// 움집
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UImage* HutIcon;

	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Animation", meta = (BindWidgetAnim), Transient)
		class UWidgetAnimation* HutClear;

	// 배고픔 게이지
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = "Image", meta = (BindWidget))
		class UProgressBar* hungryGaze;

	class AVR_Player* player;
	class ASJ_WoogaGameModeBase* gameMode;

	void FireDiscovery();

	UPROPERTY()
	float gazePer;
	UPROPERTY()
	float gazeTime;

	bool isplay;
};
