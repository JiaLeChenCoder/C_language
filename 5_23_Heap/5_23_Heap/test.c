#include"heap.h"
void HeapSort(int* a, int n)
{

	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		// 再调整，选出次小的数
		AdjustDown(a, end, 0);
		--end;
	}
}

int main()
{
	int a[] = { 7,8,3,5,1,9,5,4 };
	HeapSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}