// Fill out your copyright notice in the Description page of Project Settings.


#include "LogTestActor.h"

// Sets default values
ALogTestActor::ALogTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALogTestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));

	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);
	
}

// Called every frame
void ALogTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

