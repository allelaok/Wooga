// Fill out your copyright notice in the Description page of Project Settings.


#include "LastHouse.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ALastHouse::ALastHouse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(sceneComponent);

	tree1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree1"));
	tree1->SetupAttachment(sceneComponent);

	tree2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree2"));
	tree2->SetupAttachment(sceneComponent);

	tree3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree3"));
	tree3->SetupAttachment(sceneComponent);

	tree4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree4"));
	tree4->SetupAttachment(sceneComponent);

	tree5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree5"));
	tree5->SetupAttachment(sceneComponent);

	tree6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tree6"));
	tree6->SetupAttachment(sceneComponent);
}

// Called when the game starts or when spawned
void ALastHouse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALastHouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALastHouse::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

