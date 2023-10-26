#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;

const int WHITE = 1;
const int EMPTY = 0;
const int BLACK = 2;
const int ARROW = 3;
const int BIAN = -2;
int queen_direction[8] = {-13, -12, -11, -1, 1, 11, 12, 13};
int computer[4] = {27, 55, 104, 88};
int human[4] = {16, 41, 112, 115};

int calTotalGrid(int board[144], int i2, int record[40])
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

void calOneGlidOne1(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144])
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

void calOneGlidOne2(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144])
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

void calFigure2(int j, int countgu1, int b_anylzeparam[144], int be_anylzeparam[100], int gboardparam[144])
{
	int countgu3 = 0;

  for(int k = 0; k < 4; k++)
	{
		int i2 = (j ? human[k] : computer[k]);
		calOneGlidOne2(countgu3, i2, b_anylzeparam, be_anylzeparam, gboardparam);
	}
	 
	for(int i = 0; i < 10; i++)
	{
		 if(countgu3 < countgu1)
		 {
			 for(int m = 0; m < countgu3; m++)
			 {
				 int i2 = be_anylzeparam[m];
				 calOneGlidOne1(countgu3, i2, b_anylzeparam, be_anylzeparam, gboardparam);
			 }
		 }
		 if(countgu3 == countgu1)
	   break;
  }
}

double easyWay2(int countgu1, int b_anylze[4][144],int be_anylze[4][100], int gboard[144])
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
  				mmm += ((b_anylze[0][m] > b_anylze[1][m]) ? -1 : 1);
  			}
  			
  		else
  		{
  			mmm += 0.1;
  		}
  	}
  }
  
	return mmm - 0.4;
}

void calOneGlid(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144], int t)
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

void calFigure1(int j, int countgu1, int b_anylzeparam[144], int be_anylzeparam[100], int gboardparam[144])
{
  int countgu2 = 0;
  int countgu3 = 0;
  int tt = 1;
  
  for(int k = 0; k < 4; k++)
	{
		int i2 = (j ? human[k] : computer[k]);
		calOneGlid(countgu2, i2, b_anylzeparam, be_anylzeparam, gboardparam, tt);
	}
     

	for(int i = 0; i < 7; i++)
	{
		countgu3 = countgu2;
		if(countgu2 < countgu1)
		{
			tt++;
			for(int k = 0; k < countgu3; k++)
			{
				int i2 = be_anylzeparam[k];
				countgu2 = calOneGlid(countgu2, i2, b_anylzeparam, be_anylzeparam, gboardparam, tt);
			}
			countgu2 += countgu3;
		}
		
		if(countgu2 == countgu1)
		break;
  }
}

double easyWay1(int countgu1, int b_anylze[4][144], int be_anylze[4][100], int gboard[144])
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
  		else
  		{
  			mmm += 0.1;
  		}
  	}
  }
  
	return mmm - 0.4;
}

double cmax(double a, double b)
{
	return a > b ? a : b;
}


double cmin(double a, double b)
{
	return a < b ? a : b;
}
void calCC(int b_anylze[4][144], double &c1, double &c2, double &w)
{
	for(int j = 13; j < 130; j += 12)
  {
  	for(int m = 0; m < 10; m++)
  	{
  		int ii = (m + j);
  		int t=0 , g=0;
  		t = (b_anylze[0][ii] == 100 ?  100000 : (1<<b_anylze[0][ii]));
  		g = (b_anylze[1][ii] == 100 ?  100000 : (1<<b_anylze[1][ii]));
  		c1 += 2 * (1.0 / t - 1.0 / g);
  		c2 += cmin(1.0, cmax(-1, (b_anylze[3][ii] - b_anylze[2][ii])) / 6.0);
  		w += 1.0 / (1<<abs(b_anylze[0][ii] - b_anylze[1][ii]));
	  }
  }
}


