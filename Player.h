#pragma once

#include <Novice.h>	
#include <Vector2.h>
#include <memory>

#include "PlayerBullet.h"

class Player
{
public:

	void Initialize();
	void Update();
	void Draw();

	void Fire();

public:

    Vector2 GetBulletSize() { return bulletSize_[0]; }

	Vector2 bulletPos_[5];

private:

	Vector2 pos_;
	Vector2 size_;
	Vector2 speed_;

	std::unique_ptr<PlayerBullet> bullets_[5];
	Vector2 bulletSize_[5];

	const int kShootCoolDownFrame_ = 30;
	int countCoolDownFrame_ = 0;

};

