// AmazonsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Amazons.h"
#include "AmazonsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About 

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAmazonsDlg dialog

CAmazonsDlg::CAmazonsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAmazonsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAmazonsDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(MAKEINTRESOURCE(IDI_ICONAMAZONS));
}

void CAmazonsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAmazonsDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAmazonsDlg, CDialog)
	//{{AFX_MSG_MAP(CAmazonsDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(IDM_EXIT, OnExit)
	ON_COMMAND(IDM_START, OnStart)
	ON_COMMAND(IDM_HELP, OnHelp)
	ON_COMMAND(IDM_HUMFIRST, OnHumfirst)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(IDM_COMFIRST, OnComfirst)
	ON_WM_CONTEXTMENU()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAmazonsDlg message handlers

BOOL CAmazonsDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, TRUE);		// Set small icon
	
	// TODO: Add extra initialization here

	m_Queen.Create(IDB_QUEEN, 40, 40, RGB(255,255,255));               // 创建图片列表
	m_gameOver.Create(IDB_GAMEOVER,320,200,RGB(255,255,255) );         // 创建图片列表

	m_nBoardWidth =  LEFT+12*GRIDSIZE+250;                              // 棋盘的宽
	m_nBoardHeight = LEFT+12*GRIDSIZE+250;                              // 棋盘的高

	arrowToX = 0;
	arrowToY = 0;

	progress=0;                                                        // 初始化游戏进程为0，表示游戏没开始
	first =0;                                                          // 初始化变量 0表示游戏没开始 1电脑先 2人脑先

	// 定义画笔
	pen1.CreatePen(7,1,RGB(170,122,84) );
	pen2.CreatePen(7,1,RGB(228,205,163) );
	pen3.CreateStockObject( 0 );
	pen4.CreatePen(7,10,RGB(170,122,84) );
	// 定义画刷
	brush1.CreateSolidBrush( RGB(170,122,84) );
	brush2.CreateSolidBrush( RGB(228,205,163) );
	brush3.CreateSolidBrush( RGB(160,160,160) );
	lastFirst=0;

	hCursor=AfxGetApp()->LoadStandardCursor(IDC_ARROW);                // 初始化光标
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAmazonsDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAmazonsDlg::OnPaint() 
{
	drawBoard();                                 // 绘制棋盘 
}

