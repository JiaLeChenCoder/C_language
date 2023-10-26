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

	m_Queen.Create(IDB_QUEEN, 40, 40, RGB(255,255,255));               // ����ͼƬ�б�
	m_gameOver.Create(IDB_GAMEOVER,320,200,RGB(255,255,255) );         // ����ͼƬ�б�

	m_nBoardWidth =  LEFT+12*GRIDSIZE+250;                              // ���̵Ŀ�
	m_nBoardHeight = LEFT+12*GRIDSIZE+250;                              // ���̵ĸ�

	arrowToX = 0;
	arrowToY = 0;

	progress=0;                                                        // ��ʼ����Ϸ����Ϊ0����ʾ��Ϸû��ʼ
	first =0;                                                          // ��ʼ������ 0��ʾ��Ϸû��ʼ 1������ 2������

	// ���廭��
	pen1.CreatePen(7,1,RGB(170,122,84) );
	pen2.CreatePen(7,1,RGB(228,205,163) );
	pen3.CreateStockObject( 0 );
	pen4.CreatePen(7,10,RGB(170,122,84) );
	// ���廭ˢ
	brush1.CreateSolidBrush( RGB(170,122,84) );
	brush2.CreateSolidBrush( RGB(228,205,163) );
	brush3.CreateSolidBrush( RGB(160,160,160) );
	lastFirst=0;

	hCursor=AfxGetApp()->LoadStandardCursor(IDC_ARROW);                // ��ʼ�����
	
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
	drawBoard();                                 // �������� 
}

