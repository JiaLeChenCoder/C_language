#include<stdio.h>
int main()
{
	//∏¥œ∞√∞≈›≈≈–Ú
	int i = 0;
	int j = 0;
	int a[10] = { 1,2,3,4,54,6,7,8,9 };
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = 0;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}