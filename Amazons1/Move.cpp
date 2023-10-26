// Move.cpp: implementation of the CMove class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Amazons.h"
#include "Move.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMove::CMove()
{
	m_Lmove = (LinkMove)malloc(sizeof(MoveStruct) );         // ����һ����ͷ���Ŀյ�����
	m_Lmove->next = NULL;                                      

}

CMove::~CMove()
{

}

// �����ݲ��뵽����
void CMove::AddToLMove( int fx, int fy, int tx, int ty, int evalToCpt, int evalToHum )
{
	LinkMove pm;
	pm = (LinkMove)malloc( sizeof(MoveStruct) );             // �����ڴ�

	// ������ֵ����������ر���
	pm->fromX=fx;
	pm->fromY=fy;
	pm->toX=tx;
	pm->toY=ty;
	pm->evalToCpt=evalToCpt;
	pm->evalTohum=evalToHum;

	// ��pm��������
	pm->next = m_Lmove->next;
	m_Lmove->next = pm;
}
// ��������

// ��������
void CMove::DestroyLMove()
{
	LinkMove pm;
	pm = (LinkMove)malloc( sizeof(MoveStruct) );             // �����ڴ�

	while( m_Lmove->next != NULL )
	{
		pm = m_Lmove->next;

		m_Lmove->next = m_Lmove->next->next;

		free(pm);
	}

}