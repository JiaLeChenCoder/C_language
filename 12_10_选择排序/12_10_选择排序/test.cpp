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
		ST.elem[i] = rand() % 100;
	}
}

void print(SSTable ST)
{
	for (int i = 0; i < ST.TableLen; i++)
	{
		printf("%3d ", ST.elem[i]);
	}
	printf("\n");
}

void swap(ElemType& a, ElemType& b)
{
	ElemType tep;
	tep = a;
	a = b;
	b = tep;
}

void SelectSort(ElemType A[],int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
				swap(A[i], A[min]);
			}
		}
	}
}
int main()
{
	SSTable ST;
	ST_Init(ST, 10);
	print(ST);
	SelectSort(ST.elem, 10);
	print(ST);
	return 0;
}