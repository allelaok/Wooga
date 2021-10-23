// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Wooga.h"
#include "GameFramework/Actor.h"
#include "SJ_HowToGrabUIActor.generated.h"

UCLASS()
class WOOGA_API ASJ_HowToGrabUIActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASJ_HowToGrabUIActor();

	// ∑Á∆Æ
	UPROPERTY(VisibleDefaultsOnly, Category = Controller)
		class USceneComponent* rootComp;

	UPROPERTY(VisibleDefaultsOnly, Category = Controller)
	class USceneComponent* controllerRootComp;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* body;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* grib;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* handle;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* trigger;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* button;

	UPROPERTY(EditAnywhere, Category = UI)
	class UWidgetComponent* pressUI;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AVR_Player* player;

	EBlinkState blink;
	EBlinkState GetState();
	void SetState(EBlinkState state);

	void OnOpacity();
	void PlayOpacity();
	void OffOpacity();

	float createTime;
	float startParam;

	float destroyTime;
	float destroyParam;
};
