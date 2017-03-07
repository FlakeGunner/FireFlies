// Fill out your copyright notice in the Description page of Project Settings.

#include "FireFlies.h"
#include "FireFly.h"


// Sets default values
AFireFly::AFireFly()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFireFly::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireFly::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

