// Board.h: interface for the CBoard class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_)
#define AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "define.h"                                   // 宏定义头文件

class CBoard  
{
public:
	CBoard();
	virtual ~CBoard();
	void InitBoard();                              // 初始化棋盘函数
	
public:
	CRect rectBoard[BOARDY][BOARDX];                  // 棋盘各个方格的坐标
	BYTE board[BOARDX][BOARDY];                       // 棋盘 保存棋盘方格的状态
	int  whtQueenX[4];                                // 白棋皇后x坐标值（列标）
	int  whtQueenY[4];                                // 白棋皇后y坐标值（行标）
	int  bkQueenX[4];                                 // 黑棋皇后x坐标值（列标）
	int  bkQueenY[4];                                 // 黑棋皇后y坐标值（行标）

};

#endif // !defined(AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_)
