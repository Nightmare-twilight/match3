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
#sefine SCREEN_COLORBIT (32)//�X�N���[���J���[�r�b�g
#define FONT_SIZE       (20)//�����T�C�Y
/**************************************
*�^��`
***************************************/



/***************************************
�v���g�^�C�v�錾
***********************************/

int WINAPI WnMain(_In_HINSTANCE hinstance, _In_opt_HINSTANCE hPrevInstance,
	_In_LPSTR lpCMdLine, _Int nShowCMd)
{


	//�E�B���h�E�^�C�g���ݒ�
	setmainWindowText("Match3Puzzle");
	//�E�B���h���[�h�N��
	ChangeWindowMode(TRUE);
	//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
	setGraphMode(SCREEN_WIDDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dx���C�u��������������
	//�G���[������������A�I��
	if (DxLib_Init()ERROR)
	{
		return D_ERROR;
	}
//�e�@�\�̏���������
	FreamControl_Initialize();
	ZInput_Initialize();
	//�V�[���}�l�[�W���[����������
	//�G���[������������A�I��
	if{}
}
