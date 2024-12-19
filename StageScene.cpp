#include "StageScene.h"
#include "Player.h"

void StageScene::Init()
{
	pInputHandler_ = new InputHandler();

	// New Paler
	pPlayer_ = new Player();
	pPlayer_->Init();

	// New Command
	pInputHandler_->AssigMoveRightCommand2PresKeyD();
	pInputHandler_->AssigMoveLeftCommand2PressKeyA();
}

void StageScene::Update()
{
	// Get Input
	pCommand_ = pInputHandler_->HandleInput();

	// Set Input
	if (pCommand_)
	{
		pCommand_->Execute(*pPlayer_);
	}

	pPlayer_->Update();
}

void StageScene::Draw()
{
	pPlayer_->Draw();
}
