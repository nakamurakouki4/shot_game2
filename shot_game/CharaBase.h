#pragma once
#include "SphereCollider.h"

class CharaBase :
    public SphereCollider
{
protected:
    int Speed;
    int Image;
public:
    //コンストラクタ
    CharaBase();

    //デストラクタ
    ~CharaBase();

    virtual void Hit() {};

    //描画以外の更新を実行
    virtual void Update();

    //描画に関することを実装
    virtual void Draw() const;
};
