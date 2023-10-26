// Board.h: interface for the CBoard class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_)
#define AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "define.h"                                   // �궨��ͷ�ļ�

class CBoard  
{
public:
	CBoard();
	virtual ~CBoard();
	void InitBoard();                              // ��ʼ�����̺���
	
public:
	CRect rectBoard[BOARDY][BOARDX];                  // ���̸������������
	BYTE board[BOARDX][BOARDY];                       // ���� �������̷����״̬
	int  whtQueenX[4];                                // ����ʺ�x����ֵ���б꣩
	int  whtQueenY[4];                                // ����ʺ�y����ֵ���б꣩
	int  bkQueenX[4];                                 // ����ʺ�x����ֵ���б꣩
	int  bkQueenY[4];                                 // ����ʺ�y����ֵ���б꣩

};

#endif // !defined(AFX_BOARD_H__355C8D7E_19B5_4273_A230_CC1CBD7C8C6A__INCLUDED_)
