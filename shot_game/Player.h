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
   

    
    //�R���X�g���N�^
    Player();

    //�f�X�g���N�^
    ~Player();

    //�q�b�g�`�F�b�N
    void Hit() override;

    //�`��ȊO�̏���
   void Update()override;

    //�`�揈��
    void Draw()const override;
};

