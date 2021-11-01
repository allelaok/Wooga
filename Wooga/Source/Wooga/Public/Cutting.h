// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cutting.generated.h"

UCLASS()
class WOOGA_API ACutting : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACutting();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMeshComponent* handleFA;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class USkeletalMeshComponent* grabR;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMeshComponent* line;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		class UPhysicsConstraintComponent* constraint;
};