// �������̺���
void CAmazonsDlg::drawBoard()
{
	CPaintDC dc(this);                           // ����CPaintDC ʵ������
	CDC MemDC;                                   // ����DC
	POINT pt;                                    // ��ṹ��
	
	MemDC.CreateCompatibleDC( &dc );             // �ڴ滺��DC
	m_BoardBmp.LoadBitmap(IDB_BOARDBK);          // ����λͼ
	pOldBmp = MemDC.SelectObject(&m_BoardBmp);   // ѡ��λͼ��������

	// ���߿�
	MemDC.SelectObject(&pen3);                   // ѡ�뻭��
	MemDC.SelectObject(&brush3);                 // ѡ�뻭ˢ
//	MemDC.Rectangle( LEFT,TOP, LEFT+12*GRIDSIZE,TOP+GRIDSIZE );              // �����ϱ߿�
//	MemDC.Rectangle( LEFT,TOP, LEFT+GRIDSIZE,TOP+12*GRIDSIZE );              // ������߿�
//	MemDC.Rectangle( LEFT+11*GRIDSIZE,TOP,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE); // �����ұ߿�
//	MemDC.Rectangle( LEFT,TOP+11*GRIDSIZE,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE); // �����±߿�

	MemDC.Rectangle(LEFT,TOP,LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE);

	// ���߿���
	MemDC.SelectObject(&pen4);                                               // ѡ�뻭��
	MemDC.MoveTo( LEFT,TOP);                                                 // ���������
	MemDC.LineTo( LEFT,TOP+12*GRIDSIZE );              
	MemDC.MoveTo( LEFT,TOP+12*GRIDSIZE);                                     // �����±߿�
	MemDC.LineTo( LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE );
	MemDC.MoveTo( LEFT+12*GRIDSIZE,TOP+12*GRIDSIZE );                        // �ұ���
	MemDC.LineTo( LEFT+12*GRIDSIZE,TOP);  
	MemDC.MoveTo( LEFT+12*GRIDSIZE,TOP);                                     // �����ϱ���
	MemDC.LineTo( LEFT,TOP ); 

	// �������̷���
	for( int i=0; i<BOARDY; i++ )
		for( int j=0; j<BOARDX; j++ )
		{
			// ���Ʒ���
			if( (i+j)%2 == 1 )                                               // ���ƻҸ�
			{
				CPen *pPen1 = MemDC.SelectObject( &pen1);
				CBrush *pBrush1 =MemDC.SelectObject( &brush1);
				MemDC.Rectangle( m_queenBoard.rectBoard[i][j] );
				MemDC.SelectObject(pPen1);
				MemDC.SelectObject(pBrush1);
			}
			else                                                             // ���Ƴȸ�
			{
				CPen *pPen2 = MemDC.SelectObject( &pen2);
				CBrush *pBrush2 =MemDC.SelectObject( &brush2);
				MemDC.Rectangle( m_queenBoard.rectBoard[i][j] );
				MemDC.SelectObject(pPen2);
				MemDC.SelectObject(pBrush2);
			}
			if(m_queenBoard.board[i][j]==BLACK)                              // ����λ��
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,0,pt,ILD_TRANSPARENT);
			}
			if(m_queenBoard.board[i][j]==WHITE)                              // ����λ��
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,1,pt,ILD_TRANSPARENT);
			}
			if(m_queenBoard.board[i][j]==ARROW)                              // �ϰ�λ��
			{
				pt.x=m_queenBoard.rectBoard[i][j].left;
				pt.y=m_queenBoard.rectBoard[i][j].top;
				m_Queen.Draw( &MemDC,2,pt,ILD_TRANSPARENT);
			}
		}

	MemDC.SetBkMode( TRANSPARENT );                                          // ����Ϊ͸��
	MemDC.SetTextColor( RGB(25,0,0 ) );                                    // ����������ɫ
	for( i=0; i< BOARDX; i++)
	{
		MemDC.TextOut(LEFT+GRIDSIZE*(i+1)+15,TOP+15,'A'+i);                  // ����ϱ߿���б�ǩ
		MemDC.TextOut(LEFT+20,TOP+10+GRIDSIZE*(i+1),'0'+i);           // �����߿���б�ǩ
		MemDC.TextOut(LEFT+10+GRIDSIZE*11,TOP+10+GRIDSIZE*(i+1),'0'+i);  // ����ұ߿���б�ǩ
		MemDC.TextOut(LEFT+GRIDSIZE*(i+1)+15,TOP+10+GRIDSIZE*11,'A'+i);      // ����±߿���б�ǩ		
	}

	 // ����ֵ�˭����
	if( progress!= 0 &&operation==CATCHWHT )                                 // �׷����������
	{
		MemDC.TextOut(LEFT+500,15,"���岶����ӣ�");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"���岶����ӣ�");
	}
	else if( progress!= 0 &&operation==WHTGO )                               // ������          
	{
		MemDC.TextOut(LEFT+500,15,"���ð���!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"���ð���!");
	}
	else if(progress!= 0 &&operation==WHTTHROWARROW )                        // �����׳��ϰ�
	{
		MemDC.TextOut(LEFT+500,15,"�����ͷ��ϰ�!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"�����ͷ��ϰ�!");
	}
	else if( progress!= 0 &&operation==CATCHBK )                             // ���岶���ϰ�
	{
		MemDC.TextOut(LEFT+500,15,"���岶����ӣ�");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"���岶����ӣ�");
	}
	else if( progress!=0&&operation==BKGO)                                   // ������
	{
		MemDC.TextOut(LEFT+500,15,"���ú���!");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"���ú���!");
	}
	else if( progress!= 0 &&operation==BKTHROWARROW )                        // �����׳��ϰ�
	{
		MemDC.TextOut(LEFT+500,15,"�����ͷ��ϰ���");
		MemDC.TextOut(cursorPos.x+30,cursorPos.y,"�����ͷ��ϰ���");
	}
	else
	{
		MemDC.TextOut(LEFT+500,15,"��Ϸû��ʼ!");
	}


	pt.x=90;
	pt.y=150;

	if( isWHTOver() )                                                     // ���岻�ܶ���
	{
		if(lastFirst==2)                                                  // �����ȣ������ǰ��壩
		{
			m_gameOver.Draw( &MemDC,0,pt,ILD_TRANSPARENT);                // �����䣨You��
		}
		else                                                              // ���������
		{
			m_gameOver.Draw( &MemDC,1,pt,ILD_TRANSPARENT);                
		}
	}
	if( isBKOver() )                                                       // ���岻���ƶ���
	{
		if(lastFirst==1)                                                   // �����ȣ������ǰ��壩
		{
			m_gameOver.Draw( &MemDC,0,pt,ILD_TRANSPARENT);                 // �����䣨You��
		}
		else                                                               // ���������
		{ 
			m_gameOver.Draw( &MemDC,1,pt,ILD_TRANSPARENT);                
		}
	}

	dc.BitBlt(0, 0, m_nBoardWidth, m_nBoardHeight, &MemDC, 0, 0, SRCCOPY);   // ���������е�ͼƬ
	MemDC.SelectObject(&pOldBmp);                                            // 
	MemDC.DeleteDC();                                                        // ɾ��DC
	m_BoardBmp.DeleteObject();                                               // ɾ��λͼ����
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAmazonsDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// �˵�����
//
// �˳�
void CAmazonsDlg::OnExit() 
{
	// TODO: Add your command handler code here

	// �����Ի��� ȷ���Ƿ��˳���Ϸ
	if( MessageBox("ȷ���˳���Ϸ?",NULL,MB_OKCANCEL) == IDOK )
	{
    	PostQuitMessage(0);                                                    // �˳���Ϸ
	}
	
}

