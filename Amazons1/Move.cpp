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
	m_Lmove = (LinkMove)malloc(sizeof(MoveStruct) );         // 生成一个带头结点的空单链表
	m_Lmove->next = NULL;                                      

}

CMove::~CMove()
{

}

// 将数据插入到链表
void CMove::AddToLMove( int fx, int fy, int tx, int ty, int evalToCpt, int evalToHum )
{
	LinkMove pm;
	pm = (LinkMove)malloc( sizeof(MoveStruct) );             // 分配内存

	// 将变量值赋给链表相关变量
	pm->fromX=fx;
	pm->fromY=fy;
	pm->toX=tx;
	pm->toY=ty;
	pm->evalToCpt=evalToCpt;
	pm->evalTohum=evalToHum;

	// 将pm插入链表
	pm->next = m_Lmove->next;
	m_Lmove->next = pm;
}
// 函数结束

// 销毁链表
void CMove::DestroyLMove()
{
	LinkMove pm;
	pm = (LinkMove)malloc( sizeof(MoveStruct) );             // 分配内存

	while( m_Lmove->next != NULL )
	{
		pm = m_Lmove->next;

		m_Lmove->next = m_Lmove->next->next;

		free(pm);
	}

}