#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//	int a[1000];
//	int b[1000];
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入m,n\n");
//	scanf("%d%d", &m, &n);
//	printf("请输入第一个序列\n");
//	for ( i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("请输入第二个序列\n");
//	for ( j = 0; j < n; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	 i = 0;
//	 j = 0;
//	while (i < m && j < n)
//	{
//		if (a[i] >= b[j])
//		{
//			printf("%d ", b[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", a[i]);
//			i++;
//		}
//	}
//	if (i == m && j < n)
//	{
//		for(;j<n;j++)
//		printf("%d ", b[j]);
//	}
//	else
//	{
//		for (; i < m; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//    //KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b <= c || a + c <= b || b + c <= a)
//            printf("Not a triangle!\n");
//        else if (a == b && b == c) {
//            printf("Equilateral triangle!\n");
//        }
//        else if (a == b || b == c || a == c)
//            printf("Isosceles triangle!\n");
//        else
//            printf("Ordinary triangle!\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//   /* 变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
//    如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//    例如：
//        655 = 6 * 55 + 65 * 5
//        1461 = 1 * 461 + 14 * 61 + 146 * 1
//        求出 5位数中的所有 Lily Number。*/
//    int i, j;
//    for (i = 10000; i < 99999; i++) {
//        int sum = 0;
//        for (j = 10; j <= 10000; j = 10 * j) {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int Fib(int n) {
//    if (n <= 2) {
//        return n;
//    }
//    else {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//int main() {
//    //小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
// 
// 
// 
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}