#pragma once

#include <Novice.h>
#include <Vector2.h>

class Enemy
{
public:
	
	void Initialize();
	void Update();
	void Draw();

public:

	bool IsDead() { return isDead_; }
	Vector2 const GetSize() { return size_; }
	Vector2 const GetPos() { return pos_; }

public:

	void SetIsDead(bool _isDead) { isDead_ = _isDead; }

private:

	Vector2 pos_;
	Vector2 size_;
	Vector2 speed_;
	bool isDead_ = false;

};

