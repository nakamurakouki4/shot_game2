#include "DxLib.h"
#include "SceneManager.h"
#include "GameMain.h"
#define FRAMRATE 60.0	// �t���[�����[�g

/***********************************************
* �ϐ��̐錾
***********************************************/
int g_LoopCount = 0;

/***********************************************
* �v���O�����̊J�n
***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,

	LPSTR lpCmdLine, int nCmdShow)

{
	double dNextTime = GetNowCount();

	SetMainWindowText("Balloon Fight");

	ChangeWindowMode(TRUE);	// �E�B���h�E���[�h�ŋN������

	SetAlwaysRunFlag(true);	// ��ɃA�N�e�B�u

	SetGraphMode(1280, 720, 32);	// ��ʃT�C�Y


	if (DxLib_Init() == -1) return -1;	// DX ���C�u�����̏���������:�G���[���N�����璼���ɏI��

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager* sceneMng;

	try
	{
		sceneMng = new SceneManager((AbstractScene*)new GameMain());
	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);

		// �t�@�C���I�[�v��
		fopen_s(&fp, "EffLog.txt", "a");

		// �G���[�f�[�^�̏�������
		fprintf_s(fp, "%02d�N %02�� %02�� %02d�� %02d�� %02d�b : % s������܂���B\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

		return 0;
	}

	// �Q�[�����[�v
	while ((ProcessMessage() == 0) && (sceneMng->Update() != nullptr))
	{
		ClearDrawScreen();	// ��ʂ̏�����
		sceneMng->Draw();

		ScreenFlip();	// ����ʂ̓��e��\��ʂɔ��f

		dNextTime += 1.0 / 60.0 * 1000.0;	// �t���[�����[�g�̐ݒ�

		if (dNextTime > GetNowCount())
		{
			WaitTimer(static_cast<int>(dNextTime) - GetNowCount());
		}
		else { dNextTime = GetNowCount(); }		//�␳
	}

	return 0;
}