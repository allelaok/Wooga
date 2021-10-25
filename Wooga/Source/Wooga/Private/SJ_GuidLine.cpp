// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_GuidLine.h"
#include <Components/StaticMeshComponent.h>

// Sets default values
ASJ_GuidLine::ASJ_GuidLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComp);
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

