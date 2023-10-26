
// Computer.cpp: implementation of the CComputer class.
//
//////////////////////////////////////////////////////////////////////

/*
 * Computer类 通过对当前棋盘状态进行“估值”，生成电脑的走法
 * 主要想法：
 *         这是一款领土抢占游戏，玩家会尽量去占领更多的领地，基于这一点
 *     估值算法主要是针对某一位置可以直达的方格数作为走法得价值。搜索全部
 *     可能的走法后，取价值最大的作为当前有效走法。
 *
 * *******************************************************************/

#include "stdafx.h"
#include "Amazons.h"
#include "Computer.h"
#include <cmath>

#include "fstream.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CComputer::CComputer()
{
	
}//初始化结束

CComputer::~CComputer()
{

}

int CComputer::calTotalGrid(int board[144], int i2, int record[40])
{
	int counter = 0;
	
	for(int j = 0; j < 8; j++)
	{
		int m = queen_direction[j];
		int n = m + i2;                                          // 计数器
		
		while(board[n] == 0)
		{
			record[counter] = n;
			counter++;
			n += m;
		}
	}			
    	                                                   // 保存行标
	return counter;                                         // 返回counter的值
} // 函数结束

double CComputer::calDirNoMove1(int gboard[144], int i2)
{
	double counter2 = 0;			

	for(int j = 0; j < 8; j++)
	{
		int m = queen_direction[j];
		int n2 = m + i2;  
		
		if(gboard[n2] != 0)
		{
			counter2++;
			continue;
		}
		if(gboard[n2+m] != 0)
		{
			counter2 += 0.5;
		}

	}	
    	                                                   // 保存行标
	return counter2;  

}

void  CComputer::calDirNoMove(int gboard[144], int b_anylze[144])                //计算四周可走的路
{
 
  for(int j = 13; j < 130; j += 12)
  {
  	for(int m = 0; m < 10; m++)
  	{
  		int counter = 0;                                             // 计数器
  		int ii = (m + j);
  		if(gboard[ii] != 0)
  		continue;
  		for(int jj = 0; jj < 8; jj++)
  		{
  		   int m = queen_direction[jj];
		   int n = m + ii;                                         // 计数器
		   if(gboard[n] == 0)
		   {
		   	counter++;
		   }
		}
      b_anylze[ii] = counter;
   }
  }
} // 函数结束

double CComputer::calZone(int gboard[144], int b_anylze[144], double comOrHum[8])
{
	double d = 0.0;
	for(int i = 0; i < 4; i++)
	{
		int i2 = computer[i];
		int i1 = human[i];
		
		for(int j = 0; j < 8; j++)
		{
			int t = 1;
	   	    int m = queen_direction[j];
	     	int n2 = m + i2;  
	   	    int n1 = m + i1;                                       // 计数器
		
		    while(gboard[n2] == 0)
			{
				comOrHum[i] += (b_anylze[n2] * 1.0 / t);
				n2 += m;
				t = (1<<t);	
			}
			
			t = 1;	 
	            
			while(gboard[n1] == 0)
			{
				comOrHum[i + 4] += (b_anylze[n1] * 1.0 / t);
				n1 += m;	
				t = (1<<t);	
			}
		}
		d += comOrHum[i] - comOrHum[i+4];
	}
	return d;
}

void CComputer::calOneGlidOne1(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144])
{
	for(int j = 0; j < 8; j++)
	{
		int m = queen_direction[j];
		int n = m + i2;
        int t = 1;
      
			while(gboard[n] == 0)
			{
			   if(b_anylze[n] == 100)
			   {
			  	  b_anylze[n] = t+b_anylze[i2];                //记录了所有一步可以到达的
			  	  be_anylze[count] = n;
			  	  count++;
			   }
			   
			   else if((b_anylze[n] > t+b_anylze[i2])&&(b_anylze[n] != 100))
			   {
			  	 b_anylze[n] = t+b_anylze[i2];
			   }
			   
			  t++;
			  n += m;
		 }
	}
}

void CComputer::calOneGlidOne2(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144])
{
	for(int j = 0; j < 8; j++)
	{
		int m = queen_direction[j];
		int n = m + i2;
        int t = 1;
      
		while(gboard[n] == 0)
		{
        if(b_anylze[n] == 100)
        {
           	b_anylze[n] = t;
	  			  be_anylze[count] = n;
				    count++;
        }
        
		else if(b_anylze[n] > t)
		{
             b_anylze[n] = t;

		}
			  
			  t++;
			  n += m;
		  }
	}
}

