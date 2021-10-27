// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_Actor_HowToManipulate.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>
#include "VR_Player.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ASJ_Actor_HowToManipulate::ASJ_Actor_HowToManipulate()
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
void ASJ_Actor_HowToManipulate::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));

	// 생성 위치 로직

	// 플레이어 위치
	FVector playerLoc = player->GetActorLocation();
	// UI 위치
	FVector me = GetActorLocation();

	FVector p = player->GetActorLocation() + player->GetActorForwardVector() * 200;

	SetActorLocation(p);

	// Target - me -> UI 플레이어를 향해 볼 수 있도록.
	FVector dir = player->GetActorLocation() - GetActorLocation();
	dir.Normalize();

	SetActorRotation(dir.Rotation());

	SetState(EBlinkState::OnOpacity);
}

// Called every frame
void ASJ_Actor_HowToManipulate::Tick(float DeltaTime)
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

EBlinkState ASJ_Actor_HowToManipulate::GetState()
{
	return EBlinkState();
}

void ASJ_Actor_HowToManipulate::SetState(EBlinkState state)
{
	blink = state;
}

void ASJ_Actor_HowToManipulate::OnOpacity()
{
	// 생성 시간 및 파라미터
	createTime += GetWorld()->DeltaTimeSeconds;
	startParam = FMath::Lerp(-1.0f, 1.0f, createTime * 0.7f);

	// 생성 효과
	bodyL->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	gribL->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	handleL->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	triggerL->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	buttonL->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);

	bodyR->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	gribR->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	handleR->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	triggerR->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);
	buttonR->SetScalarParameterValueOnMaterials(TEXT("Opa"), startParam);

	if (createTime >= 2.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayOpacity"));
		SetState(EBlinkState::PlayOpacity);
	}
}

void ASJ_Actor_HowToManipulate::PlayOpacity()
{
	if (player->isClose == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("OffOpacity"));
		SetState(EBlinkState::OffOpacity);
	}
}

void ASJ_Actor_HowToManipulate::OffOpacity()
{
	// 파괴 시간 및 파라미터
	destroyTime += GetWorld()->DeltaTimeSeconds;
	destroyParam = FMath::Lerp(1.0f, -1.0f, destroyTime * 0.7f);

	// 파괴 효과
	bodyL->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	gribL->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	handleL->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	triggerL->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	buttonL->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);

	bodyR->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	gribR->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	handleR->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	triggerR->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);
	buttonR->SetScalarParameterValueOnMaterials(TEXT("Opa"), destroyParam);

	if (destroyTime >= 2.0f)
	{
		Destroy();
	}
}
