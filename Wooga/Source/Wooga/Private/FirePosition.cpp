// Fill out your copyright notice in the Description page of Project Settings.


#include "FirePosition.h"
#include "VR_Player.h"
#include "FireRock.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFirePosition::AFirePosition()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	boxComp->SetupAttachment(RootComponent);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(boxComp);

	outLine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OutLine"));
	outLine->SetupAttachment(meshComp);

	FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FX"));
	FX->SetupAttachment(boxComp);
}

// Called when the game starts or when spawned
void AFirePosition::BeginPlay()
{
	Super::BeginPlay();
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	fireRock = Cast<AFireRock>(UGameplayStatics::GetActorOfClass(GetWorld(), AFireRock::StaticClass()));

	outLine->SetVisibility(false);

	FX->SetHiddenInGame(true);
}

// Called every frame
void AFirePosition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (fireRock->overlabCount >= 7)
	{
		if (bisFire == false)
		{
			// Sound

			location = this->GetActorLocation();
			rotation = this->GetActorRotation();

			UAudioComponent* MySound = UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SoundBase, location, rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy);

			FX->SetHiddenInGame(false);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), emberFactory, GetActorLocation() + FVector(0.f, 0.0f, 0.f));
			bisFire = true;
		}
	}
}

