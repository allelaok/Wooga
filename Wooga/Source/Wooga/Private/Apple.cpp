// Fill out your copyright notice in the Description page of Project Settings.


#include "Apple.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AApple::AApple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);

	// 물리 관련 설정
	boxComp->SetSimulatePhysics(true);
	boxComp->SetEnableGravity(false);
	boxComp->SetCollisionProfileName(TEXT("PickUp"));

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(boxComp);

	outLine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Outline"));
	outLine->SetupAttachment(meshComp);
	outLine->SetCollisionProfileName(TEXT("NoCollision"));
}

// Called when the game starts or when spawned
void AApple::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AApple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