void CAmazonsDlg::OnStart() 
{
	// TODO: Add your command handler code here

	// �����Ի���ȷ��˭����
	if(first==0 &&progress==0)
	{
		if(MessageBox("��ȷ�������ȣ�\n�ǣ�������\n��������",NULL,MB_YESNO)==IDYES)
		{
			first=1;                                              // ������
		}
		else
		{
			first=2;                                              // ������
		}
	}
	if(progress == 0)
	{
		m_queenBoard.InitBoard();
		progress = 1;                                               // ��Ϸ��ʼ
		operation = CATCHWHT;                                       // ������
	}

	// ������
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

	InvalidateRect(NULL,FALSE);                                   //  ˢ��
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
    	first = 2;                                                   // ������
	}

	InvalidateRect(NULL,FALSE);                                      //  ˢ��
   	UpdateWindow();   	
}

void CAmazonsDlg::OnComfirst() 
{
	// TODO: Add your command handler code here
	
	if(progress==0)
	{
    	first = 1;                                                   // ������  
	}
	InvalidateRect(NULL,FALSE);                                      // ˢ��
   	UpdateWindow(); 
}


// ///////////////////////////////////////////////////////////////////////////////////
//
// ������
//
// 

void CAmazonsDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	int xBoard=0;
	int yBoard=0;

	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE)            // ����ڷ�����
	{
		xBoard=(point.x-LEFT-GRIDSIZE)/GRIDSIZE;                       // ����x��λ��
		yBoard=(point.y-TOP-GRIDSIZE)/GRIDSIZE;                        // ����y��λ��

		if( m_queenBoard.board[yBoard][xBoard]==EMPTY
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY) )
		{
			if( operation==WHTTHROWARROW )                             // �����ͷ��ϰ�
			{
				if( first == 2 )                                       // �����ȣ�����Ϊ���ԣ�������
				{
					m_queenBoard.board[yBoard][xBoard]=ARROW;          // �׷������ϰ�
				}

				if( !isGameOver() && first == 2 )                      // ��Ϸû�н���
				{
					progress++;                                        // ��Ϸ��һ��
					operation=CATCHBK;                                 // �ֵ����岶������

					// ����createPosition ���������ƶ����߷��Լ� �ϰ��ͷŵ�λ��
					computer.createPosition(m_queenBoard.board,m_queenBoard.whtQueenX,
						m_queenBoard.whtQueenY,m_queenBoard.bkQueenX,m_queenBoard.bkQueenY);
					
					// �����߷� ���λ������
					computerFromX = computer.QueenFromX;                 // ������ʼ��
					computerFromY = computer.QueenFromY;
					computerToX = computer.QueenGoX;                   // ������ֹ��             
					computerToY = computer.QueenGoY;
					arrowToX = computer.ArrowToX;                      // �ϰ������
					arrowToY = computer.ArrowToY;

					// �ı����̵�״̬
					m_queenBoard.board[computerFromY][computerFromX] = EMPTY;
					m_queenBoard.board[computerToY][computerToX] = BLACK;
					
					operation = BKGO;                                  // ��һ��Ϊ������
					ReferX= computerFromX;                             // �ı�ο���
					ReferY = computerFromY;
					changeQueenPos( computerToX, computerToY);         // �ı����ӵ�����

					m_queenBoard.board[arrowToY][arrowToX] = ARROW;    // �ͷ��ϰ�

					// �����Ϸû�н��� ������һ��
					if( !isGameOver( ) )
					{
						progress++;
						operation = CATCHWHT;                         // ��һ�� ���岶���ϰ�
					}
				}
			}

			if( operation==BKTHROWARROW )                              // �����ͷ��ϰ�
			{
				if( first == 1 )                                       // ��������ȣ�����Ϊ���ԣ�������Ϊ���ԣ�������
				{
					m_queenBoard.board[yBoard][xBoard]=ARROW;          // �ڷ������ϰ�
				}

				if( !isGameOver( ) && first == 1 )                     // ��Ϸ��û����
				{
					progress++;                                        // ��Ϸ��һ��
					operation = CATCHWHT;                                // �ֵ����岶������

					// ���õ����߷����������߷�
					computer.createPosition(m_queenBoard.board,m_queenBoard.bkQueenX,
						m_queenBoard.bkQueenY,m_queenBoard.whtQueenX,m_queenBoard.whtQueenY);
					// ��ȡ�����߷�����ز���
					computerFromX=computer.QueenFromX;                // ���ӵĳ���λ��
					computerFromY = computer.QueenFromY;
					computerToX = computer.QueenGoX;                  // ���ӵ����
					computerToY = computer.QueenGoY;
		    		arrowToX = computer.ArrowToX;                     // �ϰ������
					arrowToY = computer.ArrowToY;

					// �ı�����״̬
					m_queenBoard.board[computerFromY][computerFromX] = EMPTY;
					m_queenBoard.board[computerToY][computerToX] = WHITE;
					
					operation = WHTGO;                                // ��һ��������
					ReferX= computerFromX;                            // �ı�ο�λ�ñ���
					ReferY = computerFromY;
					changeQueenPos( computerToX, computerToY);        // �ı����ӵ�λ��

					m_queenBoard.board[arrowToY][arrowToX] = ARROW;   // �ͷ��ϰ�

					// ��Ϸ���û�н���  ������һ��
					if(!isGameOver( ) )
					{
						progress ++;
						operation = CATCHBK;                          // ��һ�����岶�����
					}
				}
			}
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // ���´���
		}

		if( m_queenBoard.board[yBoard][xBoard]==BLACK                  // �������
			&& operation==CATCHBK)                                     // (progress+first)%2==1)
		{
			if( first == 1 )                                           // ������ �������������
			{
				m_queenBoard.board[yBoard][xBoard]=EMPTY;              // �ÿյ�ǰλ��
				ReferX=xBoard;                                         // x�Ĳο�λ��
				ReferY=yBoard;                                         // y�Ĳο�λ��
				operation=BKGO;                                        // �ֵ����ú���
			}
			
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // ���´���
		}
		if(m_queenBoard.board[yBoard][xBoard]==WHITE                   // �������
			&& operation==CATCHWHT)                                    // (progress+first)%2==0)
		{
			if( first == 2 )                                           // ������ ������� ������
			{
				m_queenBoard.board[yBoard][xBoard]=EMPTY;              // �ÿյ�ǰλ��
				ReferX=xBoard;                                         // x�Ĳο�λ��
				ReferY=yBoard;                                         // y�Ĳο�λ��
				operation=WHTGO;                                       // �ֵ����ð���
			}
			
			InvalidateRect(NULL,FALSE);                                // 
			UpdateWindow();                                            // ���´���
		}

		// ���ð���
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY && operation==WHTGO
			&& isOKSetQueen( xBoard, yBoard, ReferX, ReferY) )             //(progress+first)%2==0)
		{
			if( first == 2 )                                               // ������ ���ð��������� 
			{
				changeQueenPos( xBoard, yBoard);                         // �ı�ʺ�λ��
				m_queenBoard.board[yBoard][xBoard] = WHITE;              // ���ð���
				ReferX = xBoard;                                         // x�Ĳο�λ��
				ReferY = yBoard;                                         // y�Ĳο�λ��
				operation = WHTTHROWARROW;                                   // �ֵ������׳��ϰ�
			}
			
			InvalidateRect(NULL,FALSE);                                  // 
			UpdateWindow();                                              // ���´���
		}
		// ���ú���
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY&&operation==BKGO
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY))                //(progress+first)%2==1)
		{
			if( first == 1 )                                             // ������ ���ú���������
			{
				changeQueenPos(xBoard,yBoard);                           // �ı�ʺ�λ��
				m_queenBoard.board[yBoard][xBoard]=BLACK;                // ���ú���
				ReferX=xBoard;                                           // x�Ĳο�λ��
				ReferY=yBoard;                                           // y�Ĳο�λ��
				operation=BKTHROWARROW;                                      // �ֵ������׳��ϰ� 
			}
			
			InvalidateRect(NULL,FALSE);                                  // 
			UpdateWindow();                                              // ���´���
		}
	} 
	
	CDialog::OnLButtonDown(nFlags, point);
}