// 绘制棋盘函数
void CAmazonsDlg::drawBoard()
{
	CPaintDC dc(this);                           // 创建CPaintDC 实例对象
	CDC MemDC;                                   // 创建DC
	POINT pt;                                    // 点结构体
	
	MemDC.CreateCompatibleDC( &dc );             // 内存缓存DC
	m_BoardBmp.LoadBitmap(IDB_BOARDBK);          // 加载位图
	pOldBmp = MemDC.SelectObject(&m_BoardBmp);   // 选择位图到缓存区

	// 画边框
	MemDC.SelectObject(&pen3);                   // 选入画笔
	MemDC.SelectObject(&brush3);                 // 选入画刷
//	MemDC.Rectangle( LEFT,TOP, LEFT+12*GRIDSIZE,TOP+GRIDSIZE );              // 绘制上边框
//	MemDC.Rectangle( LEFT,TOP, LEFT+GRIDSIZE,TOP+12*GRIDSIZE );              // 绘制左边框
//	MemDC.Rectangle( LEFT+11*GRIDSIZE,TOP,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE); // 绘制右边框
//	MemDC.Rectangle( LEFT,TOP+11*GRIDSIZE,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE); // 绘制下边框

	MemDC.Rectangle(LEFT,TOP,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE);

	// 画边框线
	MemDC.SelectObject(&pen4);                                               // 选入画笔
	MemDC.MoveTo( LEFT,TOP);                                                 // 绘制左边线
	MemDC.LineTo( LEFT,TOP+12*GRIDSIZE );              
	MemDC.MoveTo( LEFT,TOP+12*GRIDSIZE);                                     // 绘制下边框
	MemDC.LineTo( LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE );
	MemDC.MoveTo( LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE );                        // 右边线
	MemDC.LineTo( LEFT+12*GRIDSIZE,TOP);  
	MemDC.MoveTo( LEFT+12*GRIDSIZE,TOP);                                     // 绘制上边线
	MemDC.LineTo( LEFT,TOP ); 

	// 绘制棋盘方格
	for( int i=0; i<BOARDY; i++ )
		for( int j=0; j<BOARDX; j++ )
		{
			// 绘制方格
			if( (i+j)%2 == 1 )                                               // 绘制灰格
			{
				CPen *pPen1 = MemDC.SelectObject( &pen1);
				CBrush *pBrush1 =MemDC.SelectObject( &brush1);
				MemDC.Rectangle( m_queenBoard.rectBoard[i][j] );
				MemDC.SelectObject(pPen1);
				MemDC.SelectObject(pBrush1);
			}
			else                                                             // 绘制橙格
			{
				CPen *pPen2 = MemDC.SelectObject( &pen2);
				CBrush *pBrush2 =MemDC.SelectObject( &brush2);
				MemDC.Rectangle( m_queenBoard.rectBoard[i][j] );
				MemDC.SelectObject(pPen2);
				MemDC.SelectObject(pBrush2);
			}
			if(m_queenBoard.board[i][j]==BLACK)                              // 黑棋位置
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,0,pt,ILD_TRANSPARENT);
			}
			if(m_queenBoard.board[i][j]==WHITE)                              // 白棋位置
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,1,pt,ILD_TRANSPARENT);
			}
			if(m_queenBoard.board[i][j]==ARROW)                              // 障碍位置
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,2,pt,ILD_TRANSPARENT);
			}
		}

	MemDC.SetBkMode( TRANSPARENT );                                          // 背景为透明
	MemDC.SetTextColor( RGB(25,0,0 ) );                                    // 设置文字颜色
	for( i=0; i< BOARDX; i++)
	{
		MemDC.TextOut(LEFT+GRIDSIZE*(i+1)+15,TOP+15,'A'+i);                  // 输出上边框的列标签
		MemDC.TextOut(LEFT+20,TOP+10+GRIDSIZE*(i+1),'0'+i);           // 输出左边框的列标签
		MemDC.TextOut(LEFT+10+GRIDSIZE*11,TOP+10+GRIDSIZE*(i+1),'0'+i);  // 输出右边框的列标签
		MemDC.TextOut(LEFT+GRIDSIZE*(i+1)+15,TOP+10+GRIDSIZE*11,'A'+i);      // 输出下边框的列标签		
	}

	 // 输出轮到谁下了
	if( progress!= 0 &&operation==CATCHWHT )                                 // 白方捕获白棋子
	{
		MemDC.TextOut(LEFT+500,15,"白棋捕获白子！");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"白棋捕获白子！");
	}
	else if( progress!= 0 &&operation==WHTGO )                               // 白棋下          
	{
		MemDC.TextOut(LEFT+500,15,"放置白棋!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"放置白棋!");
	}
	else if(progress!= 0 &&operation==WHTTHROWARROW )                        // 白棋抛出障碍
	{
		MemDC.TextOut(LEFT+500,15,"白棋释放障碍!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"白棋释放障碍!");
	}
	else if( progress!= 0 &&operation==CATCHBK )                             // 黑棋捕获障碍
	{
		MemDC.TextOut(LEFT+500,15,"黑棋捕获黑子！");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"黑棋捕获黑子！");
	}
	else if( progress!=0&&operation==BKGO)                                   // 黑棋下
	{
		MemDC.TextOut(LEFT+500,15,"放置黑棋!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"放置黑棋!");
	}
	else if( progress!= 0 &&operation==BKTHROWARROW )                        // 黑棋抛出障碍
	{
		MemDC.TextOut(LEFT+500,15,"黑棋释放障碍！");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"黑棋释放障碍！");
	}
	else
	{
		MemDC.TextOut(LEFT+500,15,"游戏没开始!");
	}


	pt.x=90;
	pt.y=150;

	if( isWHTOver() )                                                     // 白棋不能动了
	{
		if(lastFirst==2)                                                  // 人脑先（人脑是白棋）
		{
			m_gameOver.Draw( &MemDC,0,pt,ILD_TRANSPARENT);                // 人脑输（You）
		}
		else                                                              // 否则电脑输
		{
			m_gameOver.Draw( &MemDC,1,pt,ILD_TRANSPARENT);                
		}
	}
	if( isBKOver() )                                                       // 黑棋不能移动啦
	{
		if(lastFirst==1)                                                   // 电脑先（电脑是白棋）
		{
			m_gameOver.Draw( &MemDC,0,pt,ILD_TRANSPARENT);                 // 人脑输（You）
		}
		else                                                               // 否则电脑输
		{ 
			m_gameOver.Draw( &MemDC,1,pt,ILD_TRANSPARENT);                
		}
	}

	dc.BitBlt(0, 0, m_nBoardWidth, m_nBoardHeight, &MemDC, 0, 0, SRCCOPY);   // 画出缓存中的图片
	MemDC.SelectObject(&pOldBmp);                                            // 
	MemDC.DeleteDC();                                                        // 删除DC
	m_BoardBmp.DeleteObject();                                               // 删除位图对象
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAmazonsDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 菜单操作
//
// 退出
void CAmazonsDlg::OnExit() 
{
	// TODO: Add your command handler code here

	// 弹出对话框 确定是否退出游戏
	if( MessageBox("确定退出游戏?",NULL,MB_OKCANCEL) == IDOK )
	{
    	PostQuitMessage(0);                                                    // 退出游戏
	}
	
}

void CAmazonsDlg::OnStart() 
{
	// TODO: Add your command handler code here

	// 弹出对话框确定谁先走
	if(first==0 &&progress==0)
	{
		if(MessageBox("你确定电脑先？\n是：电脑先\n否：人脑先",NULL,MB_YESNO)==IDYES)
		{
			first=1;                                              // 电脑先
		}
		else
		{
			first=2;                                              // 人脑先
		}
	}
	if(progress == 0)
	{
		m_queenBoard.InitBoard();
		progress = 1;                                               // 游戏开始
		operation = CATCHWHT;                                       // 白棋走
	}

	// 电脑走
	if( first == 1 && progress == 1)
	{

		computer.createPosition(m_queenBoard.board,m_queenBoard.bkQueenX,
				m_queenBoard.bkQueenY,m_queenBoard.whtQueenX,m_queenBoard.whtQueenY);
		computerFromX = computer.QueenFromX;
		computerFromY = computer.QueenFromY;
		computerToX = computer.QueenGoX;
		computerToY = computer.QueenGoY;
		arrowToX = computer.ArrowToX;
		arrowToY = computer.ArrowToY;

		m_queenBoard.board[computerFromY][computerFromX] = EMPTY;
		m_queenBoard.board[computerToY][computerToX] = WHITE;
		
		operation = WHTGO;
		ReferX= computerFromX;
		ReferY = computerFromY;
		changeQueenPos( computerToX, computerToY);

		m_queenBoard.board[arrowToY][arrowToX] = ARROW;
		operation = CATCHBK;
	}

	InvalidateRect(NULL,FALSE);                                   //  刷新
   	UpdateWindow();   
	
}

void CAmazonsDlg::OnHelp() 
{
	// TODO: Add your command handler code here
	
}

void CAmazonsDlg::OnHumfirst() 
{
	// TODO: Add your command handler code here

	if(progress==0)
	{
    	first = 2;                                                   // 人脑先
	}

	InvalidateRect(NULL,FALSE);                                      //  刷新
   	UpdateWindow();   	
}

void CAmazonsDlg::OnComfirst() 
{
	// TODO: Add your command handler code here
	
	if(progress==0)
	{
    	first = 1;                                                   // 电脑先  
	}
	InvalidateRect(NULL,FALSE);                                      // 刷新
   	UpdateWindow(); 
}


// ///////////////////////////////////////////////////////////////////////////////////
//
// 鼠标操作
//
// 

void CAmazonsDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	int xBoard=0;
	int yBoard=0;

	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE)            // 光标在方格区
	{
		xBoard=(point.x-LEFT-GRIDSIZE)/GRIDSIZE;                       // 计算x的位置
		yBoard=(point.y-TOP-GRIDSIZE)/GRIDSIZE;                        // 计算y的位置

		if( m_queenBoard.board[yBoard][xBoard]==EMPTY
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY) )
		{
			if( operation==WHTTHROWARROW )                             // 白棋释放障碍
			{
				if( first == 2 )                                       // 人脑先（白棋为人脑）人脑走
				{
					m_queenBoard.board[yBoard][xBoard]=ARROW;          // 白方放置障碍
				}

				if( !isGameOver() && first == 2 )                      // 游戏没有结束
				{
					progress++;                                        // 游戏下一步
					operation=CATCHBK;                                 // 轮到黑棋捕获棋子

					// 调用createPosition 产生棋子移动的走法以及 障碍释放的位置
					computer.createPosition(m_queenBoard.board,m_queenBoard.whtQueenX,
						m_queenBoard.whtQueenY,m_queenBoard.bkQueenX,m_queenBoard.bkQueenY);
					
					// 接受走法 相关位置坐标
					computerFromX = computer.QueenFromX;                 // 棋子起始点
					computerFromY = computer.QueenFromY;
					computerToX = computer.QueenGoX;                   // 棋子终止点             
					computerToY = computer.QueenGoY;
					arrowToX = computer.ArrowToX;                      // 障碍的落点
					arrowToY = computer.ArrowToY;

					// 改变棋盘的状态
					m_queenBoard.board[computerFromY][computerFromX] = EMPTY;
					m_queenBoard.board[computerToY][computerToX] = BLACK;
					
					operation = BKGO;                                  // 下一步为黑棋走
					ReferX= computerFromX;                             // 改变参考点
					ReferY = computerFromY;
					changeQueenPos( computerToX, computerToY);         // 改变棋子的坐标

					m_queenBoard.board[arrowToY][arrowToX] = ARROW;    // 释放障碍

					// 如果游戏没有结束 进行下一步
					if( !isGameOver( ) )
					{
						progress++;
						operation = CATCHWHT;                         // 下一步 白棋捕获障碍
					}
				}
			}

			if( operation==BKTHROWARROW )                              // 黑棋释放障碍
			{
				if( first == 1 )                                       // 如果人脑先（白棋为电脑），黑棋为人脑，人脑走
				{
					m_queenBoard.board[yBoard][xBoard]=ARROW;          // 黑方放置障碍
				}

				if( !isGameOver( ) && first == 1 )                     // 游戏还没结束
				{
					progress++;                                        // 游戏下一步
					operation = CATCHWHT;                                // 轮到白棋捕获棋子

					// 调用电脑走法函数产生走法
					computer.createPosition(m_queenBoard.board,m_queenBoard.bkQueenX,
						m_queenBoard.bkQueenY,m_queenBoard.whtQueenX,m_queenBoard.whtQueenY);
					// 获取生成走法的相关参数
					computerFromX=computer.QueenFromX;                // 棋子的出发位置
					computerFromY = computer.QueenFromY;
					computerToX = computer.QueenGoX;                  // 棋子的落点
					computerToY = computer.QueenGoY;
		    		arrowToX = computer.ArrowToX;                     // 障碍的落点
					arrowToY = computer.ArrowToY;

					// 改变棋盘状态
					m_queenBoard.board[computerFromY][computerFromX] = EMPTY;
					m_queenBoard.board[computerToY][computerToX] = WHITE;
					
					operation = WHTGO;                                // 下一步白棋走
					ReferX= computerFromX;                            // 改变参考位置变量
					ReferY = computerFromY;
					changeQueenPos( computerToX, computerToY);        // 改变棋子的位置

					m_queenBoard.board[arrowToY][arrowToX] = ARROW;   // 释放障碍

					// 游戏如果没有结束  进行下一步
					if(!isGameOver( ) )
					{
						progress ++;
						operation = CATCHBK;                          // 下一步黑棋捕获黑子
					}
				}
			}
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // 更新窗口
		}

		if( m_queenBoard.board[yBoard][xBoard]==BLACK                  // 捕获黑棋
			&& operation==CATCHBK)                                     // (progress+first)%2==1)
		{
			if( first == 1 )                                           // 电脑先 捕获黑棋人脑走
			{
				m_queenBoard.board[yBoard][xBoard]=EMPTY;              // 置空当前位置
				ReferX=xBoard;                                         // x的参考位置
				ReferY=yBoard;                                         // y的参考位置
				operation=BKGO;                                        // 轮到放置黑棋
			}
			
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // 更新窗口
		}
		if(m_queenBoard.board[yBoard][xBoard]==WHITE                   // 捕获白棋
			&& operation==CATCHWHT)                                    // (progress+first)%2==0)
		{
			if( first == 2 )                                           // 人脑先 捕获白棋 人脑走
			{
				m_queenBoard.board[yBoard][xBoard]=EMPTY;              // 置空当前位置
				ReferX=xBoard;                                         // x的参考位置
				ReferY=yBoard;                                         // y的参考位置
				operation=WHTGO;                                       // 轮到放置白棋
			}
			
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // 更新窗口
		}

		// 放置白棋
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY && operation==WHTGO
			&& isOKSetQueen( xBoard, yBoard, ReferX, ReferY) )             //(progress+first)%2==0)
		{
			if( first == 2 )                                               // 人脑先 放置白棋人脑走 
			{
				changeQueenPos( xBoard, yBoard);                         // 改变皇后位置
				m_queenBoard.board[yBoard][xBoard] = WHITE;              // 放置白棋
				ReferX = xBoard;                                         // x的参考位置
				ReferY = yBoard;                                         // y的参考位置
				operation = WHTTHROWARROW;                                   // 轮到白棋抛出障碍
			}
			
			InvalidateRect(NULL,FALSE);                                  // 
			UpdateWindow();                                              // 更新窗口
		}
		// 放置黑棋
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY&&operation==BKGO
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY))                //(progress+first)%2==1)
		{
			if( first == 1 )                                             // 电脑先 放置黑棋人脑走
			{
				changeQueenPos(xBoard,yBoard);                           // 改变皇后位置
				m_queenBoard.board[yBoard][xBoard]=BLACK;                // 放置黑棋
				ReferX=xBoard;                                           // x的参考位置
				ReferY=yBoard;                                           // y的参考位置
				operation=BKTHROWARROW;                                      // 轮到黑棋抛出障碍 
			}
			
			InvalidateRect(NULL,FALSE);                                  // 
			UpdateWindow();                                              // 更新窗口
		}
	} 
	
	CDialog::OnLButtonDown(nFlags, point);
}

