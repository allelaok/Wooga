// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireStraw.generated.h"

UCLASS()
class WOOGA_API AFireStraw : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireStraw();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMeshComponent* meshComp;

	UPROPERTY()
		class AFirePosition* firePosition;

	UPROPERTY()
		class AVR_Player* player;

	UPROPERTY(EditAnywhere, Category = "Fire")
		class UParticleSystem* smogFactory;

	UPROPERTY(EditAnywhere, Category = "Fire")
		class UParticleSystem* fireFactory;

		bool bisOverlab = false;
		bool bisSmog = false;
		bool bisFire = false;

		float smogCurrentTime = 0;
		float fireCurrentTime = 0;

		bool isClear;
};
