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

	Vector2 GetPos() { return pos_; }
	bool IsDead() { return isDead_; }
	Vector2 GetSize() { return rad_; }

public:

	void SetPos(Vector2 _pos) { pos_ = _pos; }
	void SetIsDead(bool  _isDead) { isDead_ = _isDead; }

private:

	Vector2 pos_;
	Vector2 rad_;
	Vector2 speed_;

	static const int kLifeTime = 30;
	int deathTimer_ = kLifeTime;
	bool isDead_ = true;
	
};

