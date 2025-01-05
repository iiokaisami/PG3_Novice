#include "Player.h"

void Player::Initialize()
{
	pos_ = { 600.0f, 500.0f };
	size_ = { 32.0f, 32.0f };
	speed_ = { 5.0f, 5.0f };
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

	for (PlayerBullet* bullet : bullets_) {
		bullet->Update();
	}
}

void Player::Draw()
{
	Novice::DrawBox((int)pos_.x, (int)pos_.y, (int)size_.x,(int)size_.y, 0.0f, WHITE, kFillModeSolid);

	for (PlayerBullet* bullet : bullets_) {
		bullet->Draw();
	}
}

void Player::Fire()
{
	if (Novice::CheckHitKey(DIK_SPACE))
	{
		if (countCoolDownFrame_ <= 0)
		{
			PlayerBullet* newBullet = new PlayerBullet();
			newBullet->Initialize({ pos_.x + size_.x / 2, pos_.y + size_.y / 2 });

			bullets_.push_back(newBullet);
		
			bulletSize_ = newBullet->GetSize();

			countCoolDownFrame_ = kShootCoolDownFrame_;
		}
	}

	countCoolDownFrame_--;
}
