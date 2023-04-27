#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	void f1();
//	printf("input a,b");
//	scanf("%d,%d", &a, &b);
//	f1(&a,&b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//void f1(int* a,int* b)
//{
//	int t = 2;
//	int a=0, b=0;
//	(*a) *= t;
//	(*b) /= t;
//}

//实验6 函数
//#include<stdio.h>
//#include<math.h>
//double hypot(double a, double b)
//{
//	double c;
//	c = sqrt(a * a + b * b);
//	return c;
//}
//int main()
//{
//	double a, b;
//	printf("请输入两个数：");
//		scanf("%lf,%lf", &a, &b);
//		printf("%lf\n", hypot(a, b));
//}

//#include<stdio.h>
//long power(int n)
//{
//	long f=0;
//	if (n > 1)
//		f=power(n - 1)* n;
//	else
//		return 1;
//	return f;
//}
//int main()
//{
//	int n;
//	long y;
//	printf("请输入一个需要阶乘的数\n");
//	scanf("%d", &n);
//	y =power(n);
//	printf("%d!=%d\n", n, y);
//}

//#include<stdio.h>
//#include<math.h>
//double S(a, b, c)
//{
//	double p = (a + b + c) / 2;
//	double s = 0;
//	s = sqrt((p - a)*(p - b)*(p - c)*p);
//	return s;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个边长\n", a, b, c);
//	scanf("%d,%d,%d", &a, &b, &c);
//	printf("%lf", S(a, b, c));
//	return 0;
//}

//实验7 数组
// 最大值问题
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//求元素个数的方法
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//或者直接吧sz换成10
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//如果if{}中只有一条语句，{}可省略
//			j = i;
//		}
//	}
//	printf("%d的位置是%d", max, j);
//	return 0;
//}

//冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0; int j = 0;
//	//求元素个数的方法
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//或者直接吧sz换成10
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j]<arr[j+1])
//			{
//				int t = 0;
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//奇偶数组(奇数偶数各占一半)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[20] = {0};
//	int col0 = 0, col1 = 0;
//	int j = 0;
//	int arr1[2][10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] % 2 == 0)
//		{
//			arr1[0][col0++] = arr[i];
//		}
//		else
//		{
//			arr1[1][col1++] = arr[i];
//		}
//	}
//	for (i = 0; i <2; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d ", arr1[i][j]);
//			if (j == 9)
//				printf("\n");
//		}
//	}
//	return 0;
//}

