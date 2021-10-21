// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_GuidLine.generated.h"

UCLASS()
class WOOGA_API ASJ_GuidLine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_GuidLine();

	UPROPERTY(EditDefaultsOnly, Category = Guide)
	class USceneComponent* root;

	UPROPERTY(EditDefaultsOnly, Category = Guide)
	class UStaticMeshComponent* line1;

	UPROPERTY(EditDefaultsOnly, Category = Guide)
		class UStaticMeshComponent* line2;

	UPROPERTY(EditDefaultsOnly, Category = Guide)
		class UStaticMeshComponent* line3;

	UPROPERTY(EditDefaultsOnly, Category = Guide)
		class UStaticMeshComponent* line4;

	UPROPERTY(EditDefaultsOnly, Category = Guide)
		class UStaticMeshComponent* line5;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
