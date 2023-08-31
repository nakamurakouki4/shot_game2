#include "Class.h"
#include "DxLib.h"
Class::Class()
{
}

Class::~Class()
{
}

AbstractScene* Class::Update()
{
	return this;
}

void Class::Draw() const
{
	DrawFormatString(640, 360, 0xffffff, "GameMain");
}