#include<stdio.h>
void A(int arr1[], int sz)
{
	for (int i = 0; i <sz; i++)
	{
		printf("%d ", arr1[i]);
	}
}
void A2(int* arr1, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
		printf("%d ", *(arr1 + i));
	}
}
void A3(int (*arr1)[10], int sz)//数组指针为参数
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(*arr1+i));
		/*printf("%d ", (*arr1)[i]);*/
	}
}

void B(int (*arr2)[5], int m,int n)
{
	for (int i = 0; i < m; i++)
	{
		int j = 0; 
		for (j = 0; j <n; j++)
		{
			/*printf("%d ", *(*(arr2+i)+j));*/
			printf("%d ", arr2[i][j]);
		}
	}
	return 0;
}

void B1(int arr2[][5], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			//printf("%d ", *(*(arr2 + i) + j));
			printf("%d ", arr2[i][j]);
		}
	}
	return 0;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	A3(arr1, sz);

	/*int arr2[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	B(arr2,3,5);*/
	//B1(arr2, 3, 5);
	return 0;
}