// Fill out your copyright notice in the Description page of Project Settings.

#include "SphereSpawner2.h"


// Sets default values
ASphereSpawner2::ASphereSpawner2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;


	//WhatToSpawn = CreateDefaultSubobject<AMySphere>(TEXT("WhatToSpawn"));
	//mySphere = CreateDefaultSubobject<AMySphere>(TEXT("mySphere"));
	//MeshComponent->AttachTo(RootComponent);

	WhatToSpawn = AMySphere::StaticClass();	
	//AMySphere *msp = Cast<TSubclassOf<AMySphere>(WhatToSpawn);



	/*
	UPROPERTY(EditDefaultsOnly, Category = Pickup)
	TSubobjectPtr<class AShooterItem> Item;
	AShooterWeapon* Weapon = Cast<AShooterWeapon>(Item);
	Item->IsChildOf(AShooterWeapon::StaticClass());  //if
	*/


	/*
	TSubclassOf in reality is UClass*, only diffrence is that TSubclassOf limit selection of classes in editor to specific class relation (and i think it also limits that in C++ too but i never deared to try it, i personally only use it limit selection in editor), other then that it is still fully functional UClass*. UClass object is class identifier in UE4 reflection system, each C++ and Blueprint class has one, by it you can check if class you talking to is a class you expect to be or you can reffer to specific class (which you do in SpawnActor), which normally impossible in C++, thats what reflection system is for and not only that.
	https://answers.unrealengine.com/questions/422613/help-understanding-tsubclassof-when-spawning.html
	https://answers.unrealengine.com/questions/405470/how-to-get-a-derived-class-from-tsubclassof.html
	*/
}





// Called when the game starts or when spawned
void ASphereSpawner2::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Spawner::BeginPlay"));
	SpawnSomething();	
}




// Called every frame
void ASphereSpawner2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




void ASphereSpawner2::SpawnSomething()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Spawner::SpawnSomething"));

	if (WhatToSpawn != NULL)
	{
		UWorld* const world = GetWorld();
		if (world)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = this;
			SpawnParameters.Instigator = Instigator;

			FVector SpawnLocation;
			SpawnLocation = GetRandonPointInVolume();

			FRotator SpawnRotation;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;

			world->SpawnActor<AMySphere>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParameters);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Spawn yapıldı"));

		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("world NULL"));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("WhatToSpawn NULL"));
	}
}

FVector ASphereSpawner2::GetRandonPointInVolume()
{
	FVector SpawnOrijin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtend = WhereToSpawn->Bounds.BoxExtent;

	//return FVector();
	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrijin, SpawnExtend);
}

