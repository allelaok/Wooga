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

	UPROPERTY(EditAnywhere, Category = UI)
		class USceneComponent* rootComp;

	UPROPERTY(VisibleDefaultsOnly, Category = Controller)
		class USceneComponent* controllerLRootComp;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* bodyL;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* gribL;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* handleL;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* triggerL;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* buttonL;

	UPROPERTY(VisibleDefaultsOnly, Category = Controller)
		class USceneComponent* controllerRRootComp;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* bodyR;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* gribR;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* handleR;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* triggerR;

	UPROPERTY(EditAnywhere, Category = Controller)
		class UStaticMeshComponent* buttonR;

	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* widgetComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class ASJ_WoogaGameModeBase* gameModeBase;

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
