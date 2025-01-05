#pragma once

#include <Novice.h>
#include <memory>

#include "IScene.h"
#include "Player.h"
#include "Enemy.h"

class StageScene : public IScene
{
public:

	void Initialize() override;
	void Update() override;
	void Draw() override;

private:

	std::unique_ptr<Player> pPlayer_;
	std::unique_ptr<Enemy> pEnemy_;
	
};

