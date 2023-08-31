#include "GameMain.h"
#include "Charabase.h"
#include "DxLib.h"
GameMain::GameMain()
{
	player = new Player();
	bullet = new Bullet();
}
GameMain::~GameMain()
{
	delete bullet;
	delete player;
}
void GameMain::HitCheck()
{

}
void GameMain::SpawnBullet()
{

}
AbstractScene* GameMain::Update()
{
	player->Update();
	bullet->Update();
	return this;
}

void GameMain::Draw() const
{
	bullet->Draw();
	player->Draw();
	DrawBox(980, 0, 1280, 720, 0x009900, TRUE);
	//printfDx("GameMain\n");
	DrawFormatString(640, 360, 0xffffff, "GameMain");
}