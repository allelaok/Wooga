// Fill out your copyright notice in the Description page of Project Settings.


#include "FistAxe.h"
#include "DetachRock.h"
#include "HalfRock.h"
#include "Components/ChildActorComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AFistAxe::AFistAxe()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	fist = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Fist"));
	SetRootComponent(fist);

	halfRock = CreateDefaultSubobject<UChildActorComponent>(TEXT("HalfRock"));
	halfRock->SetupAttachment(fist);

	rock2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock2"));
	rock2->SetupAttachment(fist);

	rock3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock3"));
	rock3->SetupAttachment(fist);

	rock4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock4"));
	rock4->SetupAttachment(fist);

	rock5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock5"));
	rock5->SetupAttachment(fist);

	rock6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock6"));
	rock6->SetupAttachment(fist);

	rock7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock7"));
	rock7->SetupAttachment(fist);

	rock8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock8"));
	rock8->SetupAttachment(fist);

	rock9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock9"));
	rock9->SetupAttachment(fist);

	offMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Off Material"));

	onMaterial = CreateDefaultSubobject<UMaterial>(TEXT("On Material"));
}

// Called when the game starts or when spawned
void AFistAxe::BeginPlay()
{
	Super::BeginPlay();

	fist->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock2->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock3->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock4->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock5->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock6->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock7->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);
	rock8->OnComponentBeginOverlap.AddDynamic(this, &AFistAxe::OnCollisionEnter);

	detachRock = Cast<ADetachRock>(UGameplayStatics::GetActorOfClass(GetWorld(), ADetachRock::StaticClass()));

	/*halfRock->halfRock->SetSimulatePhysics(true);
	halfRock->halfRock->SetEnableGravity(true);
	halfRock->halfRock->SetRelativeLocation(FVector(0,0,0));*/
}

// Called every frame
void AFistAxe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFistAxe::OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == detachRock)
	{
		//halfRock->DetachFromParent(true);
		halfRock->GetChildActor()->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		bisD1 = true;
	}
}

