// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Apple.generated.h"

class UNiagaraSystem;

UCLASS()
class WOOGA_API AApple : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AApple();

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

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMesh* mesh2;

	UPROPERTY(EditAnywhere, Category = Outline)
		class UStaticMeshComponent* outLine;

	// 소켓에 넣을떄 Offset 값을 조정
	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		FVector grabOffset;

 	UPROPERTY(EditAnywhere, Category = PickUPSettings)
 	UNiagaraSystem* explosion;

	// sound
	const UObject* WorldContextObject;

	UPROPERTY(EditAnywhere, Category = "Sound")
		USoundBase* SoundBase;

	UPROPERTY(EditAnywhere, Category = "Sound")
		USoundBase* SoundBase2;

	UPROPERTY()
		FVector location;
	UPROPERTY()
		FRotator rotation;

	float VolumeMultiplier = 1.f;
	float PitchMultiplier = 1.f;
	float StartTime = 0.f;
	class USoundAttenuation* AttenuationSettings;
	USoundConcurrency* ConcurrencySettings;
	bool bAutoDestroy = false;
	bool bisgrab = false;
	bool bisEat = false;
	int32 overlabCount = 0;

	bool bisEatComplete;
};
