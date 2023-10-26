// Move.h: interface for the CMove class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MOVE_H__9391FEFA_006E_45E8_B39C_9D367CBC881D__INCLUDED_)
#define AFX_MOVE_H__9391FEFA_006E_45E8_B39C_9D367CBC881D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


// ////////////////////////////////////////////////////////////////////
//
// move.h
// 定义move 结构体
// 存储棋子或障碍移动过程中的相关参量
//
// ///////////////////////////////////////////////////////////////////


typedef struct MoveStruct
{
	int fromX;                      // 开始位置的x坐标（列标）
	int fromY;                      // 开始位置的y坐标（行标）
	int toX;                        // 目标位置的x坐标（列标）
	int toY;                        // 目标位置的y坐标（行标）
	int evalToCpt;                  // 对电脑的价值
	int evalTohum;                  // 对人脑的价值

	struct MoveStruct *next;
}MoveStruct,*LinkMove;

class CMove  
{
public:
	CMove();
	virtual ~CMove();
	
public:
	LinkMove m_Lmove;               // 创建MoveStruct结构体指针   

public:
	void AddToLMove( int fx, int fy, int tx, int ty, int evalToCmp, int evalTohum );   // 向链表中插入元素
 	void DestroyLMove();                                                               // 销毁链表

};

#endif // !defined(AFX_MOVE_H__9391FEFA_006E_45E8_B39C_9D367CBC881D__INCLUDED_)
