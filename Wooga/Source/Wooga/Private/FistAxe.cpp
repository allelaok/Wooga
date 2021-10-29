// Fill out your copyright notice in the Description page of Project Settings.


#include "FistAxe.h"
#include "DetachRock.h"
#include "HalfRock.h"
#include "VR_Player.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AFistAxe::AFistAxe()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	fist = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Fist"));
	SetRootComponent(fist);

	halfRock = CreateDefaultSubobject<UChildActorComponent>(TEXT("HalfRock"));
	halfRock->SetupAttachment(fist);

	rock2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock2"));
	rock2->SetupAttachment(fist);

	rock3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock3"));
	rock3->SetupAttachment(fist);

	rock4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock4"));
	rock4->SetupAttachment(fist);

	rock5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock5"));
	rock5->SetupAttachment(fist);

	rock6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock6"));
	rock6->SetupAttachment(fist);

	rock7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock7"));
	rock7->SetupAttachment(fist);

	rock8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock8"));
	rock8->SetupAttachment(fist);

	rock9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock9"));
	rock9->SetupAttachment(fist);

	handHologramL = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandHologramL"));
	handHologramL->SetupAttachment(fist);

	handHologramR = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandHologramR"));
	handHologramR->SetupAttachment(fist);

	fakeHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FakeHand"));
	fakeHand->SetupAttachment(fist);

	offMaterial = CreateDefaultSubobject<UMaterialInstance>(TEXT("Off Material"));

	onMaterial = CreateDefaultSubobject<UMaterialInstance>(TEXT("On Material"));
}

// Called when the game starts or when spawned
void AFistAxe::BeginPlay()
{
	Super::BeginPlay();

	fist->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock2->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock3->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock4->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock5->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock6->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock7->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock8->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);

	detachRock = Cast<ADetachRock>(UGameplayStatics::GetActorOfClass(GetWorld(), ADetachRock::StaticClass()));
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	//rock2->SetMaterial(0, onMaterial);

	handHologramL->SetHiddenInGame(false);
	handHologramR->SetHiddenInGame(true);
	fakeHand->SetHiddenInGame(true);
}

// Called every frame
void AFistAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//hr = Cast<AHalfRock>(UGameplayStatics::GetActorOfClass(GetWorld(), AHalfRock::StaticClass()));

	currentTime += DeltaTime;
	if (bisOverlab == true)
	{
		myPos = FMath::Lerp(myPos, returnKnockbackPos, 5.f * GetWorld()->DeltaTimeSeconds);
		player->leftHand->SetRelativeLocation(myPos);
		// �����
		if (FVector::Dist(myPos, returnKnockbackPos) < 1.f)
		{
			bisOverlab = false;
		}
	}
}

void AFistAxe::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (currentTime >= 1.f)
	{
		if (OtherActor == detachRock)
		{
			// Nuckback
			myPos = player->leftHand->GetRelativeLocation();
			knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
			myPos = knockbackPos;
			player->leftHand->SetRelativeLocation(myPos);
			rock2->SetMaterial(0, onMaterial);
			bisOverlab = true;

			childRock = Cast< AHalfRock>(halfRock->GetChildActor());
			childRock->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			bisD1 = true;

			halfRockComp = Cast<UStaticMeshComponent>(childRock->GetDefaultSubobjectByName(TEXT("halfRock")));
			halfRockComp->SetSimulatePhysics(true);
			halfRockComp->SetEnableGravity(true);
			currentTime = 0.f;
		}

		if (bisD1 == true)
		{
			if (OverlappedComp == rock2 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock2->SetSimulatePhysics(true);
				rock2->SetEnableGravity(true);
				rock2->SetMaterial(0, offMaterial);
				rock3->SetMaterial(0, onMaterial);
				rock2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock2->DetachFromParent(true);
				currentTime = 0.f;

				bisD2 = true;

			}
		}

		if (bisD2 == true)
		{
			if (OverlappedComp == rock3 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock3->SetSimulatePhysics(true);
				rock3->SetEnableGravity(true);
				rock3->SetMaterial(0, offMaterial);
				rock4->SetMaterial(0, onMaterial);
				rock3->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock3->DetachFromParent(true);
				currentTime = 0.f;

				bisD3 = true;

			}
		}

		if (bisD3 == true)
		{
			if (OverlappedComp == rock4 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock4->SetSimulatePhysics(true);
				rock4->SetEnableGravity(true);
				rock4->SetMaterial(0, offMaterial);
				rock5->SetMaterial(0, onMaterial);
				rock4->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock4->DetachFromParent(true);
				currentTime = 0.f;

				bisD4 = true;

			}
		}

		if (bisD4 == true)
		{
			if (OverlappedComp == rock5 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock5->SetSimulatePhysics(true);
				rock5->SetEnableGravity(true);
				rock5->SetMaterial(0, offMaterial);
				rock6->SetMaterial(0, onMaterial);
				rock5->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock5->DetachFromParent(true);
				currentTime = 0.f;

				bisD5 = true;

			}
		}

		if (bisD5 == true)
		{
			if (OverlappedComp == rock6 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock6->SetSimulatePhysics(true);
				rock6->SetEnableGravity(true);
				rock6->SetMaterial(0, offMaterial);
				rock7->SetMaterial(0, onMaterial);
				rock6->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock6->DetachFromParent(true);
				currentTime = 0.f;

				bisD6 = true;

			}
		}

		if (bisD6 == true)
		{
			if (OverlappedComp == rock7 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock7->SetSimulatePhysics(true);
				rock7->SetEnableGravity(true);
				rock7->SetMaterial(0, offMaterial);
				rock8->SetMaterial(0, onMaterial);
				rock7->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock7->DetachFromParent(true);
				currentTime = 0.f;

				bisD7 = true;

			}
		}

		if (bisD7 == true)
		{
			if (OverlappedComp == rock8 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock8->SetSimulatePhysics(true);
				rock8->SetEnableGravity(true);
				rock8->SetMaterial(0, offMaterial);
				rock9->SetMaterial(0, onMaterial);
				rock8->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock8->DetachFromParent(true);
				currentTime = 0.f;

				bisD8 = true;

			}
		}

		if (bisD8 == true)
		{
			if (OverlappedComp == rock9 && OtherComp == halfRockComp)
			{
				// Nuckback
				myPos = player->leftHand->GetRelativeLocation();
				knockbackPos = player->leftHand->GetRelativeLocation() + FVector(1.f, 0.f, 1.f) * -3.f;
				myPos = knockbackPos;
				player->leftHand->SetRelativeLocation(myPos);
				bisOverlab = true;

				rock9->SetSimulatePhysics(true);
				rock9->SetEnableGravity(true);
				rock9->SetMaterial(0, offMaterial);
				rock9->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				rock9->DetachFromParent(true);
				currentTime = 0.f;

				bisD9 = true;
			}
		}
	}
	
}

