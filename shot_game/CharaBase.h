#pragma once
#include "SphereCollider.h"

class CharaBase :
    public SphereCollider
{
protected:
    int Speed;
    int Image;
public:
    //�R���X�g���N�^
    CharaBase();

    //�f�X�g���N�^
    ~CharaBase();

    virtual void Hit() {};

    //�`��ȊO�̍X�V�����s
    virtual void Update();

    //�`��Ɋւ��邱�Ƃ�����
    virtual void Draw() const;
};
