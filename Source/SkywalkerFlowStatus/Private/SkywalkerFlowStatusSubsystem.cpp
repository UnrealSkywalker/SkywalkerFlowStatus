// Fill out your copyright notice in the Description page of Project Settings.

#include "SkywalkerFlowStatusSubsystem.h"

#include "Kismet/GameplayStatics.h"

#pragma region FlowProcess

bool USkywalkerFlowStatusSubsystem::OnSwitchLaunchProcess(TSubclassOf<ASkywalkerFlowProcess> NewFlowProcessClass)
{
	ASkywalkerFlowProcess* NewFlowProcess = Cast<ASkywalkerFlowProcess>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, NewFlowProcessClass, FTransform::Identity, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));

	if (CurrentFlowProcess != nullptr)
	{
		CurrentFlowProcess->PreLeave();
		CurrentFlowProcess->Leave();
		CurrentFlowProcess->Destroy();
	}


	CurrentFlowProcess = NewFlowProcess;
	CurrentFlowProcess->PreEnter();
	CurrentFlowProcess->Enter();

	return true;
}

#pragma endregion FlowProcess
