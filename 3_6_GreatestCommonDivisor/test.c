#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//写一个代码打印1-100之间所有3的倍数的数字
//	int i=0;
//	for(i=1;i<101;i++)
//	{
//		if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//void Swap(int* x,int* y)
//{
//	int t;
//	t=*x;
//	*x=*y;
//	*y=t;
//}
//int main()
//{
//	写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//		Swap(&a,&b);
//	if(a<c)
//		Swap(&a,&c);
//	if(b<c)
//		Swap(&b,&c);
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//int main()
//{
//	//写一个代码：打印100~200之间的素数
//	int i=0;
//	for(i=100;i<201;i++)
//	{
//		if(i%2)
//	}
//}

//int main()
//{
//	//打印1000年到2000年之间的闰年
//	int i=0;
//	for(i=1000;i<2001;i++)
//	{
//	if((i%4==0)&&(i%100!=0)||(i%400==0))
//	{
//		printf("%d ",i);
//	}
//	}
//return 0;
//}

//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for(i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for(j = 2; j <= i/2; j++)
//		{
//			if(i % j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if(j > i/2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	//	给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
	int a = 0;
	int b = 0;
	int t = 0;
	scanf("%d%d",&a,&b);
	while(t = a % b)
	{
		a = b;
		b = t;
	}
	printf("%d\n", b);
	return 0;
}


