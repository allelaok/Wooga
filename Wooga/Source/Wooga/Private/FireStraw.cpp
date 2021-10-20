// Fill out your copyright notice in the Description page of Project Settings.


#include "FireStraw.h"
#include "VR_Player.h"
#include "FirePosition.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AFireStraw::AFireStraw()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	boxComp->SetupAttachment(RootComponent);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(boxComp);
}

// Called when the game starts or when spawned
void AFireStraw::BeginPlay()
{
	Super::BeginPlay();
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &AFireStraw::OnCollisionEnter);
	//firePosition = Cast<AFirePosition>(UGameplayStatics::GetActorOfClass(GetWorld(), AFirePosition::StaticClass()));
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	isClear = false;
}

// Called every frame
void AFireStraw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (bisOverlab == true)
	{
		smogCurrentTime += GetWorld()->DeltaTimeSeconds;
		fireCurrentTime += GetWorld()->DeltaTimeSeconds;

		if (bisSmog == false)
		{
			if (smogCurrentTime >= 5.f)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), smogFactory, GetActorLocation() + FVector(0.f, 0.0f, 0.f));
				bisSmog = true;
			}
		}

		if (bisFire == false)
		{
			if (fireCurrentTime >= 10.f)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), fireFactory, GetActorLocation() + FVector(0.f, 0.0f, 0.f));
				bisFire = true;
				isClear = true;
			}
		}
	}

}

void AFireStraw::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	firePosition = Cast<AFirePosition>(OtherActor);

	if (firePosition)
	{
		if (firePosition->bisFire == true)
		{
			if (player->headComp)
			{
				bisOverlab = true;
			}
		}
	}
}

