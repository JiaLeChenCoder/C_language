#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char i =0;
	int d = 10;
	//Ĭ���Ҷ���
	//printf("%-10d\n", 19940525);
	scanf("%d %c",&d,&i);//����϶�ȡʱ����Ϊ%c���ܺ��Կո��\n��������Ҫ����ǰ���һ���ո�
	printf("%d,%c", d, i);
	return 0;
}