// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//normalde Runtime/Engine/Classes/  bu kısmı yazmadan da oluyo
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySphere.generated.h"









UCLASS()
class CPPTEST3_API AMySphere : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMySphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//bisim kürenin tanımları bir küre komponenti ve bir mesh
	UPROPERTY(EditAnywhere, Category = "Spawn")
		USphereComponent* mySphereComponent;

	UPROPERTY(EditAnywhere, Category = "Spawn")
		UStaticMeshComponent* SphereMesh;
};
