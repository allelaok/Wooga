// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabActorComponent.h"
#include "VR_Player.h"
#include "FireRock.h"
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

	//fireRock = Cast<AFireRock>(fireRock);
}


// Called every frame
void UGrabActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsShowing)
	{
		RightDrawGrabLine();
	}

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

		// 오른손 쥐는 애니메이션
		
	}
	else
	{
		grabObject = FHitResult();
	}
	DrawDebugSphere(GetWorld(), startPos, 15.f, 30, FColor::Green, false, -1, 0, 1);
}

void UGrabActorComponent::LeftDrawGrabLine()
{

}

void UGrabActorComponent::RightGrabAction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TRIGGER IN!!")));
	RightDrawGrabLine();
	
	AActor* grabActor = grabObject.GetActor();

	if (grabActor == nullptr)
	{
		return;
	}

	GripFireRock(grabActor);
}

void UGrabActorComponent::RightReleaseAction()
{

}

void UGrabActorComponent::LeftGrabAction()
{

}

void UGrabActorComponent::LeftReleaseAction()
{

}

void UGrabActorComponent::GripFireRock(AActor* grabActor)
{
	FString fr = grabActor->GetName();
	if (fireRock == nullptr)
	{
		if(fr.Contains("FireRock"))
		{
		fireRock = Cast<AFireRock>(grabActor);

		if(fireRock)
		{
		//fireRock->SetActorHiddenInGame(false);
		//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

		// 손에 붙이기
		fireRock->boxComp->SetSimulatePhysics(false);
		fireRock->AttachToComponent(player->rightHand, attachRules, TEXT("GrabPoint"));
		// 오브젝트를 잡았을때 위치 잡기
		fireRock->boxComp->SetRelativeLocation((fireRock->grabOffset));

		fireRock->boxComp->SetEnableGravity(false);

		// 왼손 쥐는 애니메이션
		player->handComp->targetGripValueLeft = 0.7f;
		}
		}
	}
}


