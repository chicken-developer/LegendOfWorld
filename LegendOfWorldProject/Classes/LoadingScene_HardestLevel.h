#pragma once
#include "cocos2d.h"
#include "CScene.h"

class LoadingScene_HardestLevel : public cocos2d::Scene {
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(LoadingScene_HardestLevel);

private:
	cocos2d::Sprite* backgr;
	void navigateToPlayGame_HardestLevel(float timeDelay);
};
