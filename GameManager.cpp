#include "GameManager.h"

GameManager::GameManager()
{
	 sceneArr_[TITLE] = std::make_unique<TitleScene>();
    sceneArr_[STAGE] = std::make_unique<StageScene>();
    sceneArr_[CLEAR] = std::make_unique<ClearScene>();
    
    currentSceneNo_ = TITLE;
	preSceneNo_ = 0;
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{
	preSceneNo_ = currentSceneNo_;
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

	if (preSceneNo_ != currentSceneNo_)
	{
		sceneArr_[preSceneNo_]->Initialize();
	}

	sceneArr_[currentSceneNo_]->Update();

	sceneArr_[currentSceneNo_]->Draw();

	return 0;
}
