// Fill out your copyright notice in the Description page of Project Settings.

#include "Stem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Apple.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include <Components/SphereComponent.h>

// Sets default values
AStem::AStem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Component"));
	SetRootComponent(boxComp);
	boxComp->SetSimulatePhysics(false);
	boxComp->SetEnableGravity(false);

	top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top"));
	top->SetSimulatePhysics(false);
	top->SetEnableGravity(false);

	mid = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mid"));
	mid->SetSimulatePhysics(false);
	mid->SetEnableGravity(false);

	bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom"));
	bottom->SetSimulatePhysics(false);
	bottom->SetEnableGravity(false);

	constraint1 = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("Constraint1"));

	constraint2 = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("Constraint2"));
}

// Called when the game starts or when spawned
void AStem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