// 按下鼠标右键导入帮助菜单
void CAmazonsDlg::OnContextMenu(CWnd* pWnd, CPoint point) 
{
	// TODO: Add your message handler code here
	CMenu menu;                                                                 //定义菜单实例
	menu.LoadMenu(IDR_HELPMENU);                                                //导入菜单IDR_HELPMENU
	menu.GetSubMenu(0)->TrackPopupMenu(TPM_RIGHTBUTTON ,point.x,point.y,this);  //设置菜单显示格式
	
}

void CAmazonsDlg::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	
	CDialog::OnLButtonUp(nFlags, point);
}

//鼠标移动
void CAmazonsDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	int xBoard=0;
	int yBoard=0;
	
	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE )
	{
		cursorPos = point;                                                                        // 获得当前光标的位置
	}

	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE 
		&& (operation==WHTGO || operation==BKGO ||
		operation==WHTTHROWARROW || operation==BKTHROWARROW) )                                     // 光标在方格区
	{
		xBoard=(point.x-LEFT-GRIDSIZE)/GRIDSIZE;                                                  // 计算x的位置
		yBoard=(point.y-TOP-GRIDSIZE)/GRIDSIZE;                                                   // 计算y的位置
  
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY 
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY) )
		{
			hCursor=AfxGetApp()->LoadCursor(MAKEINTRESOURCE(IDC_ALLOW));                          // 设着为“允许放置”光标
			SetCursor(hCursor);
		}
		else
		{
			hCursor=AfxGetApp()->LoadCursor(MAKEINTRESOURCE(IDC_REFUSE));                         // 设着为“禁止放置”光标
			SetCursor(hCursor);
		}
	}

	InvalidateRect(NULL,FALSE);                                                                   // 
	UpdateWindow();                                                                               // 更新窗口 */
	
	CDialog::OnMouseMove(nFlags, point);
}


