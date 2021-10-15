// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VR_Player.generated.h"

UCLASS()
class WOOGA_API AVR_Player : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVR_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
		// Capsule ¸öÃ¼
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UCapsuleComponent* capsuleComp;
		// Camera À§Ä¡
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* cameraRoot;
		// Main Camera
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UCameraComponent* playerCam;
		// LeftController
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
			class UMotionControllerComponent* leftController;
		// RightController
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
			class UMotionControllerComponent* rightController;
		// ¿Þ¼Õ
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USkeletalMeshComponent* leftHand;
		// ¿Þ¼Õ ±×·¦ Æ÷ÀÎÆ®
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* leftHandLoc;
		// ¿À¸¥¼Õ
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USkeletalMeshComponent* rightHand;
		// ¿À¸¥¼Õ ±×·¦ Æ÷ÀÎÆ®
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* rightHandLoc;
		// ¿Þ¼Õ ±×·¦ TextLog
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UTextRenderComponent* leftLog;
		// ¿À¸¥¼Õ ±×·¦ TextLog
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UTextRenderComponent* rightLog;


		// ¾×ÅÍ ÄÄÆ÷³ÍÆ®µé Ãß°¡ÇÏ±â
		UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
		class UMoveActorComponent* moveComp;

private:
	void ResetHMD();

	FRotator hmdRotation;
	FVector hmdLocation;		
};
