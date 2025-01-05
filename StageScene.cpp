#include "StageScene.h"

void StageScene::Initialize()
{
	pPlayer_ = std::make_unique<Player>();
	pPlayer_->Initialize();
	pEnemy_ = std::make_unique<Enemy>();
	pEnemy_->Initialize();

}

void StageScene::Update()
{
	pPlayer_->Update();
	pEnemy_->Update();

}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);
	pPlayer_->Draw();
	pEnemy_->Draw();

	Novice::ScreenPrintf(0, 0, "Stage");
}
