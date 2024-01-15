#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char i =0;
	int d = 10;
	//默认右对齐
	//printf("%-10d\n", 19940525);
	scanf("%d %c",&d,&i);//当混合读取时，因为%c不能忽略空格和\n，所以需要在其前面加一个空格
	printf("%d,%c", d, i);
	return 0;
}