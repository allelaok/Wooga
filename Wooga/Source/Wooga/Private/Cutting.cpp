// Fill out your copyright notice in the Description page of Project Settings.


#include "Cutting.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

// Sets default values
ACutting::ACutting()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(rootComp);

	handleFA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleFA"));
	handleFA->SetupAttachment(rootComp);

	grabR = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GrabR"));
	grabR->SetupAttachment(handleFA);

	line = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line"));
	line->SetupAttachment(rootComp);

	constraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("Constraint"));
	constraint->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ACutting::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACutting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