void CComputer::calFigure2(int j, int countgu1, int b_anylze[144], int be_anylze[100], int gboard[144])
{
	int countgu3 = 0;

  for(int k = 0; k < 4; k++)
	{
		int i2 = (j ? human[k] : computer[k]);
		calOneGlidOne2(countgu3, i2, b_anylze, be_anylze, gboard);
	}
	 
	for(int i = 0; i < 10; i++)
	{
		 if(countgu3 < countgu1)
		 {
			 for(int m = 0; m < countgu3; m++)
			 {
				 int i2 = be_anylze[m];
				 calOneGlidOne1(countgu3, i2, b_anylze, be_anylze, gboard);
			 }
		 }
		 if(countgu3 >= countgu1)
         break;
  }
}

double CComputer::easyWay2(int countgu1, int b_anylze[4][144],int be_anylze[4][100], int gboard[144])
{
	calFigure2(0, countgu1, b_anylze[2], be_anylze[2], gboard);
	calFigure2(1, countgu1, b_anylze[3], be_anylze[3], gboard);

	double mmm = 0.0;
	for(int j = 13; j < 130; j += 12)
	{
  	for(int i = 0; i < 10; i++)
  	{
  		int m = (i + j);
  		if(b_anylze[2][m] != b_anylze[3][m])
  		{
  			mmm += ((b_anylze[2][m] > b_anylze[3][m]) ? -1 : 1);
  		}
  			
  		else if((b_anylze[2][m] == b_anylze[3][m])&&(b_anylze[2][m] != 100))
  		{
  			mmm += 0.15;
  		}
  	}
  }
  
	return mmm;
}

void CComputer::calOneGlid(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144], int t)
{
	for(int j = 0; j < 8; j++)
	{
			int m = queen_direction[j];
			int n = m + i2;
			while(gboard[n] == 0)
			{
			   if(b_anylze[n] == 100)
			   {
			   	  b_anylze[n] = t;                //记录了所有一步可以到达的
			   	  be_anylze[count] = n;
			   	  count++;
			   }
			  else if((b_anylze[n] > t)&&(b_anylze[n] != 100))
			  {
			  	b_anylze[n] = t;
			  }
			  n += m;
		 }
	}
}

void CComputer::calFigure1(int j, int countgu1, int b_anylze[144], int be_anylze[100], int gboard[144])
{
  int countgu2 = 0;
  int countgu3 = 0;
  int tt = 1;
  
  for(int k = 0; k < 4; k++)
	{
		int i2 = (j ? human[k] : computer[k]);
		calOneGlid(countgu2, i2, b_anylze, be_anylze, gboard, tt);
	}

	for(int i = 0; i < 7; i++)
	{
		countgu3 = countgu2;
		if(countgu2 < countgu1)
		{
			tt++;
			for(int k = 0; k < countgu2; k++)
			{
				int i2 = be_anylze[k];
				calOneGlid(countgu2, i2, b_anylze, be_anylze, gboard, tt);
			}
		}
		
		if(countgu2 == countgu1)
		break;
  }
}

double CComputer::easyWay1(int countgu1, int b_anylze[4][144], int be_anylze[4][100], int gboard[144])
{
	calFigure1(0, countgu1, b_anylze[0], be_anylze[0], gboard);
	calFigure1(1, countgu1, b_anylze[1], be_anylze[1], gboard);

  double mmm = 0;
  for(int j = 13; j < 130; j += 12)
  {
  	for(int i = 0; i < 10; i++)
  	{
  		int m = (i + j);
  		if(b_anylze[0][m] != b_anylze[1][m])
  		{
  			mmm += ((b_anylze[0][m] > b_anylze[1][m]) ? -1 : 1);
  		}
  		else if((b_anylze[0][m] == b_anylze[1][m])&&(b_anylze[0][m] != 100))
  		{
  			mmm += 0.15;
  		}
  	}
  }
  
	return mmm;
}

void CComputer::calCC(int b_anylze[4][144], double &c1, double &c2, double &w)
{
	for(int j = 13; j < 130; j += 12)
  {
  	for(int m = 0; m < 10; m++)
  	{
  		int ii = (m + j);
  		int t = 0 , g = 0;
		if((b_anylze[0][ii] == 100)&&(b_anylze[0][ii] == 100))
		{
		}
		else 
		{
			t = (b_anylze[0][ii] == 100 ?  10000000 : (1<<b_anylze[0][ii]));
			g = (b_anylze[1][ii] == 100 ?  10000000 : (1<<b_anylze[1][ii]));
  		    c1 += 2 * (1.0 / t - 1.0 / g);
  		    c2 += (min(1.0, max(-1, (b_anylze[3][ii] - b_anylze[2][ii])) / 6.0));
			if(abs(t- g) <= 10)
  		    w += (1.0 / (1<<abs(t - g)));
		}
	}
  }
}


