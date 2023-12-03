// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SkywalkerFlowProcess.h"
#include "SkywalkerFlowGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SKYWALKERFLOWSTATUS_API ASkywalkerFlowGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	ASkywalkerFlowProcess* CurrFlowProcess;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skywalker|Flow Process")
	TSubclassOf<ASkywalkerFlowProcess> StartFlowProcess;

	UFUNCTION(BlueprintCallable, Category = "Skywalker|Flow Process")
	bool OnSwitchLaunchProcess(ASkywalkerFlowProcess* NewProcess);
};
