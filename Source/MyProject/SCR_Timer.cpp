// Fill out your copyright notice in the Description page of Project Settings.

#include "SCR_Timer.h"


// Sets default values
ASCR_Timer::ASCR_Timer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASCR_Timer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASCR_Timer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

