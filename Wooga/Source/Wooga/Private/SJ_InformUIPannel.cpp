// Fill out your copyright notice in the Description page of Project Settings.


#include "SJ_InformUIPannel.h"
#include <Components/WidgetComponent.h>
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "VR_Player.h"
#include "SJ_WoogaGameModeBase.h"
#include "SJ_InformUICreate.h"


// Sets default values
ASJ_InformUIPannel::ASJ_InformUIPannel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(rootComp);

	informUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("InformUI"));
	informUI->SetupAttachment(rootComp);

	range = CreateDefaultSubobject<UBoxComponent>(TEXT("Range"));
	range->SetupAttachment(rootComp);

	informMark = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InformMark"));
	informMark->SetupAttachment(rootComp);

}

// Called when the game starts or when spawned
void ASJ_InformUIPannel::BeginPlay()
{
	Super::BeginPlay();

	// 게임모드 캐싱
	gameModeBase = Cast<ASJ_WoogaGameModeBase>(GetWorld()->GetAuthGameMode());
	
	range->OnComponentBeginOverlap.AddDynamic(this, &ASJ_InformUIPannel::RangeIn);

	informUI->SetAutoActivate(false);
}

// Called every frame
void ASJ_InformUIPannel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 플레이어가 범위내 들어오면UI 가 켜지는 기능
	if (isTrigger == true)
	{
		RunningTime += DeltaTime;

		if (RunningTime <= 1.0f)
		{
			FRotator changeRot = FRotator(FMath::Lerp(startRot.X, endRot.X, RunningTime), FMath::Lerp(startRot.Y, endRot.Y, RunningTime), FMath::Lerp(startRot.Z, endRot.Z, RunningTime));

			informMark->SetRelativeRotation(changeRot);

			FVector changePos = FVector(FMath::Lerp(startPos.X, endPos.X, RunningTime), FMath::Lerp(startPos.Y, endPos.Y, RunningTime), FMath::Lerp(startPos.Z, endPos.Z, RunningTime));

			informMark->SetRelativeLocation(changePos);
		}
	}
}

void ASJ_InformUIPannel::RangeIn(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	player = Cast<AVR_Player>(OtherActor);

	if (player)
	{
		isTrigger = true;

		FActorSpawnParameters Param;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<ASJ_InformUICreate>(informUICreate, GetActorLocation(), GetActorRotation(), Param);

		informUI->SetAutoActivate(true);

		if (gameModeBase->GetState() == EFlowState::GoToCollectCourse)
		{
			gameModeBase->SetState(EFlowState::HowToCollectActorUI);
		}
	}
}

