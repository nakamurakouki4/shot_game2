#pragma once
#include "CharaBase.h"

class Enemy :
    public CharaBase
{
private:
    int hp;
    int point;
public:
    //コンストラクタ
    Enemy();

    //デストラクタ
    ~Enemy();

    //ヒットチェック
    void Hit() override;

    //描画以外の処理
    void Update()override;

    //描画処理
    void Draw()const override;
};
