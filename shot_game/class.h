#pragma once
#include "AbstractScene.h"
#include"Player.h"
#include "Enemy.h"
#include "CharaBase.h"
class Class :
    public AbstractScene
{
private:

    CharaBase* CharaBase_H;

   // Player* PlayChar;
   // Enemy* EnemyChar;
public:
    //�R���X�g���N�^
    Class();

    //�f�X�g���N�^
    ~Class();

    //�`��ȊO�̏���
    AbstractScene* Update()override;

    //�`�揈��
    void Draw()const override;
};