// /////////////////////////////////////////////////////////////////////////////////////
//
//
// 判断某一位置是否允许放置皇后或则障碍 
// 返回TRUE 表示允许 否则不允许
bool CAmazonsDlg::isOKSetQueen(int goal_x, int goal_y, int refer_x, int refer_y )
{
	int max=0;
	int min=0;
	int max1=0;
	int min1=0;                                    // 变量，用来存储目标位置以及参考位置的行列角标的最大或最小值

	// 判断某一位置是否允许放置
	if( refer_x==goal_x )                                     // 同一列
	{
		// 初始化最大最小值
		max=goal_y;
		min=refer_y;

		if(goal_y<refer_y)                                    // 初始化值不是最大最小值
		{
			max=refer_y;                                      // 重新赋值
			min=goal_y;
		}

		// 判断目标位置与参考位置之间的列是否已经被占用
		for(int i=min+1;i<max;i++)
		{
			if( m_queenBoard.board[i][refer_x] !=EMPTY )
			{
				return false;                                 // 已占用，不可以放置 ，返回false
			} 
		}  
        if( i==max)                                           // 没被占用 
		{
			return true;                                      // 返回TRUE
		}
	}
	else if( refer_y==goal_y )                                // 同一行
	{
		// 初始化最大最小值
		max=goal_x;
		min=refer_x;

		// 初始化不满足条件
		if(goal_x<refer_x)
		{
			max=refer_x;                                     // 重新给最大最小值赋值
			min=goal_x;
		}

		// 判断目标位置 和 参考位置之间的行是否被占
		for(int i=min+1;i<max;i++)
		{
			if( m_queenBoard.board[refer_y][i] !=EMPTY )     // 如果因被占用
			{
				return false;                                // 不可以放置，返回false
			}
		} 
		if( i==max)                                          // 没有被占 返回true
		{
			return true;
		}
	}
	else if( abs(refer_x-goal_x)==abs(refer_y-goal_y) )      // 同意斜线上
	{
		// 初始化最大最小值
		max=goal_x;
		min=refer_x;
		max1=goal_y;
		min1=refer_y;

		// 左右斜线
		if( (refer_x-goal_x)*(refer_y-goal_y)>0)
		{
	    	if(goal_x<refer_x)                                // 不满足条件 
			{
				max=refer_x;                                  // 重新赋值
				min=goal_x;
				max1=refer_y;                                 // 重新赋值
				min1=goal_y;
			
			}
			
			// 判断目标位置与参考位置之间的斜线上是否已被棋子占用
			int i,j;
			for(i=min+1,j=min1+1; i<max&&j<max1;i++,j++)
			{
				if( m_queenBoard.board[j][i] !=EMPTY )        // 已经占用
				{
					return false;                             // 不可以放置，返回false
				}
			}
			if( i==max||j==max1)                              // 没被占用
			{
				return true;                                  // 返回true
			} 
		}
		else                                                  // 右左斜线
		{
			if(goal_x<refer_x)
			{
				max=refer_x;                                  //  重新给最大最小值赋值
				min=goal_x;	
			}
			if(goal_y<refer_y)
			{
				max1=refer_y;                                 // 
				min1=goal_y;
			}
			// 判断斜线间是否已经被占用
			int i,j;
			for(i=min+1,j=max1-1; i<max&&j>min1;i++,j--)
			{
				if( m_queenBoard.board[j][i] !=EMPTY )       // 已经被占
				{
					return false;                            // 不可以放置，返回false
				}
			}
			if( i==max||j==min1)                             // 没被占，返回true
			{
				return true;
			} 
		}
	}
	else                                                     // 否则不满足游戏放置规则
	{
		return false;                                        // 返回false
	}

	return false;                                            // 返回false
} // 函数结束