// ��������Ҽ���������˵�
void CAmazonsDlg::OnContextMenu(CWnd* pWnd, CPoint point) 
{
	// TODO: Add your message handler code here
	CMenu menu;                                                                 //����˵�ʵ��
	menu.LoadMenu(IDR_HELPMENU);                                                //����˵�IDR_HELPMENU
	menu.GetSubMenu(0)->TrackPopupMenu(TPM_RIGHTBUTTON ,point.x,point.y,this);  //���ò˵���ʾ��ʽ
	
}

void CAmazonsDlg::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	
	CDialog::OnLButtonUp(nFlags, point);
}

//����ƶ�
void CAmazonsDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	int xBoard=0;
	int yBoard=0;
	
	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE )
	{
		cursorPos = point;                                                                        // ��õ�ǰ����λ��
	}

	if( progress!=0 && point.x>LEFT+GRIDSIZE && point.x<LEFT+11*GRIDSIZE 
		&& point.y>TOP+GRIDSIZE && point.x<TOP+11*GRIDSIZE 
		&& (operation==WHTGO || operation==BKGO ||
		operation==WHTTHROWARROW || operation==BKTHROWARROW) )                                     // ����ڷ�����
	{
		xBoard=(point.x-LEFT-GRIDSIZE)/GRIDSIZE;                                                  // ����x��λ��
		yBoard=(point.y-TOP-GRIDSIZE)/GRIDSIZE;                                                   // ����y��λ��
  
		if( m_queenBoard.board[yBoard][xBoard]==EMPTY 
			&& isOKSetQueen(xBoard,yBoard,ReferX,ReferY) )
		{
			hCursor=AfxGetApp()->LoadCursor(MAKEINTRESOURCE(IDC_ALLOW));                          // ����Ϊ��������á����
			SetCursor(hCursor);
		}
		else
		{
			hCursor=AfxGetApp()->LoadCursor(MAKEINTRESOURCE(IDC_REFUSE));                         // ����Ϊ����ֹ���á����
			SetCursor(hCursor);
		}
	}

	InvalidateRect(NULL,FALSE);                                                                   // 
	UpdateWindow();                                                                               // ���´��� */
	
	CDialog::OnMouseMove(nFlags, point);
}


