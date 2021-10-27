// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_Actor_TitleUI.h"
#include <Components/StaticMeshComponent.h>
#include <Components/WidgetComponent.h>

// Sets default values
ASJ_Actor_TitleUI::ASJ_Actor_TitleUI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	SetRootComponent(rootComp);

	plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	plane->SetupAttachment(rootComp);

	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	widgetComp->SetupAttachment(rootComp);
}

// Called when the game starts or when spawned
void ASJ_Actor_TitleUI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASJ_Actor_TitleUI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

