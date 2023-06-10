#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	double s = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s+=(2 * i)*(2 * i) / ((2 * i - 1) * (2 * i - 1));
//	}
//	printf("%.4lf", s);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//    /*考生在此行下设计程序，不允许删除该行*/
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d,%d", &a, &b);
//    c = a / 10 + a % 10 * 100 + b / 10 * 10 + b % 10 * 1000;
//    printf("c=%d", c);
//}

//#include <stdio.h>
//void main()
//{
//    /*考生在此行下设计程序，不得删除本行*/
//    int i = 0;
//    int a = 0;
//    int b = 1;
//    double s = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        a += i;
//        b *= i;
//        s += (double)a / b;
//    }
//    printf("s=%.5lf\n",s);
//}


//#include <stdio.h>
//void main()
//{
//	/*2022年每次加油金额数据（单位：元）*/
//	int a[38] = { 300,350,400,300,350,450,400,350,450,430,420,380,350,340,320,370,410,420,370,
//		420,450,400,350,450,430,420,380,350,340,320,370,410,420,400,300,350,450,375 };
//	/*每次加油相应的价格数据（单位：元/升）*/
//	float b[38] = { 7.82,7.95,8.24,8.30,7.95,7.67,7.32,7.56,7.89,7.83,8.12,8.23,8.34,7.97,8.17,
//		7.56,7.85,8.14,8.30,7.85,7.57,7.38,7.51,7.84,7.85,8.15,8.23,7.84,7.97,8.37,8.25,8.46,
//		7.43,7.59,7.77,8.15,7.75,7.43 };
//	/*考生在此行下设计程序，不得删除本行*/
//	int sum = 0;
//	double sum1 = 0;
//	int a = 0;
//	int i = 0;
//	for (i = 0; i < 38; i++)
//	{
//		sum += a[i];
//		sum1 += a[i] / b[i];
//	}
//	printf("2022年加油%d元，共%lf升,百公里平均耗油%.2lf升", sum, sum1, sum / 19388);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//    /*考生在此行下设计程序，不允许删除该行*/
//    int a = 0;
//    int b = 0;
//    double d = 0;
//    char c;
//    scanf("%d,%d", &a, &b);
//    scanf("%c", &c);
//    switch (c)
//    {
//    case '+':d = a + b; break;
//    case '-':d = a - b; break;
//    case '/':d = a / b; break;
//    case '*':d = a * b; break;
//    default:printf("输入错误\n"); break;
//    }
//    printf("%lf\n", d);
//}

//#include <stdio.h>
//#include<math.h>
//void main()
//{
//    /*考生在此行下设计程序，不得删除本行*/
//    int sum = 0;
//    int i = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 10; i < 100; i++)
//    {
//        a = i % 10;
//        b = i / 10;
//        if (abs(a - b) == 1)
//            sum += i;
//    }
//    printf("sum=%d\n", sum);
//}

#include <stdio.h>
void main()
{
	/*云闪付记录*/
	int a[] = { 166,175,135,185,196,175,185,155,130,166,186,185,195,163,174,121,243,-1 };
	/*翼支付记录*/
	int b[] = { 120,119,125,134,65,167,73,234,512,165,145,186,-1 };
	/*考生在此行下设计程序，不得删除本行*/
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	while (a[i] != -1)
	{
		sum1 += a[i];
		i++;
	}
	i = 0;
	while (b[i] != -1)
	{
		sum2 += b[i];
		i++;
	}
	if (sum1 > sum2)
		printf("云闪付比翼支付多支付%d元\n", sum1 - sum2);
	else
		printf("云闪付比翼支付少支付%d元\n", sum2 - sum1);
}
