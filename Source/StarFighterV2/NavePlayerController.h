// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NavePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTERV2_API ANavePlayerController : public APlayerController
{
	GENERATED_BODY()
		//Se crea un constructor porsiacaso.
		ANavePlayerController();
	UFUNCTION()
		virtual void SetupInputComponent() override;
	//Se crean 3 metodos
protected:
	//Cuando inicie el juego sobrecarge
	virtual void BeginPlay() override;
	//Estas 2 funciones que recogeran los respectivos valores.
	void MoveHorizontal(float _XAxisValue);
	void MoveVertical(float _ZAxisValue);
};
