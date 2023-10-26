

//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPUTER_H__3A75ABC1_00BF_4FE5_83D1_EEA77C792C4A__INCLUDED_)
#define AFX_COMPUTER_H__3A75ABC1_00BF_4FE5_83D1_EEA77C792C4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "define.h"
#include "Move.h"

class CComputer  
{
public:
	CComputer();
	virtual ~CComputer();
public: 

    int calTotalGrid(int board[144], int i2, int record[40]);
    void calOneGlidOne1(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144]);

	void calOneGlidOne2(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144]);

void calFigure2(int j, int countgu1, int b_anylzeparam[144], int be_anylzeparam[100], int gboardparam[144]);
double easyWay2(int countgu1, int b_anylze[4][144],int be_anylze[4][100], int gboard[144]);
void calOneGlid(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144], int t);
void calFigure1(int j, int countgu1, int b_anylzeparam[144], int be_anylzeparam[100], int gboardparam[144]);
double easyWay1(int countgu1, int b_anylze[4][144], int be_anylze[4][100], int gboard[144]);
void calCC(int b_anylze[4][144], double &c1, double &c2, double &w);
int boardZGboard(int i);
double elvaT1(int step);
double elvaTC12(int step);
void  calDirNoMove(int board[144], int b_anylze[144]) ;               //计算四周可走的路
double calZone(int gboard[144], int b_anylze[144], double comOrHum[8]);
double elvaTC33(int step);
double elvaC1(int step);
double calDirNoMove1(int gboard[144], int i2);
void createPosition( BYTE board[10][10],int humanX[4], int humanY[4], int computerX[4], int computerY[4]);          // 产生棋子得走法
	// 电脑没走一步设计得位置坐标
	int QueenGoX;                                                  // 棋子放置位置的X列标
	int QueenGoY;                                                  // 棋子放置位置的Y行标
	int QueenFromX;                                                // 棋子出发位置的X列标
	int QueenFromY;                                                // 棋子出发位置的Y行标
	int ArrowToX;                                                  // 障碍放置位置的X列标
	int ArrowToY;                                                  // 障碍放置位置的Y行标
private:
	int human[4];
	int computer[4];
    static int countgu1;                      //必须每次算完后要减二
	static int step;
};
#endif



