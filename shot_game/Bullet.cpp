#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"

Bullet::Bullet()
{
	Speed = 5;
	BulletSpeed = 10;
	BulletX = PlayerX;
	BulletY = PlayerY;

}
Bullet::~Bullet()
{

}
void Bullet::GetDamage()
{

}
void Bullet::Update()
{
	if (CheckHitKey(KEY_INPUT_A)) {
		BulletX -= Speed;
	}
	if (CheckHitKey(KEY_INPUT_D)) {
		BulletX += Speed;
	}
	if (CheckHitKey(KEY_INPUT_W)) {
		BulletY -= Speed;
	}
	if (CheckHitKey(KEY_INPUT_S)) {
		BulletY += Speed;
	}

	if (CheckHitKey(KEY_INPUT_SPACE)) {
			BulletY -= BulletSpeed;
	}
}

void Bullet::Draw() const
{
	DrawCircle(BulletX, BulletY, 10, GetColor(255, 0, 0), TRUE);
}