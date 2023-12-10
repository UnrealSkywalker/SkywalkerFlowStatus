// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "SkywalkerFlowProcess.h"

#include "SkywalkerFlowStatusSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SKYWALKERFLOWSTATUS_API USkywalkerFlowStatusSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

#pragma region FlowProcess

private:
	ASkywalkerFlowProcess*  CurrentFlowProcess = nullptr;

public:
	UFUNCTION(BlueprintCallable, Category = "Skywalker|Flow Process")
	bool OnSwitchLaunchProcess(TSubclassOf<ASkywalkerFlowProcess> NewFlowProcessClass);

#pragma endregion FlowProcess

};
