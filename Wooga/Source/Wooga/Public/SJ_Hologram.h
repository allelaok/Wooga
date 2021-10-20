// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_Hologram.generated.h"

UCLASS()
class WOOGA_API ASJ_Hologram : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_Hologram();

	UPROPERTY(VisibleAnywhere, Category = Hologram)
		class USceneComponent* rootComp;

	UPROPERTY(VisibleAnywhere, Category = Hologram)
		class UStaticMeshComponent* meshComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AVR_Player* player;

	float createTime;
	float RunningTime;

	float startParam;
	float destroyParam;

	float destroyTime;
	float downTime;

	FTimerHandle createTimer;
	FTimerHandle destroyTimer;

	void CreateHologram();
	void DestroyHologram();
};
