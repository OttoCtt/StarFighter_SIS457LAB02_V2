// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

//Aqui se declaran las propiedades físicas del objeto,  estos configuraciones afectaran al objeto en el mundo virtual.

// Sets default values
ANave::ANave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Se declara una variable que me permite crea un objeto de tipo nave. (En acá se crea un objeto y se le asigna a SMNave y va apuntar al objeto creado aquí bajo estos criterios).
	SM_Nave = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("SM Nave"));
	//Se le dice al compilador que SM_Nave va se la raiz de esto algo principal.
	RootComponent = SM_Nave;
	//Configuraciones del motor de graficas UE.
	//Configuracion de la gravedad, al estar activa entonces afecta al pawn(a la nave).
	SM_Nave->SetEnableGravity(false);
	//Configuraci.ón de colisión que la nave va asumir y controlar las colisiones físicas y las colisiones del lugar
	SM_Nave->SetConstraintMode(EDOFMode::XZPlane);
	//Con esta configuracion se habilitan las coliciones del espacio y fisicas.
	SM_Nave->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//Nombre del perfil de colision, para poder verlo en el UE
	SM_Nave->SetCollisionProfileName(TEXT("PhisycActor"));

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));

}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
//En esta parte las funciones reciben los datos mandados externamente, Atravez del metodo AddmovementInput.
//Esto crea un vector con el valor que va recoger del eje x, z y va aplicar movimiento al objeto de entrada al pawn.
void ANave::MoveHorizontal(float _XAxisValue)
{
	AddMovementInput(FVector(_XAxisValue, 0.0f, 0.0f), 1.0f, false);
}

void ANave::MoveVertical(float _ZAxisValue)
{
	AddMovementInput(FVector(0.0f, 0.0f, _ZAxisValue), 1.0f, false);
}