// 改变皇后的位置（行标和列标）函数
void CAmazonsDlg::changeQueenPos( int x, int y)
{
	// 白棋放置白子
	if( operation == WHTGO )
	{
		// 寻找是哪一个皇后移动的
		for( int i=0; i<4; i++ )
		{
			if( m_queenBoard.whtQueenX[i]==ReferX && m_queenBoard.whtQueenY[i]==ReferY )
			{
				// 改变皇后位置坐标
				m_queenBoard.whtQueenX[i] = x;
				m_queenBoard.whtQueenY[i] = y;
				break;
			}
		}
	}

	// 黑棋放置黑子
	if( operation == BKGO )
	{
		// 寻找是哪一个皇后移动的
		for( int i=0; i<4; i++ )
		{
			if( m_queenBoard.bkQueenX[i]==ReferX && m_queenBoard.bkQueenY[i]==ReferY )
			{
				// 改变位置坐标
				m_queenBoard.bkQueenX[i] = x;
				m_queenBoard.bkQueenY[i] = y;
				break;
			} // if 条件语句结束
		} // for 循环结束
	} // if 条件判断结束
} // 函数结束


// 判断游戏是否结束函数,返回0 没结束 否则结束
bool CAmazonsDlg::isGameOver()
{

	if( isWHTOver() || isBKOver() )                                    // 只有白棋或黑棋有一方不能移动游戏结束
	{
		lastFirst=first;
		first=0;
		progress=0;
		return true;                                                   // 如果不满足上面的条件 游戏结束
	}
	
	return false;                                                      // 游戏没有结束
}  // 函数结束

