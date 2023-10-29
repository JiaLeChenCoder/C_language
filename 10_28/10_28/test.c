#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[10] = { 0 };
	char b[10] = { 0 };
	scanf("%s", arr);
	strcpy(b, arr);
	int i = 0;
	int len=strlen(arr);
	for (i = len-1; i >=len/2; i--)
	{
		char c;
		c = *(b);
		*(b) = *(b + i);
		*(b + i) = c;
	}
	int result=strcmp(arr, b);
	if (result < 0)
	{
		printf("-1\n");
	}
	else if (result > 0)
	{
		printf("1\n");
	}
	else {
		printf("0\n");
	}
	return 0;
}