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

//ʵ��6 ����
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
//	printf("��������������");
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
//	printf("������һ����Ҫ�׳˵���\n");
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
//	printf("�����������߳�\n", a, b, c);
//	scanf("%d,%d,%d", &a, &b, &c);
//	printf("%lf", S(a, b, c));
//	return 0;
//}

//ʵ��7 ����
// ���ֵ����
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//��Ԫ�ظ����ķ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//����ֱ�Ӱ�sz����10
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];//���if{}��ֻ��һ����䣬{}��ʡ��
//			j = i;
//		}
//	}
//	printf("%d��λ����%d", max, j);
//	return 0;
//}

//ð������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0; int j = 0;
//	//��Ԫ�ظ����ķ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)//����ֱ�Ӱ�sz����10
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

//��ż����(����ż����ռһ��)
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

