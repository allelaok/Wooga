// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_HowToGrabUIActor.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>
#include "Camera/CameraComponent.h"
#include "SJ_WoogaGameModeBase.h"

// Sets default values
ASJ_HowToGrabUIActor::ASJ_HowToGrabUIActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	SetRootComponent(rootComp);

	plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	plane->SetupAttachment(rootComp);

	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Comp"));
	widgetComp->SetupAttachment(rootComp);

	nextWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("NextWidget"));
	nextWidget->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ASJ_HowToGrabUIActor::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	FVector playerLoc = player->GetActorLocation();
	FVector me = GetActorLocation();

	FVector p = player->GetActorLocation() + player->GetActorForwardVector() * 200 + player->GetActorUpVector() * 50;

	SetActorLocation(p);

	FVector dir = player->GetActorLocation() - GetActorLocation();
	dir.Normalize();

	SetActorRotation(dir.Rotation());
}

// Called every frame
void ASJ_HowToGrabUIActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


