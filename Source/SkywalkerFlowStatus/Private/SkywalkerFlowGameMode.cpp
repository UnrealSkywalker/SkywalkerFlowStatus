// Fill out your copyright notice in the Description page of Project Settings.


#include "SkywalkerFlowGameMode.h"

bool ASkywalkerFlowGameMode::OnSwitchLaunchProcess(ASkywalkerFlowProcess* NewProcess)
{
	if (nullptr != CurrFlowProcess)
	{
		CurrFlowProcess->PreLeave();
		CurrFlowProcess->Leave();
		CurrFlowProcess->Destroy();
	}

	CurrFlowProcess = NewProcess;
	CurrFlowProcess->PreEnter();
	CurrFlowProcess->Enter();

	return true;
}
