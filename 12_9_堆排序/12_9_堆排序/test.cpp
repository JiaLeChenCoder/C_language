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

void AdjustDown(ElemType A[],int k,int len)
{
	int dad = k;
	int son = 2 * dad + 1;
	while (son <= len)
	{
		if (son + 1 <= len && A[son] < A[son + 1])
		{
			son++;
		}
		if (A[son] > A[dad])
		{
			swap(A[son], A[dad]);
			dad = son;
			son = dad* 2 + 1;
		}
		else
			break;
	}
}
void HeapSort(ElemType A[], int len)
{
	int i;
	for (i = len / 2; i >= 0; i--)
	{
		AdjustDown(A, i, len);
	}
	swap(A[0], A[len]);
	for (i = len - 1; i > 0; i--)
	{
		AdjustDown(A, 0, i);
		swap(A[0], A[i]);
	}
}

int main()
{
	SSTable ST;
	ST_Init(ST, 10);
	ElemType A[10] = { 3,81,5,66,33,87,99,65,41,21 };
	/*memcpy(ST.elem, A, sizeof(A));*/
	print(ST);
	HeapSort(ST.elem,9);
	print(ST);
	return 0;
}