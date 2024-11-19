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

private:
	ASkywalkerFlowProcess *CurrentFlowProcess = nullptr;

public:
	/**
	 * 切换
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|FlowStatus")
	void SwitchFlowProcess(TSubclassOf<ASkywalkerFlowProcess> NewFlowProcessClass);

	/**
	 * 退出当前
	 */
	UFUNCTION(BlueprintCallable, Category = "Skywalker|FlowStatus")
	void LeaveCurrent();
};
