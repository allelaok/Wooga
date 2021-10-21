// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_GuidLine.h"
#include <Components/StaticMeshComponent.h>

// Sets default values
ASJ_GuidLine::ASJ_GuidLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(root);

	line1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line1"));
	line1->SetupAttachment(root);

	line2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line2"));
	line2->SetupAttachment(root);

	line3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line3"));
	line3->SetupAttachment(root);

	line4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line4"));
	line4->SetupAttachment(root);

	line5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line5"));
	line5->SetupAttachment(root);
}

// Called when the game starts or when spawned
void ASJ_GuidLine::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorHiddenInGame(true);
}

// Called every frame
void ASJ_GuidLine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

