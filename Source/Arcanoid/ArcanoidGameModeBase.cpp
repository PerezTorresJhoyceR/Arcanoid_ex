// Copyright Epic Games, Inc. All Rights Reserved.
// administra cuando comienza el juego , administrador del juego 

#include "ArcanoidGameModeBase.h"
#include "Brick.h"

void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay(); // llamando a la clase padre Begin 


	const FVector Ubicacion(20.0f, 50.0f, 100.0f);
	const FRotator  Rotacion(0.0f,0.0f,0.0f);

	// world es un puntero al mundo donde esta el mapa , para no que se modifique 
	// o cambie  un movimiento en la memoria ; get obtener 
	UWorld* const World = GetWorld();

	//spaw o generacion/creacion en tiempo de ejecución 
	if (World != nullptr) {
		// con ubicacion y rotacion 
		Ladrillo = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		Ladrillo->SetHidden(false);//por defecto lo pone en true
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor Ladrillo creado "));





	}



}
