// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_InformUICreate.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>

// Sets default values
ASJ_InformUICreate::ASJ_InformUICreate()
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
void ASJ_InformUICreate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_InformUICreate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

