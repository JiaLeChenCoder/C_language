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
// ����move �ṹ��
// �洢���ӻ��ϰ��ƶ������е���ز���
//
// ///////////////////////////////////////////////////////////////////


typedef struct MoveStruct
{
	int fromX;                      // ��ʼλ�õ�x���꣨�б꣩
	int fromY;                      // ��ʼλ�õ�y���꣨�б꣩
	int toX;                        // Ŀ��λ�õ�x���꣨�б꣩
	int toY;                        // Ŀ��λ�õ�y���꣨�б꣩
	int evalToCpt;                  // �Ե��Եļ�ֵ
	int evalTohum;                  // �����Եļ�ֵ

	struct MoveStruct *next;
}MoveStruct,*LinkMove;

class CMove  
{
public:
	CMove();
	virtual ~CMove();
	
public:
	LinkMove m_Lmove;               // ����MoveStruct�ṹ��ָ��   

public:
	void AddToLMove( int fx, int fy, int tx, int ty, int evalToCmp, int evalTohum );   // �������в���Ԫ��
 	void DestroyLMove();                                                               // ��������

};

#endif // !defined(AFX_MOVE_H__9391FEFA_006E_45E8_B39C_9D367CBC881D__INCLUDED_)
