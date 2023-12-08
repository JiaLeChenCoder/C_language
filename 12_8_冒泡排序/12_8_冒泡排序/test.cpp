#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef int ElemType;
typedef struct {
	ElemType* elem;
	int TableLen;
}SSTable;

void ST_Init(SSTable& ST, int len)
{
	ST.TableLen = len;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand()%100;
	}
}

void ST_print(SSTable ST)
{
	for (int i = 0; i < ST.TableLen; i++)
	{
		printf("%3d", ST.elem[i]);
	}
	printf("\n");
}

void Swap(ElemType& a, ElemType& b)
{
	ElemType temp;
	temp = a;
	a = b;
	b = temp;
}

void Bubble_sort(ElemType A[], int n)
{
	int i, j;
	bool flag=false;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (A[j - 1] > A[j])
			{
				Swap(A[j - 1], A[j]);
				flag = true;
			}
		}
		if (flag == false)
			return ;
	}
}

int main()
{
	SSTable ST;
	ST_Init(ST,8);//≥ı ºªØ
	ST_print(ST);
	Bubble_sort(ST.elem, 8);
	ST_print(ST);
	return 0;
}