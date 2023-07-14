#pragma once
/**************************]
*�v���O�������K
*�}�b�`�R�Q�[������
*************************/

#include"DxLib.h"
#include"FreamControl.h"

/*************
*�}�N����`
*****************/
#define SCREEN_HEIGHT   (480)//�X�N���[���T�C�Y(�����j
#define SCREEN_WIDTH    (640)//�X�N���[���T�C�Y(��)
#define SCREEN_COLORBIT (32)//�X�N���[���J���[�r�b�g
#define FONT_SIZE       (20)//�����T�C�Y
/**************************************
*�^��`
***************************************/



/***************************************
�v���g�^�C�v�錾
***********************************/

int WINAPI WnMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCMdLine, _In_ int nShowCMd)
{


	//�E�B���h�E�^�C�g���ݒ�
	SetMainWindowText("Match3Puzzle");
	//�E�B���h���[�h�N��
	ChangeWindowMode(TRUE);
	//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dx���C�u��������������
	//�G���[������������A�I��
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}
	//�e�@�\�̏���������
	FreamControl _Initialize();
	Input _Initialize();
	//�V�[���}�l�[�W���[����������
	//�G���[������������A�I��
	if (SceneManager_ Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR;
	}
	//�`����ʂ𗠂ɂ���
	setDrawScreen(DX_SCREEN_BACK);

	//�����T�C�Y�ݒ�
	setFontSize(FONT_SIZE);


	//�Q�[�����[�v
	while
}
