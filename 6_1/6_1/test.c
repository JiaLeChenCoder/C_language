#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//void compare(int* p1, int* p2, int* p3)
//{
//	if (*p1 < *p2)//当p1指向的值小于p2指向的值，就交换
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p1;
//		*p1 = t;
//	}//到此，目前p1指向的值最大，下面再与另一个地址的值相比
//	if (*p1 < *p3)
//	{
//		int t = 0;
//		t = *p3;
//		*p3 = *p1;
//		*p1 = t;
//	}//到此，p1指向的值最大
//	if (*p2 < *p3)
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p3;
//		*p3 = t;
//	}//到此p2指向的值第二大，p3指向的值第三大
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	compare(&a, &b, &c);//比较函数
//	printf("%d,%d,%d\n", c, b, a);
//	return 0;
//	////另一种写法
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//int* p1 = &a, * p2 = &b, * p3 = &c;
//	//scanf("%d,%d,%d", p1, p2, p3);
//	//compare(p1, p2, p3);//比较函数
//	//printf("%d,%d,%d\n", *p3, *p2, *p1);
//	return 0;
//}

//输出素数
int main()
{
	int i = 0;
	int j = 0;
	for (int i = 100; i < 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d\t", i);
	}
	return 0;
}