#include "InputHandler.h"

Command* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D))
	{
		return pressKeyD_;
	}

	if (Novice::CheckHitKey(DIK_A))
	{
		return pressKeyA_;
	}

	return nullptr;
}

void InputHandler::AssigMoveRightCommand2PresKeyD()
{
	Command* command = new MoveRightCommand();

	pressKeyD_ = command;
}

void InputHandler::AssigMoveLeftCommand2PressKeyA()
{
	Command* command = new MoveLeftCommand();

	pressKeyA_ = command;
}