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

	OnCollision();

	if (pEnemy_->IsDead())
	{
		sceneNo = CLEAR;
	}

}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);
	pPlayer_->Draw();
	pEnemy_->Draw();

	Novice::ScreenPrintf(0, 0, "Stage");
}

void StageScene::OnCollision()
{
	for (int i = 0; i < 5; i++)
	{
		bulletPos_[i] = pPlayer_->bulletPos_[i];
		bulletSize_[i] = pPlayer_->GetBulletSize();
		enemyPos_ = pEnemy_->GetPos();
		enemySize_ = pEnemy_->GetSize();

		if (bulletPos_[i].x < enemyPos_.x + enemySize_.x &&
			bulletPos_[i].x + enemySize_.x > enemyPos_.x &&
			bulletPos_[i].y < enemyPos_.y + enemySize_.y &&
			bulletPos_[i].y + enemySize_.y > enemyPos_.y)
		{
			pEnemy_->SetIsDead(true);
		}
	}
}
