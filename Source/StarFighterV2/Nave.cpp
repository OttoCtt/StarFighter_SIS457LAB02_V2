// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ANave::ANave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Nave = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("SM Nave"));
	RootComponent = SM_Nave;

	SM_Nave->SetEnableGravity(false);
	SM_Nave->SetConstraintMode(EDOFMode::XZPlane);
	SM_Nave->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
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

void ANave::MoveHorizontal(float _XAxisValue)
{
	AddMovementInput(FVector(_XAxisValue, 0.0f, 0.0f), 1.0f, false);
}

void ANave::MoveVertical(float _ZAxisValue)
{
	AddMovementInput(FVector(0.0f, 0.0f, _ZAxisValue), 1.0f, false);
}

