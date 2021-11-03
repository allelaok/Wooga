// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_Actor_MammothSpawnDestroy.h"
#include <Components/BoxComponent.h>
#include <Components/SkeletalMeshComponent.h>

// Sets default values
ASJ_Actor_MammothSpawnDestroy::ASJ_Actor_MammothSpawnDestroy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp =CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(rootComp);

	spawnRange = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnRange"));
	spawnRange->SetupAttachment(rootComp);

	destroyRange = CreateDefaultSubobject<UBoxComponent>(TEXT("DestroyRange"));
	destroyRange->SetupAttachment(rootComp);

	mammoth = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mammoth"));
	mammoth->SetupAttachment(rootComp);

}

// Called when the game starts or when spawned
void ASJ_Actor_MammothSpawnDestroy::BeginPlay()
{
	Super::BeginPlay();
	
	spawnRange->OnComponentBeginOverlap.AddDynamic(this, &ASJ_Actor_MammothSpawnDestroy::TriggerIn);

}

// Called every frame
void ASJ_Actor_MammothSpawnDestroy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector me = mammoth->GetComponentLocation();
	FVector tar = destroyRange->GetComponentLocation();
	FVector dir = tar - me;
	dir.Normalize();

	FVector p = me + dir * speed * DeltaTime;

	mammoth->SetRelativeLocation(p);
}

void ASJ_Actor_MammothSpawnDestroy::TriggerIn(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndeawx, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp == mammoth)
	{
		mammoth->DestroyComponent();
	}
}

