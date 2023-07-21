#include"sort.h"
int main()
{
	int arr[] = { 2,3,5,7,9,4,1,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("≈≈–Ú«∞\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	CountSort(arr, n);
	printf("\n≈≈–Ú∫Û\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}