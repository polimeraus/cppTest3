// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Source/cppTest3/MySphere.h"
#include "GameFramework/Actor.h"
#include "SphereSpawner2.generated.h"

UCLASS()
class CPPTEST3_API ASphereSpawner2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASphereSpawner2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//spawn işlemi
	void SpawnSomething();

	FVector GetRandonPointInVolume();
	TSubclassOf<AMySphere> WhatToSpawn;
	UBoxComponent* WhereToSpawn;
	
};
