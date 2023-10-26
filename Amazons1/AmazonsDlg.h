// AmazonsDlg.h : header file
//

#if !defined(AFX_AMAZONSDLG_H__4FD1949E_E82C_4F79_8D9A_F2BCB4C9A4D3__INCLUDED_)
#define AFX_AMAZONSDLG_H__4FD1949E_E82C_4F79_8D9A_F2BCB4C9A4D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAmazonsDlg dialog

#include "Board.h"
#include "Computer.h"

class CAmazonsDlg : public CDialog
{
// Construction
public:
	CAmazonsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAmazonsDlg)
	enum { IDD = IDD_AMAZONS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAmazonsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

public:
	void drawBoard();                                  // ��������
	bool isOKSetQueen( int goal_x, int goal_y, int  refer_x, int refer_y);      // ȷ��ĳһλ���Ƿ���������ϰ�������
	void changeQueenPos(int x, int y);                  // �ı�ʺ��λ�ã��б���б꣩       
	bool isGameOver();                                  // �ж���Ϸ�Ƿ����
	bool isWHTOver();                                   // �жϰ����Ƿ��ܹ��ƶ�
	bool isBKOver();                                    // �жϺ����ܷ��ƶ�

private:
	CBoard m_queenBoard;                                // ��������ʵ������
	CBitmap m_BoardBmp;                                 // ����λͼʵ������ ���̱���λͼ 
	CImageList m_Queen;                                 // ����ͼ���б�ʵ������  �ʺ�ͼƬ
	CImageList m_gameOver;                              // ����ͼƬ�б�ʵ������  ��Ϸ����ͼƬ
	int m_nBoardWidth;                                  // ���̵Ŀ�
	int m_nBoardHeight;                                 // ���̵ĸ�
	int progress;                                       // ���� ��¼��Ϸ��ʼ�Ĳ���
	BYTE first;                                         // ��¼˭���ߣ�1Ϊ���ԣ�2������
	BYTE lastFirst;                                     // ��¼˭�� ͬfirst
	BYTE operation;                                     // ��Ϸ��������
	int ReferX;                                         // x�Ĳο�λ��
	int ReferY;                                         // y�Ĳο�λ��

	int computerFromX;
	int computerFromY;
	int computerToX;                                    // �������ӷŵ�λ�õ�X�б�
	int computerToY;                                    // �������ӷŵ�λ�õ�Y�б�
	int arrowToX;                                       // �����ϰ��ŵ�λ�õ�X�б�
	int arrowToY;                                       // �����ϰ��ŵ�λ�õ�Y�б�

	CComputer computer;                                 //  ����ʵ������

	HCURSOR hCursor;                                    // �����
	POINT cursorPos;                                    // �洢��ǰ����λ��

	CBitmap *pOldBmp;                                   // λͼ ʵ������
	CPen pen1;
	CPen pen2;
	CPen pen3;
	CPen pen4;                                          // ���廭��ʵ������
	CBrush brush1;
	CBrush brush2;
	CBrush brush3;                                      // ���廭ˢʵ������

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAmazonsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExit();
	afx_msg void OnStart();
	afx_msg void OnHelp();
	afx_msg void OnHumfirst();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnComfirst();
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AMAZONSDLG_H__4FD1949E_E82C_4F79_8D9A_F2BCB4C9A4D3__INCLUDED_)
