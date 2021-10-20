// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_Hologram.h"
#include <Components/StaticMeshComponent.h>
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ASJ_Hologram::ASJ_Hologram()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComp);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	meshComp->SetupAttachment(rootComp);
	meshComp->CreateDynamicMaterialInstance(0);
}

// Called when the game starts or when spawned
void ASJ_Hologram::BeginPlay()
{
	Super::BeginPlay();
	
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	float playerX = player->GetActorLocation().X;
	float playerY = player->GetActorLocation().Y;
	float playerZ = player->GetActorLocation().Z;

	FVector p = FVector(playerX + 300, playerY, playerZ);

	SetActorLocation(p);

	FVector dir = player->GetActorLocation() - GetActorLocation();
	dir.Normalize();

	SetActorRotation(dir.Rotation());
}

// Called every frame
void ASJ_Hologram::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 홀로그램 생성
	createTime += DeltaTime;

	if (createTime >= 1.0f)
	{
		return;
	}
	else
	{
		startParam = FMath::Lerp(-1.0f, 1.0f, createTime * 0.5f);

		meshComp->SetScalarParameterValueOnMaterials(TEXT("Dissolve"), startParam);
	}

	destroyTime += DeltaTime;

	if (destroyTime >= 4.0f)
	{

		downTime += DeltaTime;

		if (downTime >= 1.0f)
		{
			return;
		}
		else
		{
			destroyParam = FMath::Lerp(1.0f, -1.0f, downTime * 0.5f);

			meshComp->SetScalarParameterValueOnMaterials(TEXT("Dissolve"), destroyParam);
		}
	}
}

void ASJ_Hologram::CreateHologram()
{
}

void ASJ_Hologram::DestroyHologram()
{
}

