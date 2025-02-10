#include "Player.h"

void Player::Initialize()
{
	pos_ = { 600.0f, 500.0f };
	size_ = { 32.0f, 32.0f };
	speed_ = { 5.0f, 5.0f };

	for (int i = 0; i < 5; i++)
	{
		bullets_[i] = std::make_unique<PlayerBullet>();
		bullets_[i]->Initialize({ pos_.x + size_.x / 2, pos_.y + size_.y / 2 });
	}
}

void Player::Update()
{
	if (Novice::CheckHitKey(DIK_W))
	{
		pos_.y -= speed_.y;
	}
	if (Novice::CheckHitKey(DIK_S))
	{
		pos_.y += speed_.y;
	}
	if (Novice::CheckHitKey(DIK_A))
	{
		pos_.x -= speed_.x;
	}
	if (Novice::CheckHitKey(DIK_D))
	{
		pos_.x += speed_.x;
	}

	Fire();

	for (int i = 0; i < 5; i++)
	{
		bullets_[i]->Update();
		bulletPos_[i] = bullets_[i]->GetPos();
	}
}

void Player::Draw()
{
	Novice::DrawBox((int)pos_.x, (int)pos_.y, (int)size_.x,(int)size_.y, 0.0f, WHITE, kFillModeSolid);

	for (int i = 0; i < 5; i++)
	{
		bullets_[i]->Draw();
	}
}

void Player::Fire()
{
	countCoolDownFrame_--;

	if (countCoolDownFrame_ <= 0)
	{
		if (Novice::CheckHitKey(DIK_SPACE))
		{
			for (int i = 0; i < 5; i++)
			{
				if (bullets_[i]->IsDead())
				{
					bullets_[i]->SetIsDead(false);
					bullets_[i]->SetPos({ pos_.x + size_.x / 2, pos_.y + size_.y / 2 });
					bulletSize_[i] = bullets_[i]->GetSize();
					countCoolDownFrame_ = kShootCoolDownFrame_;

					break;
				}
			}
		}
	}
}
