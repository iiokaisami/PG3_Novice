#pragma once

#include <Novice.h>
#include <Vector2.h>

class PlayerBullet
{
public:

	void Initialize(const Vector2& _pos);
	void Update();
	void Draw();

public:

	bool IsDead() { return isDead_; }
	Vector2 GetSize() { return rad_; }

public:

	void SetIsDead() { isDead_ = true; }

private:

	Vector2 pos_;
	Vector2 rad_;
	Vector2 speed_;

	static const int kLifeTime = 60 * 4;
	int deathTimer_ = kLifeTime;
	bool isDead_ = false;
};

