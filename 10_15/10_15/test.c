#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (3 < i < 10)//无论输入什么值都会满足条件,
//		//if(3<a&&a<10)
//		printf("在3和10之间");
//	else
//		printf("不在3和10之间");
//	return 0;
//}


int main()
{
	//短路语句
	int i = 1;
	i || printf("你好");//不会输出
	i = 0;
	i&& printf("hello");

	return 0;
}