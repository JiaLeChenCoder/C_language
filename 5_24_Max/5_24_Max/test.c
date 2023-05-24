#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	//求元素个数的方法
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)//或者直接吧sz换成10
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];//如果if{}中只有一条语句，{}可省略
			j = i;
		}
	}
	printf("%d的位置是%d", max, j);
	return 0;
}