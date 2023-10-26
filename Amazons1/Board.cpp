// Board.cpp: implementation of the CBoard class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Amazons.h"
#include "Board.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBoard::CBoard()
{
	InitBoard();                                               // 调用初始化棋盘函数初始棋盘
}

CBoard::~CBoard()
{

}

void CBoard::InitBoard()
{
	// 初始化棋盘的相关变量
	for( int i=0; i<BOARDY; i++ )
		for( int j=0; j<BOARDX; j++ )
		{
			// 棋盘各个方格的位置
			rectBoard[i][j].left=LEFT+GRIDSIZE*(j+1);             // 左上角x的坐标
			rectBoard[i][j].top=TOP+GRIDSIZE*(i+1);               // 左上角y坐标
			rectBoard[i][j].right=LEFT+GRIDSIZE*(j+2);            // 右下角x坐标
			rectBoard[i][j].bottom=TOP+GRIDSIZE*(i+2);            // 右下角y坐标

			// 棋子位置初始化
			if( (i==0&&(j==3||j==6)) || (i==3&&(j==0||j==9)) )    // 黑棋
			{
				board[i][j] = BLACK;
			}
			else if( (i==6&&(j==0 ||j==9)) || (i==9&&(j==3||j==6)) )  // 白棋
			{
				board[i][j] = WHITE;
			}
			else     // 为空
			{
				board[i][j] = EMPTY;
			}
		}

	// 白棋的初始位置
	whtQueenX[0]=3;
	whtQueenY[0]=9;
	whtQueenX[1]=6;
	whtQueenY[1]=9;
	whtQueenX[2]=0;
	whtQueenY[2]=6;
	whtQueenX[3]=9;
	whtQueenY[3]=6;

	// 黑棋的初始位置
	bkQueenX[0]=3;
	bkQueenY[0]=0;
	bkQueenX[1]=6;
	bkQueenY[1]=0;
	bkQueenX[2]=0;
	bkQueenY[2]=3;
	bkQueenX[3]=9;
	bkQueenY[3]=3;
}
