// Fill out your copyright notice in the Description page of Project Settings.


#include "FistAxe.h"

// Sets default values
AFistAxe::AFistAxe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFistAxe::BeginPlay()
{
	Super::BeginPlay();
	
	fist->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock1->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock2->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock3->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock4->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock5->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock6->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock7->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock8->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);

}

// Called every frame
void AFistAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFistAxe::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

