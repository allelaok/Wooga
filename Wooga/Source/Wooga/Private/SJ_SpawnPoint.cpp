// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_SpawnPoint.h"

// Sets default values
ASJ_SpawnPoint::ASJ_SpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASJ_SpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_SpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

