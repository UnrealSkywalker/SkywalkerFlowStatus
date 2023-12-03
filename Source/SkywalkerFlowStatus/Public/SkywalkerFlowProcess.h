// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkywalkerFlowProcess.generated.h"

UCLASS()
class SKYWALKERFLOWSTATUS_API ASkywalkerFlowProcess : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASkywalkerFlowProcess();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ProcessPreEnter"))
	void ReceivePreEnter();

	virtual void PreEnter();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ProcessEnter"))
	void ReceiveEnter();

	virtual void Enter();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ProcessPreLeave"))
	void ReceivePreLeave();

	virtual void PreLeave();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ProcessLeave"))
	void ReceiveLeave();

	virtual void Leave();
};
