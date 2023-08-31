#pragma once
#include "CharaBase.h"

class Enemy :
    public CharaBase
{
private:
    int hp;
    int point;
public:
    //�R���X�g���N�^
    Enemy();

    //�f�X�g���N�^
    ~Enemy();

    //�q�b�g�`�F�b�N
    void Hit() override;

    //�`��ȊO�̏���
    void Update()override;

    //�`�揈��
    void Draw()const override;
};