// /////////////////////////////////////////////////////////////////////////////////////
//
//
// �ж�ĳһλ���Ƿ�������ûʺ�����ϰ� 
// ����TRUE ��ʾ���� ��������
bool CAmazonsDlg::isOKSetQueen(int goal_x, int goal_y, int refer_x, int refer_y )
{
	int max=0;
	int min=0;
	int max1=0;
	int min1=0;                                    // �����������洢Ŀ��λ���Լ��ο�λ�õ����нǱ��������Сֵ

	// �ж�ĳһλ���Ƿ��������
	if( refer_x==goal_x )                                     // ͬһ��
	{
		// ��ʼ�������Сֵ
		max=goal_y;
		min=refer_y;

		if(goal_y<refer_y)                                    // ��ʼ��ֵ���������Сֵ
		{
			max=refer_y;                                      // ���¸�ֵ
			min=goal_y;
		}

		// �ж�Ŀ��λ����ο�λ��֮������Ƿ��Ѿ���ռ��
		for(int i=min+1;i<max;i++)
		{
			if( m_queenBoard.board[i][refer_x] !=EMPTY )
			{
				return false;                                 // ��ռ�ã������Է��� ������false
			} 
		}  
        if( i==max)                                           // û��ռ�� 
		{
			return true;                                      // ����TRUE
		}
	}
	else if( refer_y==goal_y )                                // ͬһ��
	{
		// ��ʼ�������Сֵ
		max=goal_x;
		min=refer_x;

		// ��ʼ������������
		if(goal_x<refer_x)
		{
			max=refer_x;                                     // ���¸������Сֵ��ֵ
			min=goal_x;
		}

		// �ж�Ŀ��λ�� �� �ο�λ��֮������Ƿ�ռ
		for(int i=min+1;i<max;i++)
		{
			if( m_queenBoard.board[refer_y][i] !=EMPTY )     // �����ռ��
			{
				return false;                                // �����Է��ã�����false
			}
		} 
		if( i==max)                                          // û�б�ռ ����true
		{
			return true;
		}
	}
	else if( abs(refer_x-goal_x)==abs(refer_y-goal_y) )      // ͬ��б����
	{
		// ��ʼ�������Сֵ
		max=goal_x;
		min=refer_x;
		max1=goal_y;
		min1=refer_y;

		// ����б��
		if( (refer_x-goal_x)*(refer_y-goal_y)>0)
		{
	    	if(goal_x<refer_x)                                // ���������� 
			{
				max=refer_x;                                  // ���¸�ֵ
				min=goal_x;
				max1=refer_y;                                 // ���¸�ֵ
				min1=goal_y;
			
			}
			
			// �ж�Ŀ��λ����ο�λ��֮���б�����Ƿ��ѱ�����ռ��
			int i,j;
			for(i=min+1,j=min1+1; i<max&&j<max1;i++,j++)
			{
				if( m_queenBoard.board[j][i] !=EMPTY )        // �Ѿ�ռ��
				{
					return false;                             // �����Է��ã�����false
				}
			}
			if( i==max||j==max1)                              // û��ռ��
			{
				return true;                                  // ����true
			} 
		}
		else                                                  // ����б��
		{
			if(goal_x<refer_x)
			{
				max=refer_x;                                  //  ���¸������Сֵ��ֵ
				min=goal_x;	
			}
			if(goal_y<refer_y)
			{
				max1=refer_y;                                 // 
				min1=goal_y;
			}
			// �ж�б�߼��Ƿ��Ѿ���ռ��
			int i,j;
			for(i=min+1,j=max1-1; i<max&&j>min1;i++,j--)
			{
				if( m_queenBoard.board[j][i] !=EMPTY )       // �Ѿ���ռ
				{
					return false;                            // �����Է��ã�����false
				}
			}
			if( i==max||j==min1)                             // û��ռ������true
			{
				return true;
			} 
		}
	}
	else                                                     // ����������Ϸ���ù���
	{
		return false;                                        // ����false
	}

	return false;                                            // ����false
} // ��������

