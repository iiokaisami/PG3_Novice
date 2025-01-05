#include "ClearScene.h"

void ClearScene::Initialize()
{
}

void ClearScene::Update()
{
	if (Novice::CheckHitKey(DIK_RETURN))
	{
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);
	Novice::ScreenPrintf(600, 200, "GAME CLEAR");
	Novice::ScreenPrintf(600, 500, "TITLE ENTER");
	Novice::ScreenPrintf(0, 0, "Clear");
}
