#pragma once

#include <Novice.h>	
#include <Vector2.h>
#include <list>

#include "PlayerBullet.h"

class Player
{
public:

	void Initialize();
	void Update();
	void Draw();

	void Fire();

	const std::list<PlayerBullet*>& GetBullets() const { return bullets_; }

public:

	Vector2 GetBulletSize() { return bulletSize_; }

private:

	Vector2 pos_;
	Vector2 size_;
	Vector2 speed_;

	std::list<PlayerBullet*> bullets_;
	Vector2 bulletSize_;

	bool isAttack_ = false;
	const int kShootCoolDownFrame_ = 15;
	int countCoolDownFrame_ = 0;


};

