// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WOOGA_API UMoveActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float moveSpeed = 200.f;
	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float rotateSpeed = 50.f;

private:
	void MoveHorizontal(float value);
	void MoveVertical(float value);
	void RotateHorizontal(float value);
	void LeftGripOn();
	void LeftGripOff();
	void RightGripOn();
	void RightGripOff();

	class AVR_Player* player;
	class ASJ_WoogaGameModeBase* gameMode;

	FRotator hmdRotation;
	FVector hmdLocation;
};
