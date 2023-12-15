#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 7
typedef int Elemtype;

//typedef struct {
//	Elemtype* elem;
//	int TableLen;
//}SSTable;
//
//void ST_Init(SSTable &ST, int len)
//{
//	ST.TableLen = len;
//	ST.elem = (Elemtype*)malloc(sizeof(Elemtype) * ST.TableLen);
//	int i;
//	srand(time(NULL));
//	for (i = 0; i < ST.TableLen; i++)
//	{
//		ST.elem[i] = rand() % 100;
//	}
//}
//
//void ST_printf(SSTable ST)
//{
//	for (int i = 0; i < ST.TableLen; i++)
//	{
//		printf("%3d", ST.elem[i]);
//	}
//	printf("\n");
//}


void  merge(Elemtype A[], int low, int mid, int high)
{
	static Elemtype B[N];
	int i, j, k;
	for (k = low; k <= high; k++)
		B[k] = A[k];
	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++)
	{
		if (B[i] <= B[j])
		{
			A[k] = B[i++];
		}
		else
			A[k] = B[j++];
	}
	while (i <= mid)
		A[k++] = B[i++];
	while (j <= high)
		A[k++] = B[j++];
}

void Mergesort(Elemtype A[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		Mergesort(A, low, mid);
		Mergesort(A, mid+1, high);
		merge(A, low, mid,high);
	}
}
void print(int *a)
{
	for (int i = 0; i < N; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
}

int main()
{
	int A[7] = { 49,38,65,97,76,13,27 };
	Mergesort(A, 0, 6);
	print(A);
	return 0;
}
