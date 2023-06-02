#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[10] = {1,2,5,4,7,8,9,6,3,10};
	int a = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = 0;
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j+ 1] = t;
			}
		}
	}
	for (i = 0; i <a; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}