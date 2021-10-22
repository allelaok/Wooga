// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SJ_InformUICreate.generated.h"

UCLASS()
class WOOGA_API ASJ_InformUICreate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASJ_InformUICreate();

	UPROPERTY(EditAnywhere, Category = UI)
		class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = UI)
		class UStaticMeshComponent* planeMesh;

	UPROPERTY(EditAnywhere, Category = UI)
		class UWidgetComponent* settingUI;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

};
