// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_HowToGrabUIActor.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>
#include "Camera/CameraComponent.h"

// Sets default values
ASJ_HowToGrabUIActor::ASJ_HowToGrabUIActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComp);

	controllerRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("ControllerRootComponent"));
	controllerRootComp->SetupAttachment(rootComp);

	body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	body->SetupAttachment(controllerRootComp);

	grib = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grib"));
	grib->SetupAttachment(controllerRootComp);

	handle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Handle"));
	handle->SetupAttachment(controllerRootComp);

	trigger = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Trigger"));
	trigger->SetupAttachment(controllerRootComp);

	button = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button"));
	button->SetupAttachment(controllerRootComp);

	pressUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	pressUI->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ASJ_HowToGrabUIActor::BeginPlay()
{
	Super::BeginPlay();
	
	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	FVector playerLoc = player->GetActorLocation();
	FVector me = GetActorLocation();

	FVector p =player->GetActorLocation() + player->GetActorForwardVector() * 300;

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
	startParam = FMath::Lerp(-1.0f, 1.0f, createTime * 0.5f);

	body->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	grib->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	handle->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	trigger->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	button->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);

	if (createTime >= 2.0f)
	{
		SetState(EBlinkState::PlayOpacity);
	}
}

void ASJ_HowToGrabUIActor::PlayOpacity()
{
	if (player->isClose == true)
	{
		SetState(EBlinkState::OffOpacity);
	}
}

void ASJ_HowToGrabUIActor::OffOpacity()
{
	destroyTime += GetWorld()->DeltaTimeSeconds;
	destroyParam = FMath::Lerp(1.0f, -1.0f, destroyTime * 0.5f);

	body->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	grib->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	handle->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	trigger->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	button->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);

	if (destroyTime >= 2.0f)
	{
		Destroy();
	}
}

