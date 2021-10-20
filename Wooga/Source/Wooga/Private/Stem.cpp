// Fill out your copyright notice in the Description page of Project Settings.

#include "Stem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include <Components/SphereComponent.h>

// Sets default values
AStem::AStem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Component"));
	SetRootComponent(boxComp);
	boxComp->SetSimulatePhysics(true);
	boxComp->SetEnableGravity(false);

	base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Component"));
	base->SetupAttachment(boxComp);

	cable = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Cable Component"));
	cable->SetupAttachment(boxComp);

	baseRope = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("baseRope Component"));
	baseRope->SetupAttachment(boxComp);
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

