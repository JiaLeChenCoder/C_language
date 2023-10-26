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
	void drawBoard();                                  // 绘制棋盘
	bool isOKSetQueen( int goal_x, int goal_y, int  refer_x, int refer_y);      // 确定某一位置是否满足放置障碍、棋子
	void changeQueenPos(int x, int y);                  // 改变皇后的位置（行标和列标）       
	bool isGameOver();                                  // 判断游戏是否结束
	bool isWHTOver();                                   // 判断白棋是否能够移动
	bool isBKOver();                                    // 判断黑棋能否移动

private:
	CBoard m_queenBoard;                                // 定义棋盘实例对象
	CBitmap m_BoardBmp;                                 // 创建位图实例对象 棋盘背景位图 
	CImageList m_Queen;                                 // 创建图像列表实例对象  皇后图片
	CImageList m_gameOver;                              // 创建图片列表实例对象  游戏结束图片
	int m_nBoardWidth;                                  // 棋盘的宽
	int m_nBoardHeight;                                 // 棋盘的高
	int progress;                                       // 进程 记录游戏开始的步数
	BYTE first;                                         // 记录谁先走，1为电脑，2是人脑
	BYTE lastFirst;                                     // 记录谁先 同first
	BYTE operation;                                     // 游戏操作流程
	int ReferX;                                         // x的参考位置
	int ReferY;                                         // y的参考位置

	int computerFromX;
	int computerFromY;
	int computerToX;                                    // 电脑棋子放的位置的X列标
	int computerToY;                                    // 电脑棋子放的位置的Y行标
	int arrowToX;                                       // 电脑障碍放的位置的X列标
	int arrowToY;                                       // 电脑障碍放的位置的Y行标

	CComputer computer;                                 //  电脑实例对象

	HCURSOR hCursor;                                    // 光标句柄
	POINT cursorPos;                                    // 存储当前光标的位置

	CBitmap *pOldBmp;                                   // 位图 实例对象
	CPen pen1;
	CPen pen2;
	CPen pen3;
	CPen pen4;                                          // 定义画笔实例对象
	CBrush brush1;
	CBrush brush2;
	CBrush brush3;                                      // 定义画刷实例对象

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
