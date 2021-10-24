// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabActorComponent.h"
#include "VR_Player.h"
#include "Apple.h"
#include "Stick.h"
#include "Stem.h"
#include "FireRock.h"
#include "FirePosition.h"
#include "DrawDebugHelpers.h"
#include "HandActorComponent.h"
#include "Components/BoxComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UGrabActorComponent::UGrabActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UGrabActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// Player Casting
	player = Cast<AVR_Player>(GetOwner());


	stemR = Cast<AStem>(UGameplayStatics::GetActorOfClass(GetWorld(), AStem::StaticClass()));
	stemL = Cast<AStem>(UGameplayStatics::GetActorOfClass(GetWorld(), AStem::StaticClass()));

}


// Called every frame
void UGrabActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UGrabActorComponent::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("RightGrip", IE_Pressed, this, &UGrabActorComponent::RightGrabAction);
	PlayerInputComponent->BindAction("RightGrip", IE_Released, this, &UGrabActorComponent::RightReleaseAction);
	PlayerInputComponent->BindAction("LeftGrip", IE_Pressed, this, &UGrabActorComponent::LeftGrabAction);
	PlayerInputComponent->BindAction("LeftGrip", IE_Released, this, &UGrabActorComponent::LeftReleaseAction);
	//PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &UGrabActorComponent::Reload);

}

// 그랩 라인
void UGrabActorComponent::ShowGrabLine()
{
	bIsShowing = true;
}

void UGrabActorComponent::HideGrabLine()
{
	bIsShowing = false;
	// 잡은거 없음
	grabObject = FHitResult();
}

void UGrabActorComponent::RightDrawGrabLine()
{
	DrawDebugSphere(GetWorld(), player->rightHand->GetComponentLocation(), grabRange, 30, FColor::Green, false, -1, 0, 1);
	FHitResult hitInfo;
	FVector startPos = player->rightHand->GetComponentLocation();

	FCollisionObjectQueryParams objParams;
	objParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	objParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(player);
	player->handComp->targetGripValueRight = 1.0f;

	if (GetWorld()->SweepSingleByObjectType(hitInfo, startPos, startPos, FQuat::Identity, objParams, FCollisionShape::MakeSphere(grabRange), queryParams))
	{
		grabObject = hitInfo;
	}
	else
	{
		grabObject = FHitResult();
	}

}

void UGrabActorComponent::LeftDrawGrabLine()
{
	DrawDebugSphere(GetWorld(), player->leftHand->GetComponentLocation(), grabRange, 30, FColor::Green, false, -1, 0, 1);
	FHitResult hitInfo;
	FVector startPos = player->leftHand->GetComponentLocation();

	FCollisionObjectQueryParams objParams;
	objParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	objParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(player);
	player->handComp->targetGripValueLeft = 1.0f;

	if (GetWorld()->SweepSingleByObjectType(hitInfo, startPos, startPos, FQuat::Identity, objParams, FCollisionShape::MakeSphere(grabRange), queryParams))
	{
		grabObject = hitInfo;
	}
	else
	{
		grabObject = FHitResult();
	}
}

void UGrabActorComponent::RightGrabAction()
{
	bisRightGrab = true;
	RightDrawGrabLine();
	AActor* grabActor = grabObject.GetActor();

	if (grabActor == nullptr)
	{
		return;
	}

	RGripFireRock(grabActor);
	RGripFirePosition(grabActor);
	RGripApple(grabActor);
	RGripStick(grabActor);

}

void UGrabActorComponent::RightReleaseAction()
{
	if (bisRightGrab == true)
	{
		if (fireRockR)
		{
			fireRockR->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			fireRockR->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			fireRockR->boxComp->SetSimulatePhysics(true);
			fireRockR->outLine->SetVisibility(true);

			fireRockR = nullptr;
			bisRightGrab = false;

			// 오른손 피는 애니메이션
			player->handComp->targetGripValueRight = 0.0f;
		}


		if (firePositionR)
		{
			firePositionR->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			firePositionR->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			firePositionR->boxComp->SetSimulatePhysics(true);

			firePositionR = nullptr;
			bisLeftGrab = false;

			// 오른손 피는 애니메이션
			player->handComp->targetGripValueRight = 0.0f;
		}

		if (appleR)
		{
			appleR->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			appleR->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			appleR->boxComp->SetSimulatePhysics(true);

			appleR = nullptr;
			bisLeftGrab = false;

			// 오른손 피는 애니메이션
			player->handComp->targetGripValueRight = 0.0f;
		}

		//if (stemR)
		//{
		//	stemR->boxComp->SetEnableGravity(true);
		//	// 그 자리에서 떨어지게
		//	stemR->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		//	stemR->boxComp->SetSimulatePhysics(true);

		//	stemR = nullptr;
		//	bisLeftGrab = false;
		//}

		if (stickR)
		{
			stickR->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			stickR->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			stickR->boxComp->SetSimulatePhysics(false);
			stickR->boxComp->SetEnableGravity(false);

			stickR = nullptr;
			bisLeftGrab = false;
			bisStickR = false;

			// 오른손 피는 애니메이션
			player->handComp->targetGripValueRight = 0.0f;
		}
		
	}
	{
		// 오른손 피는 애니메이션
		player->handComp->targetGripValueRight = 0.0f;
	}
}

