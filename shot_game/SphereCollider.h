#pragma once

class SphereCollider
{
protected:
	int locationX;
	int locationY;
	int PlayerX;
	int PlayerY;
	int radius;
public:
	SphereCollider();

	~SphereCollider();
	
	void CheckCollision();
};
