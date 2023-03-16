#include<stdio.h>
void swap(int a[], int b[], int sz)
{
	int t;
	for (int i = 0; i < sz; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
}

int main()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int sz = 3;
	swap(a, b, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}