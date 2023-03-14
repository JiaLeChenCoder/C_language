//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//不允许创建临时变量，交换两个整数的内容
//	//int a = 3;
//	//int b = 4;
//	//printf("交换前：%d %d\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("交换后：%d %d", a, b);
//	//return 0;
//	//第二种方法
//	int a = 3;
//	int b = 4;
//	printf("交换前：%d %d\n", a, b);
//	b= a + b;
//	a = b - a;
//	b = b - a;
//	printf("交换后：%d %d", a, b);
//	return 0;
//
//}

//#include<stdio.h>
//int A(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	return count;
//}
//int main()
//{
//	//写一个函数返回参数二进制中 1 的个数。
//    //比如： 15    0000 1111    4 个 1
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	printf("二进制1的个数=%d\n",A(num));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	    //获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//		int i = 0;
//		int date = 0;
//		int a[32] = { 0 };
//		printf("请输入一个数：");
//		scanf("%d", &date);
//		for (i = 0; i < 32; i++) {
//			a[i] = date % 2;
//			date /= 2;
//		}
//		printf("偶数位为:");
//		for (i = 31; i >= 0; i -= 2) {
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("奇数位为:");
//		for (i = 30; i >= 0; i -= 2) {
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		return 0;
//}


//#include<stdio.h>
////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int Dif_bits(int m, int n)
//{
//	int count = 0;
//	int value = m ^ n;
//	while (value != 0)
//	{
//		if ((value & 1) == 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	int count = Dif_bits(num1, num2);
//	printf("%d", count);
//	return 0;
//}

