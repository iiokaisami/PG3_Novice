#pragma once


#include <Novice.h>
#include "Vector2.h"

class Player
{
public:

	Player() = default;

	void Init();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

private:

	Vector2 pos_{};
	float speed_ = 2.0f;
	int textureHandle_;
};