void UGrabActorComponent::LeftGrabAction()
{
	bisLeftGrab = true;
	LeftDrawGrabLine();

	AActor* grabActor = grabObject.GetActor();

	if (grabActor == nullptr)
	{
		return;
	}

	LGripFireRock(grabActor);
	LGripFirePosition(grabActor);
	LGripApple(grabActor);
	LGripStick(grabActor);
}

void UGrabActorComponent::LeftReleaseAction()
{
	if (bisLeftGrab == true)
	{
		if (fireRockL)
		{
			fireRockL->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			fireRockL->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			fireRockL->boxComp->SetSimulatePhysics(true);
			fireRockL->outLine->SetVisibility(true);

			fireRockL = nullptr;
			bisLeftGrab = false;

			// 왼손 피는 애니메이션
			player->handComp->targetGripValueLeft = 0.0f;
		}

		if (firePositionL)
		{
			firePositionL->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			firePositionL->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			firePositionL->boxComp->SetSimulatePhysics(true);

			firePositionL = nullptr;
			bisLeftGrab = false;

			// 왼손 피는 애니메이션
			player->handComp->targetGripValueLeft = 0.0f;
		}

		if (appleL)
		{
			appleL->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			appleL->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			appleL->boxComp->SetSimulatePhysics(true);

			appleL = nullptr;
			bisLeftGrab = false;

			// 완손 피는 애니메이션
			player->handComp->targetGripValueLeft = 0.0f;
		}

		//if (stemL)
		//{
		//	stemL->boxComp->SetEnableGravity(true);
		//	// 그 자리에서 떨어지게
		//	stemL->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		//	stemL->boxComp->SetSimulatePhysics(true);

		//	stemL = nullptr;
		//	bisLeftGrab = false;
		//}

		if (stickL)
		{
			stickL->boxComp->SetEnableGravity(true);
			// 그 자리에서 떨어지게
			stickL->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			stickL->boxComp->SetSimulatePhysics(false);
			stickL->boxComp->SetEnableGravity(false);

			stickL = nullptr;
			bisLeftGrab = false;
			bisStickL = false;

			// 완손 피는 애니메이션
			player->handComp->targetGripValueLeft = 0.0f;
		}

	
	}
	{
		// 왼손 피는 애니메이션
		player->handComp->targetGripValueLeft = 0.0f;
	}

}

void UGrabActorComponent::RGripFireRock(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("GR"))
	{
		fireRockR = Cast<AFireRock>(grabActor);

		if (fireRockR)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			fireRockR->boxComp->SetSimulatePhysics(false);
			fireRockR->boxComp->SetEnableGravity(true);
			fireRockR->outLine->SetVisibility(false);


			fireRockR->AttachToComponent(player->rightHandLoc, attachRules, TEXT("RGrabPoint"));
			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueRight = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			fireRockR->boxComp->SetRelativeLocation((fireRockR->grabOffset));

		}
	}
	//}
}

void UGrabActorComponent::LGripFireRock(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("GR"))
	{
		fireRockL = Cast<AFireRock>(grabActor);

		if (fireRockL)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			fireRockL->boxComp->SetSimulatePhysics(false);
			fireRockL->boxComp->SetEnableGravity(true);
			fireRockL->outLine->SetVisibility(false);

			fireRockL->AttachToComponent(player->leftHandLoc, attachRules, TEXT("LGrabPoint"));
			// 왼손 쥐는 애니메이션
			player->handComp->targetGripValueLeft = 0.7f;


			// 오브젝트를 잡았을때 위치 잡기
			fireRockL->boxComp->SetRelativeLocation((fireRockL->grabOffset));
		}
	}
	//}
}

void UGrabActorComponent::RGripFirePosition(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Position"))
	{
		firePositionR = Cast<AFirePosition>(grabActor);

		if (firePositionR)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			firePositionR->boxComp->SetSimulatePhysics(false);
			firePositionR->boxComp->SetEnableGravity(true);


			firePositionR->AttachToComponent(player->rightHandLoc, attachRules, TEXT("RGrabPoint"));
			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueRight = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			firePositionR->boxComp->SetRelativeLocation((firePositionR->grabOffset));

		}
	}
}

void UGrabActorComponent::LGripFirePosition(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Position"))
	{
		firePositionL = Cast<AFirePosition>(grabActor);

		if (firePositionL)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			firePositionL->boxComp->SetSimulatePhysics(false);
			firePositionL->boxComp->SetEnableGravity(true);


			firePositionL->AttachToComponent(player->leftHandLoc, attachRules, TEXT("RGrabPoint"));
			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueLeft = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			firePositionL->boxComp->SetRelativeLocation((firePositionL->grabOffset));

		}
	}
}

