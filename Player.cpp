#include "Player.h"

void Player::Init()
{
	pos_ = Vector2(50.0f, 50.0f);
	speed_ = 2.0f;
	textureHandle_ = Novice::LoadTexture("./NoviceResources/white1x1.png");
}

void Player::Update()
{

}

void Player::Draw()
{
	Novice::DrawSprite((int)pos_.x, (int)pos_.y, textureHandle_, 50.0f, 50.0f, 0.0f, WHITE);
}

void Player::MoveRight()
{
	pos_.x += speed_;
}

void Player::MoveLeft()
{
	pos_.x -= speed_;
}
