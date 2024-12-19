#include "Command.h"

#include "Player.h"

void MoveRightCommand::Execute(Player& pPlayer)
{
	pPlayer.MoveRight();
}

void MoveLeftCommand::Execute(Player& pPlayer)
{
	pPlayer.MoveLeft();
}
