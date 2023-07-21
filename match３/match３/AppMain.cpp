#pragma once
/**************************]
*プログラム実習
*マッチ３ゲーム制作
*************************/

#include"DxLib.h"
#include"FreamControl.h"
#include"InputControl.h"
#include"SceneManager.h"

/*************
*マクロ定義
*****************/
#define SCREEN_HEIGHT   (480)//スクリーンサイズ(高さ）
#define SCREEN_WIDTH    (640)//スクリーンサイズ(幅)
#define SCREEN_COLORBIT (32)//スクリーンカラービット
#define FONT_SIZE       (20)//文字サイズ
/**************************************
*型定義
***************************************/

/***************************************
プロトタイプ宣言
***********************************/

int WINAPI WnMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCMdLine, _In_ int nShowCMd)
{


	//ウィンドウタイトル設定
	SetMainWindowText("Match3Puzzle");
	//ウィンドモード起動
	ChangeWindowMode(TRUE);
	//画面サイズの最大サイズ、カラービット数を設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dxライブラリ初期化処理
	//エラーが発生したら、終了
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}
	//各機能の初期化処理
	FreamControl _Initialize();
	Input _Initialize();
	//シーンマネージャー初期化処理
	//エラーが発生したら、終了
	if (SceneManager_ Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR;
	}
	//描画先画面を裏にする
	SetDrawScreen(DX_SCREEN_BACK);

	//文字サイズ設定
	SetFontSize(FONT_SIZE);


	//ゲームループ
	while (ProcessMessage() != D_ERROR && Input_Escap() == FALSE)
	{
//入力制御機能更新処理
		Input_Update();
		//シーンマネージャー更新処理
		SceneManager_Update();
		
		//画面クリア
		ClearDrawScreen();
		//シーンマネージャー描画処理
		SceneManager_Draw();
		//フレームレート制御処理
		FreamControl_Update();
		//画面の内容を表画面に反映
		ScreenFlip();
	}
	//Dxライブラリ使用の終了処理
	DxLib_End();
	return 0;
}