// 判断白棋能否移动
bool CAmazonsDlg::isWHTOver()
{
	// 循环判断白棋是否存在还能移动的棋子
	for(int i=0; i<4; i++)
	{
		// 获得棋子的行标和列标
		int x=m_queenBoard.whtQueenX[i];
		int y=m_queenBoard.whtQueenY[i];

		// 某个棋子周围是否存在空隙
		if(( x>0 && y>0 && m_queenBoard.board[y-1][x-1] == EMPTY )||( y>0 && m_queenBoard.board[y-1][x] == EMPTY )||
			( y>0 && x<9 && m_queenBoard.board[y-1][x+1] == EMPTY )||( x>0 && m_queenBoard.board[y][x-1] == EMPTY)||
			( x<9 && m_queenBoard.board[y][x+1] == EMPTY )||( x>0 && y<9 && m_queenBoard.board[y+1][x-1] == EMPTY)||
			( y<9 && m_queenBoard.board[y+1][x] == EMPTY)||( x<9 && y<9 && m_queenBoard.board[y+1][x+1] == EMPTY ))
		{
			return false;                                         // 游戏还没结束
		}
	}

	return true;                                                   // 如果不满足上面的条件 白棋不能移动
}

// 判断黑棋能否移动
bool CAmazonsDlg::isBKOver()
{
	// 循环判断黑棋是否存在还能移动的棋子
	for(int i=0; i<4; i++)
	{
		// 获得棋子的行标和列标
		int x=m_queenBoard.bkQueenX[i];
		int y=m_queenBoard.bkQueenY[i];

		// 某个棋子周围是否存在空隙
		if(( x>0 && y>0 && m_queenBoard.board[y-1][x-1]==EMPTY ) || ( y>0 &&m_queenBoard.board[y-1][x]==EMPTY ) ||
			( y>0 && x<9 && m_queenBoard.board[y-1][x+1]==EMPTY ) || ( x>0 && m_queenBoard.board[y][x-1]==EMPTY) ||
			( x<9 && m_queenBoard.board[y][x+1]==EMPTY ) || ( x>0&&y<9&&m_queenBoard.board[y+1][x-1]==EMPTY)||
			( y<9 && m_queenBoard.board[y+1][x]==EMPTY) || ( x<9&&y<9&&m_queenBoard.board[y+1][x+1]==EMPTY ) )
		{
			return false;                                          // 游戏还没结束
		}
	}

	return true;                                                   // 不满足上述条件 黑棋不能移动
}


