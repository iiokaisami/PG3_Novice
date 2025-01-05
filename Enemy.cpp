#include "Enemy.h"

void Enemy::Initialize()
{
	pos_ = { 600.0f,100.0f };
	size_ = { 32.0f,32.0f };
	speed_ = { 5.0f,5.0f };
	isDead_ = false;
}

void Enemy::Update()
{
	pos_.x += speed_.x;
	if (pos_.x >= 1150.0f)
	{
		speed_.x *= -1;
	}
	else if(pos_.x <= 50.0f)
	{
		speed_.x *= -1;
	}
}

void Enemy::Draw()
{

	Novice::DrawBox((int)pos_.x, (int)pos_.y, (int)size_.x,(int)size_.y,0.0f, RED, kFillModeSolid);
}
