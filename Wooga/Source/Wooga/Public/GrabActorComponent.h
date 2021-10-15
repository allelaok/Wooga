// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GrabActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WOOGA_API UGrabActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

private:
	void ShowGrabLine();
	void HideGrabLine();
	void RightDrawGrabLine();
	void LeftDrawGrabLine();
	void RightGrabAction();
	void RightReleaseAction();
	void LeftGrabAction();
	void LeftReleaseAction();
	void GripFireRock(AActor* grabActor);

	bool bIsShowing = false;
	class AVR_Player* player;
	class AFireRock* fireRock;
	FHitResult grabObject;

public:
	UPROPERTY(EditAnywhere, Category = AAA)
		FVector grabOffset;

	UPROPERTY(EditAnywhere, Category = AAA)
		float grabRange = 15;
};
