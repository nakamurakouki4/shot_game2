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
    //コンストラクタ
    GameMain();

    //デストラクタ
    ~GameMain();

    //ヒットチェック
    void HitCheck();

    //バレットの配列
    void SpawnBullet();

    //描画以外の処理
    AbstractScene* Update()override;

    //描画処理
    void Draw()const override;
};


