#pragma once
/**************************]
*プログラム実習
*マッチ３ゲーム制作
*************************/

#include"DxLib.h"
#include"FreamControl.h"

/*************
*マクロ定義
*****************/
#define SCREEN_HEIGHT   (480)//スクリーンサイズ(高さ）
#define SCREEN_WIDTH    (640)//スクリーンサイズ(幅)
#sefine SCREEN_COLORBIT (32)//スクリーンカラービット
#define FONT_SIZE       (20)//文字サイズ
/**************************************
*型定義
***************************************/



/***************************************
プロトタイプ宣言
***********************************/

int WINAPI WnMain(_In_HINSTANCE hinstance,_In_opt_HINSTANCE hPrevInstance,
	_In_LPSTR lpCMdLine,_Int nShowCMd)
