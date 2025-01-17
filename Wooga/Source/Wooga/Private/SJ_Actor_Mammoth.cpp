// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_Actor_Mammoth.h"
#include <Components/BoxComponent.h>
#include "SJ_Actor_MammothSpawnDestroy.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ASJ_Actor_Mammoth::ASJ_Actor_Mammoth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBox"));
	SetRootComponent(rootBox);

	mammoth = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mammoth"));
	mammoth->SetupAttachment(rootBox);
}

// Called when the game starts or when spawned
void ASJ_Actor_Mammoth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_Actor_Mammoth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	range = Cast<ASJ_Actor_MammothSpawnDestroy>(UGameplayStatics::GetActorOfClass(GetWorld(), ASJ_Actor_MammothSpawnDestroy::StaticClass()));

	FVector me = GetActorLocation();
	FVector tar = range->destroyRange->GetComponentLocation();
	FVector dir = tar - me;
	dir.Normalize();

	FVector p = me + dir * DeltaTime * speed;

	SetActorLocation(p);
}

