

#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Establece valores predeterminados
ABrick::ABrick()
{
	// Establezca esta actor para llamar. Marca() cada fotograma. Puede desactivar esta opción para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>BrickMeshAsset(TEXT("/Game/Meshes/SM_Brick.SM_Brick"));

	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	//o en el AGMB en el ladrillo darle un meshh asi podria aparecer directo 
	SM_Brick -> SetStaticMesh(BrickMeshAsset.Object);

// Se llama cuando se inicia el juego o cuando se genera

	void ABrick::BeginPlay()
	{
		Super::BeginPlay();
	}

	// Llamada a cada fotograma
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
