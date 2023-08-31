#pragma once
#include "CharaBase.h"

class Player :
    public CharaBase
{
protected:
    int score;
    int point;
   // static int PlayerX;
    //static int PlayerY;
public:
   

    
    //コンストラクタ
    Player();

    //デストラクタ
    ~Player();

    //ヒットチェック
    void Hit() override;

    //描画以外の処理
   void Update()override;

    //描画処理
    void Draw()const override;
};

