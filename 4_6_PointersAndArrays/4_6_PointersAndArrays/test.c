#include<stdio.h>
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a+0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a+1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	//printf("%d\n", sizeof(&a+1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0]+1));

	char arr[] = { 'a','b','c','d','e' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));
	return 0;
}