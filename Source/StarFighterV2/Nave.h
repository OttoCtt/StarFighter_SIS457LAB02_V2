// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"

class UFloatingPawnMovement;

UCLASS()
class STARFIGHTERV2_API ANave : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Nave;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveHorizontal(float _XAxisValue);
	virtual void MoveVertical(float _ZAxisValue);
};