int CComputer::boardZGboard(int i)
{
	switch(i)
	{
	case 0:
		return 13;
	case 1:
		return 25;
	case 2:
		return 37;
	case 3:
		return 49;
	case 4:
		return 61;
	case 5:
		return 73;
	case 6:
		return 85;
	case 7:
		return 97;
	case 8:
		return 109;
	case 9:
		return 121;
	default :
		return 0;
	}
}

double CComputer::elvaT1(int step)          //t1
{ 
	double b_value = 0.0;
	switch(step / 4)
	{
    case 0 :  b_value = 0.0; break;
	case 1 :  b_value = 0.001; break;
	case 2 :  b_value = 0.002; break;
	case 3 :  b_value = 0.0039; break;
	case 4 :  b_value = 0.0078; break;
	case 5 :  b_value = 0.015625; break;
	case 6 :  b_value = 0.03125; break;
	case 7 :  b_value = 0.0625; break;
	case 8 :  b_value = 0.125; break;
	case 9 :  b_value = 0.25; break;
    case 10 :  b_value = 0.5; break;
    default :  b_value = 1.0; break;		
	}
	return b_value;
}

double CComputer::elvaTC12(int step)      //t2
{
	double b_value = 0.0;
	switch(step / 5)
	{
     case 0 :  b_value = 10.0; break;
	 case 1 :  b_value = 9.0;  break;
	 case 2 :  b_value = 8.0;  break;
     case 3 :  b_value = 8.0;  break;
	 case 4 :  b_value = 7.9;  break;
	 case 5 :  b_value = 7.7;  break;
	 case 6 :  b_value = 7.4;  break;
	 case 7 :  b_value = 1.0;  break;
	 case 8 :  b_value = 0.6;  break;
	 case 9 :  b_value = 0.4;  break;
	 case 10 :  b_value = 0.2;  break;
     default :  b_value = 0.0;  break;		
	}
	return b_value;

}

double CComputer::elvaC1(int step)                    //c1c2
{
	double b_value = 0.0;
	switch(step / 5)
	{
     case 0 :  b_value = 2.0; break;
	 case 1 :  b_value = 2.0;  break;
	 case 2 :  b_value = 1.8;  break;
     case 3 :  b_value = 1.7;  break;
	 case 4 :  b_value = 1.3;  break;
	 case 5 :  b_value = 1.0;  break;
	 case 6 :  b_value = 0.7;  break;
	 case 7 :  b_value = 0.5;  break;
	 case 8 :  b_value = 0.2;  break;
    default :  b_value = 0.0;  break;		
	}
	return b_value;
}

double CComputer::elvaTC33(int step)                //m
{
	double b_value = 0.0;
	switch(step / 4)
	{
     case 0 :  b_value = 10.0; break;           //0---4
     case 1 :  b_value = 9.0;  break;	
	 case 2 :  b_value = 8.0;  break;           //10---14
     case 3 :  b_value = 8.0;  break;         //15----19
	 case 4 :  b_value = 6.5;  break;
 	 case 5 :  b_value = 5.5;  break;
	 case 6 :  b_value = 4.0;  break;         //35---49
     case 7 :  b_value = 3.0;  break;
	 case 8 :  b_value = 2.0;  break;
    default :  b_value = 0.0;  break;		
	}
	return b_value;

}


