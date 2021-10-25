// Fill out your copyright notice in the Description page of Project Settings.


#include "FireEvent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFireEvent::AFireEvent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	planeComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane Component"));
	SetRootComponent(planeComp);

	skelComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skel Component"));
	skelComp->SetupAttachment(planeComp);
}

// Called when the game starts or when spawned
void AFireEvent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireEvent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

