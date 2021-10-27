// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FistAxe.generated.h"

UCLASS()
class WOOGA_API AFistAxe : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFistAxe();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnCollisionEnter(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* fist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UChildActorComponent* halfRock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UStaticMeshComponent* rock9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UMaterial* offMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		class UMaterial* onMaterial;

public:
	// 소켓에 넣을떄 Offset 값을 조정
	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		FVector grabOffset;

	UPROPERTY()
		class ADetachRock* detachRock;

public:
	UPROPERTY()
		bool bisD1 = false;

	UPROPERTY()
		bool bisD2 = false;

	UPROPERTY()
		bool bisD3 = false;

	UPROPERTY()
		bool bisD4 = false;

	UPROPERTY()
		bool bisD5 = false;

	UPROPERTY()
		bool bisD6 = false;

	UPROPERTY()
		bool bisD7 = false;

	UPROPERTY()
		bool bisD8 = false;

	UPROPERTY()
		bool bisD9 = false;
};