int main()
{
	//初始化gboard
	int gboard[144] = {0};               //棋盘坐标

	for(int m = 0; m < 4; m++)           //初始化human和computer的位置
	{
		 gboard[computer[m]] = WHITE;
		 gboard[human[m]] = BLACK;
  }

	for(int i=0; i < 12; i++)           //初始化界面的值
	{
		gboard[i] = BIAN;
		gboard[12 * i] = BIAN;
		gboard[12 * i + 11] = BIAN;
		gboard[132 + i] = BIAN;
	}//gboard初始化完毕

	int countgu1 = 92;      //必须每次算完后要减二
	//初始化b_anylze
  int b_anylze[4][144];                    //记录空格多少

  for(i = 0; i < 144; i++)
  {
  	b_anylze[0][i] = 100;
  	b_anylze[1][i] = 100;
  	b_anylze[2][i] = 100;
  	b_anylze[3][i] = 100;
  }//初始化结束
	gboard[15] = 3;
	gboard[17] = 3;
	gboard[28] = 3;
	gboard[29] = 3;
	gboard[39] = 3;
	gboard[40] = 3;
	gboard[42] = 3;
	gboard[43] = 3;
	gboard[44] = 3;
	gboard[45] = 3;
	gboard[50] = 3;
	gboard[51] = 3;
	gboard[53] = 3;
	gboard[57] = 3;
	gboard[61] = 3;
	gboard[66] = 3;
	gboard[75] = 3;
	gboard[74] = 3;
	gboard[80] = 3;
	gboard[78] = 3;
	gboard[79] = 3;
	gboard[92] = 3;
	gboard[98] = 3;
	gboard[106] = 3;
	gboard[121] = 3;
    gboard[128] = 3;
  int be_anylze[4][100];                 //空格的值为多少

  double computerValue3 = -10000.0;
  int recordma[3] = {0};

  for(int k = 0; k < 4; k++)                            //第六层
  {
  	int b1_empty_list[40];                                //记录走棋位置
  	int counter1 = calTotalGrid(gboard, computer[k], b1_empty_list);
  	double computerValue2 = -10000.0;
  	int record2 = 0;

  	for(int j = 0; j < counter1; j++)                  //第五层
  	{
		  //走一步棋
double g1 = easyWay1(countgu1, b_anylze, be_anylze, gboard);
double g2 = easyWay2(countgu1, b_anylze, be_anylze, gboard);
			for(i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[0][i];
	if((i+1)%12==0)
	cout<<endl;
  }cout<<endl;
  for(i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[1][i];
	if((i+1)%12==0)
	cout<<endl;
  }cout<<endl;
  for(i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[2][i];
	if((i+1)%12==0)
	cout<<endl;
  }cout<<endl;
  for(i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[3][i];
	if((i+1)%12==0)
	cout<<endl;
  }cout<<endl;system("pause");
			gboard[computer[k]] = EMPTY;
			gboard[b1_empty_list[j]] = WHITE;              //最后一定将其变过来
		  int tg = computer[k];
		  computer[k] = b1_empty_list[j];

			//选择射箭的位置
			int b2_empty_list[40];                                   //记录射箭位置
	    //记录射箭中最大的位置
			int counter2 = calTotalGrid(gboard, b1_empty_list[j], b2_empty_list);
			double computerValue1 = -10000.0;
			int record1 = 0;
			for(int i = 0; i < counter2; i++)           //第四层
			{
				gboard[b2_empty_list[i]] = ARROW;        //最后一定将其置为0，
				//选择当前x2 y2 所对应的最大估值
				double t1 = easyWay1(countgu1, b_anylze, be_anylze, gboard);
				double t2 = easyWay2(countgu1, b_anylze, be_anylze, gboard);

				double c1 = 0.0;
				double c2 = 0.0;
				double w = 0.0;

				calCC(b_anylze, c1, c2, w);              //一定得弄清这个公式
				double f = c1 + c2 + t1 + t2;

				if((computerValue1 - f) < 0)
				{
					computerValue1 = f;
					record1 = b2_empty_list[i];
				}

        gboard[b2_empty_list[i]] = EMPTY;
			}

			if((computerValue2 - computerValue1) < 0)
			{
				computerValue2 = computerValue1;
				record2 = b1_empty_list[j];
				recordma[0] = record1;                  //记录射箭位置
			}

			gboard[computer[k]] = EMPTY;
			gboard[b1_empty_list[j]] = EMPTY;
      computer[k] = tg;
			gboard[computer[k]] = WHITE;
	  }

	  if((computerValue3 - computerValue2) < 0)
	  {
	  	computerValue3 = computerValue2;
	  	recordma[1] = record2;                        //记录走棋位置
	  	recordma[2] = k;                              //记录哪个棋子走动
	  }
  }

cout<<recordma[0]<<"  "<<recordma[1]<<"  "<<recordma[2]<<endl;


system("pause");
return 0;
}








