#define   _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//			if (i == 5)
//				continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
	//代码1
	/*for (;;)
	{
		printf("hehe\n");
	}*/

	//2
	//int i = 0;
	//int j = 0;
	//int t = 0;
	////这里打印多少个hehe?
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//		t++;
	//	}
	//}
	//printf("\n%d", t);

	//代码3
	//int i = 0;
	//int j = 0;
	////如果省略掉初始化部分，这里打印多少个hehe?
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}

	//代码4-使用多余一个变量控制循环
	/*int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;*/

//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	printf("%d", k);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}

//判断一个数是否为奇数

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	if (1 == a % 2)
//		printf("是奇数\n");
//	else
//		printf("不是奇数");
//	return 0;
//}

//输出1——100之间的奇数
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i < 101; i++)
//	{
//		if (1 == i % 2)
//			printf("%d ",i);
//	}
//	return 0;
//}
