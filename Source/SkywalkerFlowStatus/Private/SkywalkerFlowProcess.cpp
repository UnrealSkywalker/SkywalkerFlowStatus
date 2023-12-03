// Fill out your copyright notice in the Description page of Project Settings.


#include "SkywalkerFlowProcess.h"

// Sets default values
ASkywalkerFlowProcess::ASkywalkerFlowProcess()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASkywalkerFlowProcess::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkywalkerFlowProcess::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASkywalkerFlowProcess::PreEnter()
{
	//TRACE_OBJECT_EVENT(this, PreEnter);

	ReceivePreEnter();
}

void ASkywalkerFlowProcess::Enter()
{
	//TRACE_OBJECT_EVENT(this, Enter);

	ReceiveEnter();
}

void ASkywalkerFlowProcess::PreLeave()
{
	//TRACE_OBJECT_EVENT(this, PreLeave);

	ReceivePreLeave();
}

void ASkywalkerFlowProcess::Leave()
{
	//TRACE_OBJECT_EVENT(this, Leave);

	ReceiveLeave();
}
