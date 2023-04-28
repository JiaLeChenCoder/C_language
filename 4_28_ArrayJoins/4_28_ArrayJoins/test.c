#include<stdio.h>
int main()
{
	char arr[100] = { 0 };
	char arr1[100] = { 0 };
	char arr2[200] = { 0 };
	int i = 0;
	int j = 0;
	gets(arr);
	gets(arr1);
	for (i = 0; arr[i]!='\0'; i++)
	{
		arr2[j++] = arr[i];
	}
	for (i = 0; arr1[i] != '\0'; i++)
	{
		arr2[j++] = arr1[i];
	}
	int sz = sizeof(arr2) / sizeof(arr[0]);
	for (i = 0;i<sz; i++)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}