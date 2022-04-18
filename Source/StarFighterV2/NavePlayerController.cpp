// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Nave.h"


ANavePlayerController::ANavePlayerController()
{
}
//Codigos para el funcionamiento de la camara.
void ANavePlayerController::BeginPlay()
{
	//Se crea un array de actores (que serán las cámaras obtenias previamente por el sig metodo).
	TArray<AActor*>CameraActors;
	//Este metodo sirve para obtener las cámaras del juego
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	//Aquí definimos cual va ser la cámara que va ser manejado, en este caso solo hay 1.
	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

}

void ANavePlayerController::SetupInputComponent()
{
	//Con esto habilitamos todas las entradas.
	Super::SetupInputComponent();
	EnableInput(this);
	//Con esta propiedad se vincula al UnrealEgine.
	//Ponemos de nombre de la función y se vincule al control de UE, y esta se encarge de procesar los los datos
	InputComponent->BindAxis("MoveHorizontal", this, &ANavePlayerController::MoveHorizontal);
	InputComponent->BindAxis("MoveVertical", this, &ANavePlayerController::MoveVertical);
}

//Estas funciones son las que identifican el movimiento recopilado del exterior
void ANavePlayerController::MoveHorizontal(float _XAxisValue)
{
	//Aqua se obtiene el pawn y lo convierte a Anave y ese valor lo lleva a mypawn una variable local.
	auto MyPawn = Cast<ANave>(GetPawn());
	if (MyPawn) {
		MyPawn->MoveHorizontal(_XAxisValue);
	}
}

void ANavePlayerController::MoveVertical(float _ZAxisValue)
{
	auto MyPawn = Cast<ANave>(GetPawn());
	if (MyPawn) {
		MyPawn->MoveVertical(_ZAxisValue);
	}
}
