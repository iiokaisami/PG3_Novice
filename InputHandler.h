#pragma once

#include "Command.h"
#include <Novice.h>

class InputHandler
{
public:

	Command* HandleInput();

	void AssigMoveRightCommand2PresKeyD();
	void AssigMoveLeftCommand2PressKeyA();

private:

	Command* pressKeyD_ = nullptr;
	Command* pressKeyA_ = nullptr;
};
