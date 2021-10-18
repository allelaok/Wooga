// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_UIPannel.h"
#include <Kismet/GameplayStatics.h>
#include "VR_Player.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>

// Sets default values
ASJ_UIPannel::ASJ_UIPannel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(rootComp);

	planeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	planeMesh->SetupAttachment(rootComp);

	settingUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("SettingUI"));
	settingUI->SetupAttachment(planeMesh);
}

// Called when the game starts or when spawned
void ASJ_UIPannel::BeginPlay()
{
	Super::BeginPlay();
	
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	
	float playerX = player->GetActorLocation().X;
	float playerY = player->GetActorLocation().Y;
	float playerZ = player->GetActorLocation().Z;

	FVector p = FVector(playerX + 300, playerY, playerZ);

	SetActorLocation(p);

	FVector dir = player->GetActorLocation() - GetActorLocation();
	dir.Normalize();

	SetActorRotation(dir.Rotation());
}

// Called every frame
void ASJ_UIPannel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASJ_UIPannel::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
}