// 对当前所有得走法进行评估，找出合理得做法
void CComputer::createPosition( BYTE board[10][10], int humanX[4], int humanY[4],int computerX[4], int computerY[4] )
{
    ofstream infile("infor.txt",ios::in|ios::app);   //文件以输入方式打开（文件数据输入到内存）
	int gboard[144];                   //棋盘坐标
	
	for(int n=0; n < 12; n++)           //初始化界面的值
	{
		gboard[n] = BIAN;
		gboard[12 * n] = BIAN;
		gboard[12 * n + 11] = BIAN;
		gboard[132 + n] = BIAN;
	}   //gboard初始化完毕

	//初始化gboard
  int j = 13;
  for(int i = 0; (i < 10)&&(j < 130); i++)            //gboard与board的转化还有computer和human的转化
  {
  	for(int m = 0; m < 10; m++)
  	{
  		int ii = (m + j);
  		gboard[ii] = board[i][m];
	}
	j += 12;
  }

	for(int mm = 0; mm < 4; mm++)           //初始化human和computer的位置
	{		
		 computer[mm] = boardZGboard(computerY[mm]) + computerX[mm];
		 human[mm] = boardZGboard(humanY[mm]) + humanX[mm];
	}
  
  double computerValue3 = -1000000000.0;
  int recordma[3] = {0};
  int record3 = 0;

  for(int k = 0; k < 4; k++)                            
  {
  	int b1_empty_list[40];                             //记录走棋位置
  	int counter1 = calTotalGrid(gboard, computer[k], b1_empty_list);
    double mg = calDirNoMove1(gboard, computer[k]);
    double computerValue2 = -1000000000.0;
  	int record2 = 0;

  	for(int j = 0; j < counter1; j++)                 
  	{
		    //走一步棋
			int tgg = gboard[computer[k]];              //最后一定将其变过来
			gboard[b1_empty_list[j]] = gboard[computer[k]];
			gboard[computer[k]] = EMPTY;
		    int tg = computer[k];
		    computer[k] = b1_empty_list[j];

			//选择射箭的位置
			int b2_empty_list[40];                                   //记录射箭位置
	        //记录射箭中最大的位置
			int counter2 = calTotalGrid(gboard, b1_empty_list[j], b2_empty_list);

			double computerValue1 = -1000000000.0;
			int record1 = 0;

			for(int i = 0; i < counter2; i++)           
			{
				int b_anylze[4][144];                    //记录空格多少
	            int be_anylze[4][100] = {0};             //空格的值为多少
				int b_any[144];
				double comOrHum[8];

            	for(int ma = 0; ma < 4; ma++)
            	for(int ja = 0; ja < 144; ja++)
				{
	 	           b_anylze[ma][ja] = 100;
				   b_any[ja] = 100;
				}
   				
				for(ma = 0; ma < 8; ma++)
                   comOrHum[ma] = 0.0;

				gboard[b2_empty_list[i]] = ARROW;        //最后一定将其置为0，
				//选择当前x2 y2 所对应的最大估值
				double t1 = easyWay1(countgu1, b_anylze, be_anylze, gboard);
				double t2 = easyWay2(countgu1, b_anylze, be_anylze, gboard);

				double c1 = 0.0;
				double c2 = 0.0;
				double w = 0.0;				

				calCC(b_anylze, c1, c2, w);              //一定得弄清这个公式
				calDirNoMove(gboard, b_any);
				double m1 = calZone(gboard, b_any, comOrHum);
				double fm = elvaTC33(step);	
				double f = 0.0;
				
          
				if(m1<0)
				{
				m1 = -m1;
				f = elvaT1(step) * t1 + elvaTC12(step) * t2 + elvaC1(step) * (c1 + c2) - fm*m1;//- fm * sqrt(w) * (pow(0.9 , m1)+m1);
				}
				else
                f = elvaT1(step) * t1 + elvaTC12(step) * t2 + elvaC1(step) * (c1 + c2);
				if((computerValue1 - f) < 1e-8)
				{
					computerValue1 = f;
					record1 = b2_empty_list[i];
				}
                gboard[b2_empty_list[i]] = EMPTY;

			}

			if((computerValue2 - computerValue1) < 1e-8)
			{

				computerValue2 = computerValue1;
				record2 = b1_empty_list[j];
				record3 = record1;                  //记录射箭位置
			}

			gboard[computer[k]] = EMPTY;
			gboard[b1_empty_list[j]] = EMPTY;
         computer[k] = tg;
			gboard[computer[k]] = tgg;

	  }

	  if((computerValue3 - computerValue2) < 1e-8)
	  {
	  	computerValue3 = computerValue2;
		recordma[0] = record3;
	  	recordma[1] = record2;                        //记录走棋位置
	  	recordma[2] = k;                            //记录哪个棋子走动
	  }
  }

  ArrowToY = recordma[0] / 12 - 1;
  ArrowToX = recordma[0] % 12 - 1;
  QueenGoY = recordma[1] / 12 - 1;
  QueenGoX = recordma[1] % 12 - 1;
  QueenFromY = computer[recordma[2]] / 12 - 1;
  QueenFromX = computer[recordma[2]] % 12 - 1;
  countgu1 = countgu1 - 2;
  step += 2;

}

int CComputer::countgu1 = 92;
int CComputer::step = 1;
