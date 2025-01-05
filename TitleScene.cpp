#include "TitleScene.h"

void TitleScene::Initialize()
{
	
}

void TitleScene::Update()
{
	
	if (Novice::CheckHitKey(DIK_RETURN))
	{
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);
	Novice::ScreenPrintf(600, 500, "START ENTER");
	Novice::ScreenPrintf(0, 0, "Title");
}
