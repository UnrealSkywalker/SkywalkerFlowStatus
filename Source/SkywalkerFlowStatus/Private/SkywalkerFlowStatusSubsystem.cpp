// Fill out your copyright notice in the Description page of Project Settings.

#include "SkywalkerFlowStatusSubsystem.h"

#include "Kismet/GameplayStatics.h"

#pragma region FlowProcess

void USkywalkerFlowStatusSubsystem::SwitchFlowProcess(TSubclassOf<ASkywalkerFlowProcess> NewFlowProcessClass)
{
	ASkywalkerFlowProcess *NewFlowProcess = Cast<ASkywalkerFlowProcess>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, NewFlowProcessClass, FTransform::Identity, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));

	if (CurrentFlowProcess != nullptr)
	{
		CurrentFlowProcess->PreLeave();
		CurrentFlowProcess->Leave();
		CurrentFlowProcess->Destroy();
	}

	CurrentFlowProcess = NewFlowProcess;
	CurrentFlowProcess->PreEnter();
	CurrentFlowProcess->Enter();
}

void USkywalkerFlowStatusSubsystem::LeaveCurrent()
{
	if (CurrentFlowProcess != nullptr)
	{
		CurrentFlowProcess->PreLeave();
		CurrentFlowProcess->Leave();
		CurrentFlowProcess->Destroy();
	}

	CurrentFlowProcess = nullptr;
}

#pragma endregion FlowProcess
