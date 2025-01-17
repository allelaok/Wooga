// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_KnoweldgePoint.h"
#include <Components/StaticMeshComponent.h>
#include <Kismet/GameplayStatics.h>
#include "VR_Player.h"
#include <Components/WidgetComponent.h>

// Sets default values
ASJ_KnoweldgePoint::ASJ_KnoweldgePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComp);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	meshComp->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ASJ_KnoweldgePoint::BeginPlay()
{
	Super::BeginPlay();
	
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
}

// Called every frame
void ASJ_KnoweldgePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector me = GetActorLocation();
	FVector target = player->playerWatch->GetComponentLocation();
	FVector dir = target - me;
	dir.Normalize();

	float speed = 100.0f;

	FVector p = me + dir * speed * DeltaTime;

	SetActorLocation(p);

	FVector startScale = GetActorScale3D();
	FVector endScale = FVector(0.1f, 0.1f, 0.1f);

	FVector setScale = FMath::Lerp(startScale, endScale, DeltaTime);
	SetActorScale3D(setScale);
}

