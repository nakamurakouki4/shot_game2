#pragma once
#include "SphereCollider.h"

class Bullet :
    public SphereCollider
{
protected:
    int BulletX;
    int BulletY;
    int Damage;
    int Speed;
    int BulletSpeed;
    int Angle;
    int a;
    int acceleration;
    int angulVelocity;
public:
    //コンストラクタ
    Bullet();

    //デストラクタ
    ~Bullet();

    //ヒットチェック
    void GetDamage();

    //描画以外の処理
    void Update();

    //描画処理
    void Draw()const;
};
