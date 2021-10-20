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
		// Capsule 몸체
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UCapsuleComponent* capsuleComp;
		// Camera 위치
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* cameraRoot;
		// Main Camera
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UCameraComponent* playerCam;
		UPROPERTY(EditAnywhere, Category = PickUPSettings)
			class UBoxComponent* headComp;
		// LeftController
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
			class UMotionControllerComponent* leftController;
		// RightController
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
			class UMotionControllerComponent* rightController;
		// 왼손
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USkeletalMeshComponent* leftHand;
		// 왼손 그랩 포인트
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* leftHandLoc;
		// 오른손
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USkeletalMeshComponent* rightHand;
		// 오른손 그랩 포인트
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class USceneComponent* rightHandLoc;
		// 왼손 그랩 TextLog
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UTextRenderComponent* leftLog;
		// 오른손 그랩 TextLog
		UPROPERTY(EditAnywhere, Category = PlayerSettings)
			class UTextRenderComponent* rightLog;


		// 액터 컴포넌트들 추가하기
		UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
			class UMoveActorComponent* moveComp;

		// 손 애니메이션 추가
		UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
			class UHandActorComponent* handComp;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = PlayerSettings)
			class UGrabActorComponent* grabComp;

		UPROPERTY()
			class ASJ_UIPannel* uiPannel;

		void TurnOff();

		UPROPERTY(VisibleDefaultsOnly, Category = state)
			bool isClose;

public:
	void ResetHMD();

	FRotator hmdRotation;
	FVector hmdLocation;

	FRotator hmdRotation2;
	FVector hmdLocation2;

	float change;
};
