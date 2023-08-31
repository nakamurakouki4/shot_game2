#pragma once
#include "AbstractScene.h"

class BulletsSpawner
{
protected:
	int speed;
	int angle;
	int acceleration;
	int angulVelocity;
public:
	BulletsSpawner();
	~BulletsSpawner();
	void Shoot();
};
