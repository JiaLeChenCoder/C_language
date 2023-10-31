#define _CRT_SECURE_NO_WARNINGS  1

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int count = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		for (b = 1; b <= 20; b++)
//		{
//			for (c = 1; c <= 37; c++)
//			{
//				for (d = 1; d <= 37; d++)
//				{
//					if (a + b + c + d == 40 && a * 10 + b * 5 + c * 2 + d * 1 == 100)
//					{
//						count++;
//					}
//				}
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	char* c =(char*)malloc(i);
//	char d;
//	//scanf("%c", &d);
//	fgets(c, i, stdin);
//	puts(c);
//	return 0;
//}

int fun(int n)
{
	if (1 == n||2==n)
	{
		return 1;
	}
	return fun(n-1)+fun(n-2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m=fun(n);
	printf("%d", m);
	return 0;
}