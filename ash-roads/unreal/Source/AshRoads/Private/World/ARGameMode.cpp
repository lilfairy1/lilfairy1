#include "World/ARGameMode.h"
#include "Characters/ARCharacter.h"
#include "Player/ARPlayerController.h"

AARGameMode::AARGameMode()
{
	DefaultPawnClass = AARCharacter::StaticClass();
	PlayerControllerClass = AARPlayerController::StaticClass();
}