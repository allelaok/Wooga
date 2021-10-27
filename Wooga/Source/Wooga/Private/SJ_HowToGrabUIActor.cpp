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

	controllerLRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("ControllerLRootComponent"));
	controllerLRootComp->SetupAttachment(rootComp);

	bodyL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyL"));
	bodyL->SetupAttachment(controllerLRootComp);

	gribL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GribL"));
	gribL->SetupAttachment(controllerLRootComp);

	handleL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleL"));
	handleL->SetupAttachment(controllerLRootComp);

	triggerL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerL"));
	triggerL->SetupAttachment(controllerLRootComp);

	buttonL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonL"));
	buttonL->SetupAttachment(controllerLRootComp);

	controllerRRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("ControllerRRootComponent"));
	controllerRRootComp->SetupAttachment(rootComp);

	bodyR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyR"));
	bodyR->SetupAttachment(controllerRRootComp);

	gribR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GribR"));
	gribR->SetupAttachment(controllerRRootComp);

	handleR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleR"));
	handleR->SetupAttachment(controllerRRootComp);

	triggerR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerR"));
	triggerR->SetupAttachment(controllerRRootComp);

	buttonR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonR"));
	buttonR->SetupAttachment(controllerRRootComp);

	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Comp"));
	widgetComp->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ASJ_HowToGrabUIActor::BeginPlay()
{
	Super::BeginPlay();

	SetState(EBlinkState::OnOpacity);

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	gameModeBase = Cast<ASJ_WoogaGameModeBase>(GetWorld()->GetAuthGameMode());

	FVector playerLoc = player->GetActorLocation();
	FVector me = GetActorLocation();

	FVector p = player->GetActorLocation() + player->GetActorForwardVector() * 200;

	SetActorLocation(p);

	FVector dir = player->GetActorLocation() - GetActorLocation();
	dir.Normalize();

	SetActorRotation(dir.Rotation());
}

// Called every frame
void ASJ_HowToGrabUIActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (blink)
	{
	case EBlinkState::OnOpacity:
		OnOpacity();
		break;
	case EBlinkState::PlayOpacity:
		PlayOpacity();
		break;
	case EBlinkState::OffOpacity:
		OffOpacity();
		break;
	}
}

EBlinkState ASJ_HowToGrabUIActor::GetState()
{
	return EBlinkState();
}

void ASJ_HowToGrabUIActor::SetState(EBlinkState state)
{
	blink = state;
}

void ASJ_HowToGrabUIActor::OnOpacity()
{
	createTime += GetWorld()->DeltaTimeSeconds;
	startParam = FMath::Lerp(-1.0f, 1.0f, createTime * 0.7f);

	if (createTime >= 2.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayOpacity"));
		SetState(EBlinkState::PlayOpacity);
	}
}

void ASJ_HowToGrabUIActor::PlayOpacity()
{
	if (player->isClose == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("OffOpacity"));
		SetState(EBlinkState::OffOpacity);
	}
}

void ASJ_HowToGrabUIActor::OffOpacity()
{
	destroyTime += GetWorld()->DeltaTimeSeconds;
	destroyParam = FMath::Lerp(1.0f, -1.0f, destroyTime * 0.7f);

	// body->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);

	if (destroyTime >= 2.0f)
	{
		Destroy();
	}
}

