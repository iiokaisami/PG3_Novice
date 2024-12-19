#pragma once

#include "InputHandler.h"

class StageScene
{
public:

	StageScene() = default;
	void Init();
	void Update();
	void Draw();

private:

	InputHandler* pInputHandler_ = nullptr;
	Command* pCommand_ = nullptr;
	Player* pPlayer_ = nullptr;

};
