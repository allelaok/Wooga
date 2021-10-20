// Fill out your copyright notice in the Description page of Project Settings.


#include "Stem.h"
#include "Stick.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

// Sets default values
AStem::AStem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(rootComp);

	startC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartC"));
	startC->SetupAttachment(rootComp);

	endC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndC"));
	endC->SetupAttachment(rootComp);

	rope = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("Rope"));
	rope->SetupAttachment(rootComp);

	cable = CreateDefaultSubobject<UCableComponent>(TEXT("Cable"));
	cable->SetupAttachment(endC);

	//cable->AttachToComponent(this->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
	//cable->SetupAttachment(endComp);

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

void AStem::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FString st = OtherActor->GetName();

	if (st.Contains("Stick"))
	{
		stick = Cast<AStick>(OtherActor);
		if (stick)
		{

		}
	}
}

