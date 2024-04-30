// Fill out your copyright notice in the Description page of Project Settings.


#include "A_CollectableObjectClass.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AA_CollectableObjectClass::AA_CollectableObjectClass()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a sphere component for collision
    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    RootComponent = SphereComponent;

    SphereComponent->SetGenerateOverlapEvents(true);
    SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AA_CollectableObjectClass::OnSphereBeginOverlap);

    // Create a static mesh component for visualization
    SphereMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComponent"));
    SphereMeshComponent->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")); // Load the sphere mesh
    if (SphereMeshAsset.Succeeded())
    {
        // Set the static mesh for the SphereMeshComponent
        SphereMeshComponent->SetStaticMesh(SphereMeshAsset.Object);

        // Disable collision for the SphereMeshComponent
        SphereMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        SphereMeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore); // Ignore all collision responses
    }
}

// Called when the game starts or when spawned
void AA_CollectableObjectClass::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Actor
	FVector SpawnLocation = GetActorLocation();
	SetActorLocation(SpawnLocation);

    characterClass = Cast<APartielUnrealCppCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void AA_CollectableObjectClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AA_CollectableObjectClass::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		Destroy();
        characterClass->AddScore(1);
	}
}