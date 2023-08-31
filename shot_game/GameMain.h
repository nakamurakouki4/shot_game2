#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Bullet.h"
class GameMain :
    public SceneBase
{
private:

  int life;
  int P_X;
  int P_Y;
  int Speed;
  Player* player;
  Bullet* bullet;
public:
    //�R���X�g���N�^
    GameMain();

    //�f�X�g���N�^
    ~GameMain();

    //�q�b�g�`�F�b�N
    void HitCheck();

    //�o���b�g�̔z��
    void SpawnBullet();

    //�`��ȊO�̏���
    AbstractScene* Update()override;

    //�`�揈��
    void Draw()const override;
};


