// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveActorComponent.h"
#include "VR_Player.h"

// Sets default values for this component's properties
UMoveActorComponent::UMoveActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


}


// Called when the game starts
void UMoveActorComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<AVR_Player>(GetOwner());

}


// Called every frame
void UMoveActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UMoveActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("RightThumbstick_X", this, &UMoveActorComponent::MoveHorizontal);
	PlayerInputComponent->BindAxis("RightThumbstick_Y", this, &UMoveActorComponent::MoveVertical);
	PlayerInputComponent->BindAxis("LeftThumbstick_X", this, &UMoveActorComponent::RotateHorizontal);
}

void UMoveActorComponent::MoveHorizontal(float value)
{
	

	FVector dir = player->GetActorRightVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UMoveActorComponent::MoveVertical(float value)
{
	
	FVector dir = player->GetActorForwardVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UMoveActorComponent::RotateHorizontal(float value)
{
	
	FRotator rot = FRotator(0, value * rotateSpeed * GetWorld()->DeltaTimeSeconds, 0);
	player->AddActorLocalRotation(rot);
}

