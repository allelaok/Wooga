// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Wooga.h"
#include "GameFramework/Actor.h"
#include "SJ_InformUIPannel.generated.h"

UCLASS()
class WOOGA_API ASJ_InformUIPannel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_InformUIPannel();

	UPROPERTY(EditAnywhere, Category = UI)
	class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = UI)
	class UWidgetComponent* informUI;

	UPROPERTY(EditAnywhere, Category = UI)
	class UBoxComponent* range;

	UPROPERTY(EditAnywhere, Category = UI)
	class UStaticMeshComponent* informMark;

	UPROPERTY(EditAnywhere, Category = UI)
	class UParticleSystemComponent* informFX;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void  RangeIn(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = UI)
		TSubclassOf<class ASJ_InformUICreate> informUICreate;

	class ASJ_WoogaGameModeBase* gameModeBase;

	FVector startRot = FVector(0.0f, -90.0f, 0.0f);
	FVector endRot = FVector(180.0f, -90.0f, 0.0f);

	FVector startPos = FVector(0.0f, 0.0f, 0.0f);
	FVector endPos = FVector(0.0f, 0.0f, 100.0f);

	float RunningTime;

	bool isTrigger;

	class AVR_Player* player;
	class ASJ_Actor_TitleUI* titleUI;
	UPROPERTY(EditAnywhere, Category = UI)
	TSubclassOf<class ASJ_Actor_TitleUI> bpCollectTitleUI;
};
