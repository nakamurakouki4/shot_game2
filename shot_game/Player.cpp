#include "Player.h"
#include "DxLib.h"

Player::Player()
{
	
	Speed = 5;
}
Player::~Player()
{

}
void Player::Hit()
{

}
void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_A)) {
		PlayerX -= Speed;
	}
	if (CheckHitKey(KEY_INPUT_D)) {
		PlayerX += Speed;
	}
	if (CheckHitKey(KEY_INPUT_W)) {
		PlayerY -= Speed;
	}
	if (CheckHitKey(KEY_INPUT_S)) {
		PlayerY += Speed;
	}
}

void Player::Draw() const
{
	DrawBox(PlayerX - 16, PlayerY - 16, PlayerX + 16, PlayerY + 16, GetColor(255, 0, 0), TRUE);
}