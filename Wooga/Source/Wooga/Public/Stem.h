// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Stem.generated.h"

UCLASS()
class WOOGA_API AStem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		class UStaticMeshComponent* boxComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		class UStaticMeshComponent* base;

	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = Setting)
		class USkeletalMeshComponent* cable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		class UPhysicsConstraintComponent* baseRope;


	// 소켓에 넣을떄 Offset 값을 조정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
		FVector grabOffset;

	
};
