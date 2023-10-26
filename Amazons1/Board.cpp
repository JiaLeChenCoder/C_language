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
	InitBoard();                                               // ���ó�ʼ�����̺�����ʼ����
}

CBoard::~CBoard()
{

}

void CBoard::InitBoard()
{
	// ��ʼ�����̵���ر���
	for( int i=0; i<BOARDY; i++ )
		for( int j=0; j<BOARDX; j++ )
		{
			// ���̸��������λ��
			rectBoard[i][j].left=LEFT+GRIDSIZE*(j+1);             // ���Ͻ�x������
			rectBoard[i][j].top=TOP+GRIDSIZE*(i+1);               // ���Ͻ�y����
			rectBoard[i][j].right=LEFT+GRIDSIZE*(j+2);            // ���½�x����
			rectBoard[i][j].bottom=TOP+GRIDSIZE*(i+2);            // ���½�y����

			// ����λ�ó�ʼ��
			if( (i==0&&(j==3||j==6)) || (i==3&&(j==0||j==9)) )    // ����
			{
				board[i][j] = BLACK;
			}
			else if( (i==6&&(j==0 ||j==9)) || (i==9&&(j==3||j==6)) )  // ����
			{
				board[i][j] = WHITE;
			}
			else     // Ϊ��
			{
				board[i][j] = EMPTY;
			}
		}

	// ����ĳ�ʼλ��
	whtQueenX[0]=3;
	whtQueenY[0]=9;
	whtQueenX[1]=6;
	whtQueenY[1]=9;
	whtQueenX[2]=0;
	whtQueenY[2]=6;
	whtQueenX[3]=9;
	whtQueenY[3]=6;

	// ����ĳ�ʼλ��
	bkQueenX[0]=3;
	bkQueenY[0]=0;
	bkQueenX[1]=6;
	bkQueenY[1]=0;
	bkQueenX[2]=0;
	bkQueenY[2]=3;
	bkQueenX[3]=9;
	bkQueenY[3]=3;
}
