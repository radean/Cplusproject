// Fill out your copyright notice in the Description page of Project Settings.


#include "ReactiveProp.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"


// Sets default values
AReactiveProp::AReactiveProp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	//MeshComp->SetCollisionProfileName("PhysicsActor");
	RootComponent = MeshComp;

	Tags.Add(FName("ReactiveProp"));

	RadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	RadialForce->SetupAttachment(MeshComp);
	RadialForce->Radius = 250.f;
}

// Called when the game starts or when spawned
void AReactiveProp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReactiveProp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

