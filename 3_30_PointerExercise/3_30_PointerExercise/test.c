//#include<stdio.h>
//#include <stdio.h>
////int main()
////{
////    char str1[] = "hello bit.";
////    char str2[] = "hello bit.";
////    char* str3 = "hello bit.";
////    char* str4 = "hello bit.";
////    if (str1 == str2)
////        printf("str1 and str2 are same\n");
////    else
////        printf("str1 and str2 are not same\n");
////
////    if (str3 == str4)
////        printf("str3 and str4 are same\n");
////    else
////        printf("str3 and str4 are not same\n");
////
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//	//-5的二进制序列
//	int a = -5;
//	//10000000 00000000 00000000 00000101  原码
//	//11111111 11111111 11111111 11111010  反码（符号位不变，其他位按位取反）
//	//11111111 11111111 11111111 11111011 补码（反码加一）
//
//	//5的二进制序列
//	int b = 5;
//	//00000000 00000000 00000000 00000101  原码
//	//00000000 00000000 00000000 00000101  反码
//	//00000000 00000000 00000000 00000101  补码
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;//有符号负数的整型提升
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111 - 截断(变量a的二进制位（补码）中只有8个比特位)
//	//整型提升（因为char是有符号的char,所以整型提升的时候，高位补充符号位，即为1，提升后的结果如下）
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 -1
//
//	unsigned char c = -1;//无符号负数的整型提升
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111  高位直接补0
//
//	char b = 1;
//	//变量b的二进制位（补码）中只有8个比特位：00000001
//	//因为char是有符号的char，所以整型提升的时候，高位补充符号位，即为0，结果如下：
//	//00000000000000000000000000000001
//	printf("a=%d,b=%d,c=%d", a, c,b);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h> 
//void revolve(char* a, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		char ret = a[0];
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			a[i] = a[i + 1];
//		}
//		a[3] = ret;
//	}
//}
//int main()
//{
//	int k = 0;
//	scanf_s("%d", &k);
//	char a[5] = "ABCD";
//	revolve(a, k);
//	printf("%s ", a);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int find(int a[3][3], int row, int col, int key)
//{
//	int i = 0;//从第0行开始找
//	int j = col - 1;//从第0行的最后一位开始找
//	while (i < row && j >= 0)//条件小于第row行,大于等于第0位
//	{
//		if (key > a[i][j])//大于最后一位，行数+1
//		{
//			i++;
//		}
//		else if (key < a[i][j])//小于最后一位，位数向前-1
//		{
//			j--;
//		}
//		else {
//			return 1;//找到返回1值
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
//	int res = find(a, 3, 3, 7);
//	if (res == 1)
//	{
//		printf("找到了。\n");
//	}
//	else {
//		printf("没找到。\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";
    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}