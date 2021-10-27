// Fill out your copyright notice in the Description page of Project Settings.


#include "HalfRock.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AHalfRock::AHalfRock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	halfRock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("halfRock"));
	SetRootComponent(halfRock);
}

// Called when the game starts or when spawned
void AHalfRock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHalfRock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

