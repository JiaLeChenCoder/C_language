#include <iostream>
#include <iomanip>
using namespace std;

const int WHITE = 1;
const int BLACK = 2;
const int ARRoW = 3;
const int BIAN = -2;
int queen_direction[8] = {-13, -12, -11, -1, 1, 11, 12, 13};
int computer[4] = {27, 54, 104, 88};
int human[4] = {16, 41, 112, 115};

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

void calOneGlidOne1(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144], int t)
{
	for(int j = 0; j < 8; j++)
	{
			int m = queen_direction[j];
			int n = m + i2;
      t = 1;
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

void calOneGlidOne2(int &count, int i2, int b_anylze[144], int be_anylze[100], int gboard[144], int t)
{
	for(int j = 0; j < 8; j++)
	{
			int m = queen_direction[j];
			int n = m + i2;
      t = 1;
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

void calFigure1(int j, int countgu1, int b_anylzeparam[144], int be_anylzeparam[100], int gboardparam[144])
{
  int countgu2 = 0;
  int tt = 1;
  for(int k = 0; k < 4; k++)
	{
		int i2 = (j ? human[k] : computer[k]);
		calOneGlid(countgu2, i2, b_anylzeparam, be_anylzeparam, gboardparam, tt);
	}

	for(int i = 0; i < 5; i++)
	{
		if(countgu2 < countgu1)
		{
			tt++;
			for(int k = 0; k < countgu2; k++)
			{
				int i2 = be_anylzeparam[k];
				calOneGlid(countgu2, i2, b_anylzeparam, be_anylzeparam, gboardparam, tt);
			}
		}
  }
}
double easyWay1(int countgu1, int b_anylze[4][144], int be_anylze[4][100], int gboard[144])
{  
	calFigure1(0, countgu1, b_anylze[0], be_anylze[0], gboard);
	calFigure1(1, countgu1, b_anylze[1], be_anylze[1], gboard);

  double mmm = 0;
	for(int i = 0; i < 144; i++)
	{
		if(b_anylze[0][i] != b_anylze[1][i])
		{
			mmm += ((b_anylze[0][i] > b_anylze[1][i]) ? -1 : 1);
		}
		else
		mmm += 0.1;
	}	
	return mmm;
}

int main()
{
	// clock_t t = clock();
	int gboard[144] = {0};
	for(int m = 0; m < 4; m++)
	{
        gboard[computer[m]] = WHITE;
        gboard[human[m]] = BLACK;
   }
	for(int i=0; i < 12; i++)
	{
		gboard[i] = BIAN;
		gboard[12 * i] = BIAN;
		gboard[12 * i + 11] = BIAN;
	}
	for(int j = 0; j < 12; j++)
	{
		gboard[132 + j] = BIAN;
	}
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
	gboard[60] = 3;
	gboard[65] = 3;
	gboard[75] = 3;
	gboard[74] = 3;
	gboard[80] = 3;
	gboard[78] = 3;
	gboard[79] = 3;
	gboard[92] = 3;
	gboard[97] = 3;
	gboard[106] = 3;
	gboard[121] = 3;
    gboard[127] = 3;
	int countgu1 = 92;      //必须每次算完后减二
	int b_anylze[2][144];
  for(int iii=0; iii < 144; iii++)
  {
  	b_anylze[0][iii] = 100;
  	b_anylze[1][iii] = 100;
  }
	int be_anylze[2][100] = {{0, 0}};

  int countgu3 = 0;
   int mi = 1;
   for(int k = 0; k < 4; k++)
	{
		int i2 = computer[k];
		calOneGlidOne2(countgu3, i2, b_anylze[0], be_anylze[0], gboard, mi);
	}		
for(i = 0; i < 10; i++)
	{
		if(countgu3 < countgu1)
		{
			for(int k = 0; k < countgu3; k++)
			{
				int i2 = be_anylze[0][k];
				calOneGlidOne1(countgu3, i2, b_anylze[0], be_anylze[0], gboard, m);
			}
		}
  }
  	for(i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[0][i];
	if((i+1)%12==0)
	cout<<endl;
  }
/*  for(int i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[0][i];
	if((i+1)%12==0)
	cout<<endl;
}*/
cout<<endl<<endl;
 countgu3 = 0;
    m = 1;
   for(k = 0; k < 4; k++)
	{
		int i2 = human[k];
		calOneGlidOne2(countgu3, i2, b_anylze[1], be_anylze[1], gboard, m);
	}
for(i = 0; i < 10; i++)
	{
		if(countgu3 < countgu1)
		{
			for(int k = 0; k < countgu3; k++)
			{
				int i2 = be_anylze[1][k];
				calOneGlidOne1(countgu3, i2, b_anylze[1], be_anylze[1], gboard, m);
			}
		}
  }
 /*  for(int i = 0; i < 144; i++)
	{
	cout<<setw(5)<<b_anylze[1][i];
	if((i+1)%12==0)
	cout<<endl;
}*/
  system ("pause");
  return 0;
}

 