// �ı�ʺ��λ�ã��б���б꣩����
void CAmazonsDlg::changeQueenPos( int x, int y)
{
	// ������ð���
	if( operation == WHTGO )
	{
		// Ѱ������һ���ʺ��ƶ���
		for( int i=0; i<4; i++ )
		{
			if( m_queenBoard.whtQueenX[i]==ReferX && m_queenBoard.whtQueenY[i]==ReferY )
			{
				// �ı�ʺ�λ������
				m_queenBoard.whtQueenX[i] = x;
				m_queenBoard.whtQueenY[i] = y;
				break;
			}
		}
	}

	// ������ú���
	if( operation == BKGO )
	{
		// Ѱ������һ���ʺ��ƶ���
		for( int i=0; i<4; i++ )
		{
			if( m_queenBoard.bkQueenX[i]==ReferX && m_queenBoard.bkQueenY[i]==ReferY )
			{
				// �ı�λ������
				m_queenBoard.bkQueenX[i] = x;
				m_queenBoard.bkQueenY[i] = y;
				break;
			} // if ����������
		} // for ѭ������
	} // if �����жϽ���
} // ��������


// �ж���Ϸ�Ƿ��������,����0 û���� �������
bool CAmazonsDlg::isGameOver()
{

	if( isWHTOver() || isBKOver() )                                    // ֻ�а���������һ�������ƶ���Ϸ����
	{
		lastFirst=first;
		first=0;
		progress=0;
		return true;                                                   // ������������������ ��Ϸ����
	}
	
	return false;                                                      // ��Ϸû�н���
}  // ��������

