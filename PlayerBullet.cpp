#include "PlayerBullet.h"

void PlayerBullet::Initialize(const Vector2& _pos)
{
	pos_ = _pos;
	speed_ = { 4.0f,4.0f };
	rad_ = { 16.0f,16.0f };
}

void PlayerBullet::Update()
{
	pos_.y -= speed_.y;

	if (--deathTimer_ <= 0) {
		isDead_ = true;
	}

}

void PlayerBullet::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)rad_.x, (int)rad_.y, 0.0f, WHITE, kFillModeSolid);
}
