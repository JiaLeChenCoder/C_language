#define _CRT_SECURE_NO_WARNINGS  1
//#include<stdio.h>
//int main()
//{
//	int i = 0, b = 0;
//	scanf("%d", &i);
//	int break_up = i;
//	while (i)
//	{
//		b = b * 10 + i % 10;
//		i = i / 10;
//	}
//	if (b == break_up)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d", &n);
	while (n)
	{
		i *=n;
		n--;
	}
	printf("%d", i);
	return 0;
}