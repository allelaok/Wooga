// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Stem.generated.h"

UCLASS()
class WOOGA_API AStem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StemSetting)
		class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StemSetting)
		class UStaticMeshComponent* startC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StemSetting)
		class UStaticMeshComponent* endC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StemSetting)
		class UPhysicsConstraintComponent* rope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StemSetting)
		class UCableComponent* cable;

	UPROPERTY()
		class AStick* stick;
};
