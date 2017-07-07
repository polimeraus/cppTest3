// Fill out your copyright notice in the Description page of Project Settings.

#include "MySphere.h"




// Sets default values
AMySphere::AMySphere()
{	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Yellow, TEXT("My Sphere yapıcı fonksyonuna girildi"));
	}

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mySphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("mySphereComponent"));
	mySphereComponent->bHiddenInGame = false;
	mySphereComponent->Mobility = EComponentMobility::Movable;
	mySphereComponent->SetSimulatePhysics(true);
	RootComponent = mySphereComponent;


	//  çalışıyor, zaten asıl blok bu 
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMesh->AttachTo(mySphereComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

	if (SphereMeshAsset.Succeeded()) 
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Yellow, TEXT("My Sphere Asseti Yüklendi"));
		}
		
		SphereMesh->SetStaticMesh(SphereMeshAsset.Object);
		SphereMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		SphereMesh->SetWorldScale3D(FVector(0.8f));
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(4, 5.f, FColor::Red, TEXT("My Sphere Asseti Yüklenemedi !!!"));
		}		
	}

	








	/*  bu kod bloğu çalışıyor
	UStaticMeshComponent* mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/cppTest1/Content/StarterContent/Shapes/Shape_Sphere.uasset")));

	if (meshToUse && mesh)
	{
	mesh->SetStaticMesh(meshToUse);
	}
	*/




	/*  çalışmıyor, bu TSubobject in kullanımdan kalktıını düşünüyorum
	ConstructorHelpers::TSubobject<UStaticMeshComponent> mesh = CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/Mesh/Cube/YourMesh"));
	mesh->SetStaticMesh(MeshObj.Object);
	*/



	//inlude path leri ile ilgili olarak bazı notlar:
	//FPaths::GameContentDir()
	//FPaths::GetProjectFilePath() 
	/*
	Compiler is searching them in all include paths that is configured to search(usally done in compiler arguments.In UBT you can add include paths in build script in PublicIncludePaths and PrivateIncludePaths array
	"root of the project's source" is added automaticly and you include examples shows that, but does not search recursively (thats what i meant). Compiler (because we talking here about compiler feature not UE4) only search for matching paths in configured include paths. If you look up in engine source code which work same way as game code (game module is just another engine module, it is in seperte forder so you can have multiple project sepretly, but it works the same and practicly you extending engine code from it) it also uses full parths, most common example "GameFramework/Actor.h" which is included in all AActor based classes. It is UE4 convention, but if you like you can alter include path list in build script.
	Using the [project_name].build.cs file, you should be able to iterate through folders using DirectoryInfo.,yea its C#. the "current directory" in build script is "Source" directory, it otherword you need to include module directoiry it to the path	*/




	//static ConstructorHelpers::FObjectFinder<UBlueprint> MyBlueprint(TEXT("/Game/Blueprints/Ball"));


	/*
	//Create Component
	SphereComponent = ConstructObject<USphereComponent>(USphereComponent::StaticClass, this, TEXT("MySphereComponent"));
	if(SphereComponent)
	{
	// Register the component
	SphereComponent->RegisterComponent();

	// Attach to root component
	SphereComponent->AttachTo(GetRootComponent());

	// or make it the rootcomponent - haven't tested this
	RootComponent = SphereComponent;
	*/
}







// Called when the game starts or when spawned
void AMySphere::BeginPlay()
{
	Super::BeginPlay();

}





// Called every frame
void AMySphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