// �жϰ����ܷ��ƶ�
bool CAmazonsDlg::isWHTOver()
{
	// ѭ���жϰ����Ƿ���ڻ����ƶ�������
	for(int i=0; i<4; i++)
	{
		// ������ӵ��б���б�
		int x=m_queenBoard.whtQueenX[i];
		int y=m_queenBoard.whtQueenY[i];

		// ĳ��������Χ�Ƿ���ڿ�϶
		if(( x>0 && y>0 && m_queenBoard.board[y-1][x-1] == EMPTY )||( y>0 && m_queenBoard.board[y-1][x] == EMPTY )||
			( y>0 && x<9 && m_queenBoard.board[y-1][x+1] == EMPTY )||( x>0 && m_queenBoard.board[y][x-1] == EMPTY)||
			( x<9 && m_queenBoard.board[y][x+1] == EMPTY )||( x>0 && y<9 && m_queenBoard.board[y+1][x-1] == EMPTY)||
			( y<9 && m_queenBoard.board[y+1][x] == EMPTY)||( x<9 && y<9 && m_queenBoard.board[y+1][x+1] == EMPTY ))
		{
			return false;                                         // ��Ϸ��û����
		}
	}

	return true;                                                   // ������������������ ���岻���ƶ�
}

// �жϺ����ܷ��ƶ�
bool CAmazonsDlg::isBKOver()
{
	// ѭ���жϺ����Ƿ���ڻ����ƶ�������
	for(int i=0; i<4; i++)
	{
		// ������ӵ��б���б�
		int x=m_queenBoard.bkQueenX[i];
		int y=m_queenBoard.bkQueenY[i];

		// ĳ��������Χ�Ƿ���ڿ�϶
		if(( x>0 && y>0 && m_queenBoard.board[y-1][x-1]==EMPTY ) || ( y>0 &&m_queenBoard.board[y-1][x]==EMPTY ) ||
			( y>0 && x<9 && m_queenBoard.board[y-1][x+1]==EMPTY ) || ( x>0 && m_queenBoard.board[y][x-1]==EMPTY) ||
			( x<9 && m_queenBoard.board[y][x+1]==EMPTY ) || ( x>0&&y<9&&m_queenBoard.board[y+1][x-1]==EMPTY)||
			( y<9 && m_queenBoard.board[y+1][x]==EMPTY) || ( x<9&&y<9&&m_queenBoard.board[y+1][x+1]==EMPTY ) )
		{
			return false;                                          // ��Ϸ��û����
		}
	}

	return true;                                                   // �������������� ���岻���ƶ�
}


