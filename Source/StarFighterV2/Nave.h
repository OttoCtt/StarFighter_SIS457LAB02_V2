// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"

//se realiza una declaración antecedida, lo que hace más adelante se  declare una clase, esto le dice al compilador para no generar errores.
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
	//Se crean dos propiedades importanes.
	//Estos son los dros propiedades que se usaran en la nave cuando es juego inicie.
	//Esta propiedad nos permite manejar los modelos estáticos, crear su malla o su apariencia. 
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Nave;
	//Esta propiedad nos permite gestionar su movimiento .
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Aquí se asignan los métodos para el movimiento del pawn, de declaran 2 la primera para el eje x para el movimiento horizontal, y para el eje z para el movimiento vertical.
	virtual void MoveHorizontal(float _XAxisValue);
	virtual void MoveVertical(float _ZAxisValue);
};
