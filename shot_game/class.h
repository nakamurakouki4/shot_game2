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
    //コンストラクタ
    Class();

    //デストラクタ
    ~Class();

    //描画以外の処理
    AbstractScene* Update()override;

    //描画処理
    void Draw()const override;
};