void UGrabActorComponent::RGripApple(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Apple"))
	{
		appleR = Cast<AApple>(grabActor);

		if (appleR)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			appleR->boxComp->SetSimulatePhysics(false);
			appleR->boxComp->SetEnableGravity(true);

			stemR->midLoc->SetSimulatePhysics(true);
			stemR->midLoc->SetEnableGravity(true);
			stemL->midLoc->SetSimulatePhysics(true);
			stemL->midLoc->SetEnableGravity(true);

			stemR->bottomLoc->SetSimulatePhysics(true);
			stemR->bottomLoc->SetEnableGravity(true);
			stemL->bottomLoc->SetSimulatePhysics(true);
			stemL->bottomLoc->SetEnableGravity(true);


			appleR->AttachToComponent(player->rightHandLoc, attachRules, TEXT("RGrabPoint"));

			bisGrabApple = true;

			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueRight = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			appleR->boxComp->SetRelativeLocation((appleR->grabOffset));

		}
	}
}

void UGrabActorComponent::LGripApple(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Apple"))
	{
		appleL = Cast<AApple>(grabActor);

		if (appleL)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			appleL->boxComp->SetSimulatePhysics(false);
			appleL->boxComp->SetEnableGravity(true);

			stemR->midLoc->SetSimulatePhysics(true);
			stemR->midLoc->SetEnableGravity(true);
			stemL->midLoc->SetSimulatePhysics(true);
			stemL->midLoc->SetEnableGravity(true);

			stemR->bottomLoc->SetSimulatePhysics(true);
			stemR->bottomLoc->SetEnableGravity(true);
			stemL->bottomLoc->SetSimulatePhysics(true);
			stemL->bottomLoc->SetEnableGravity(true);


			appleL->AttachToComponent(player->leftHandLoc, attachRules, TEXT("LGrabPoint"));

			bisGrabApple = true;

			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueLeft = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			appleL->boxComp->SetRelativeLocation((appleL->grabOffset));

		}
	}
}

void UGrabActorComponent::RGripStem(AActor* grabActor)
{
	//FString fr = grabActor->GetName();
	///*if (fireRock == nullptr)
	//{*/
	//if (fr.Contains("Stem"))
	//{
	//	stemR = Cast<AStem>(grabActor);

	//	if (stemR)
	//	{
	//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
	//		//fireRock->SetActorHiddenInGame(false);
	//		//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
	//		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

	//		stemR->boxComp->SetSimulatePhysics(false);
	//		stemR->boxComp->SetEnableGravity(true);


	//		stemR->AttachToComponent(player->rightHandLoc, attachRules, TEXT("RGrabPoint"));
	//		// 오른손 쥐는 애니메이션
	//		player->handComp->targetGripValueRight = 0.7f;

	//		// 오브젝트를 잡았을때 위치 잡기
	//		stemR->boxComp->SetRelativeLocation((stemR->grabOffset));

	//	}
	//}
}

void UGrabActorComponent::LGripStem(AActor* grabActor)
{
	//FString fr = grabActor->GetName();
	///*if (fireRock == nullptr)
	//{*/
	//if (fr.Contains("Stem"))
	//{
	//	stemL = Cast<AStem>(grabActor);

	//	if (stemL)
	//	{
	//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
	//		//fireRock->SetActorHiddenInGame(false);
	//		//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
	//		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

	//		stemL->boxComp->SetSimulatePhysics(false);
	//		stemL->boxComp->SetEnableGravity(true);


	//		stemL->AttachToComponent(player->leftHandLoc, attachRules, TEXT("LGrabPoint"));
	//		// 오른손 쥐는 애니메이션
	//		player->handComp->targetGripValueLeft = 0.7f;

	//		// 오브젝트를 잡았을때 위치 잡기
	//		stemL->boxComp->SetRelativeLocation((stemL->grabOffset));

	//	}
	//}
}

void UGrabActorComponent::RGripStick(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Stick"))
	{
		stickR = Cast<AStick>(grabActor);

		if (stickR)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			stickR->boxComp->SetSimulatePhysics(false);
			stickR->boxComp->SetEnableGravity(false);


			stickR->AttachToComponent(player->rightHandLoc, attachRules, TEXT("RGrabPoint"));
			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueRight = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			stickR->boxComp->SetRelativeLocation((stickR->grabOffset));

			// 오른손에 stick이 있냐?
			bisStickR = true;
		}
	}
}

void UGrabActorComponent::LGripStick(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	/*if (fireRock == nullptr)
	{*/
	if (fr.Contains("Stick"))
	{
		stickL = Cast<AStick>(grabActor);

		if (stickL)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
			//fireRock->SetActorHiddenInGame(false);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			stickL->boxComp->SetSimulatePhysics(false);
			stickL->boxComp->SetEnableGravity(false);


			stickL->AttachToComponent(player->leftHandLoc, attachRules, TEXT("LGrabPoint"));
			// 오른손 쥐는 애니메이션
			player->handComp->targetGripValueLeft = 0.7f;

			// 오브젝트를 잡았을때 위치 잡기
			stickL->boxComp->SetRelativeLocation((stickL->grabOffset));

			// 오른손에 stick이 있냐?
			bisStickL = true;
		}
	}
}

