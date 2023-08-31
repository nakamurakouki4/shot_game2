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
    //�R���X�g���N�^
    Bullet();

    //�f�X�g���N�^
    ~Bullet();

    //�q�b�g�`�F�b�N
    void GetDamage();

    //�`��ȊO�̏���
    void Update();

    //�`�揈��
    void Draw()const;
};
