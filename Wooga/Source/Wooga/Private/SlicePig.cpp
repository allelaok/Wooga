// Fill out your copyright notice in the Description page of Project Settings.


#include "SlicePig.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include <Kismet/GameplayStatics.h>


// Sets default values
ASlicePig::ASlicePig()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(rootComp);

	pigHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pig Head"));
	pigHead->SetupAttachment(rootComp);

	top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top"));
	

	bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("bottom"));
	

	inside = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Inside"));
	
}

// Called when the game starts or when spawned
void ASlicePig::BeginPlay()
{
	Super::BeginPlay();
	
	topPos = top->GetRelativeLocation();
	bottomPos = bottom->GetRelativeLocation();

	targetTopPos = top->GetRelativeLocation() + FVector(0.f, 0.f, 20.f) * 3.f;
	targetBottomPos = bottom->GetRelativeLocation() + FVector(0.f, 0.f, -20.f) * 3.f;
	
}

// Called every frame
void ASlicePig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	topPos = FMath::Lerp(topPos, targetTopPos, GetWorld()->DeltaTimeSeconds * 2);
	bottomPos = FMath::Lerp(bottomPos, targetBottomPos, GetWorld()->DeltaTimeSeconds * 2);
	top->SetRelativeLocation(topPos);
	bottom->SetRelativeLocation(bottomPos);

}

