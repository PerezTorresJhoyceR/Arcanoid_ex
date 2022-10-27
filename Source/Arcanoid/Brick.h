#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class ARCANOID_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:
	// Establece los valores predeterminados para las propiedades de este actor
	ABrick();

protected:
	// Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)//verse en cualquier lado y que los blueprit de lectura 
		// para darle una malla
		UStaticMeshComponent* SM_Brick;



public:
	// Llamada a cada fotograma
	virtual void Tick(float DeltaTime) override;
};
