#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//求最小公倍数
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//第一种方法
//	/*int m = a > b ? a : b;
//	while (m % a != 0 || m % b != 0)
//	{
//		m++;
//	}*/
//	//第二种方法
//	int i = 1;
//	while (i * a % b != 0)
//	{
//		i++;
//	}
//	/*printf("最小公倍数是：%d", m);*/
//	printf("最小公倍数是：%d", i * a);
//	return 0;
//}
//
//#include<stdio.h>
//#include<assert.h>
//void reverse(char* lef, char* right)
//{
//	assert(lef && right);
//	while (lef < right)
//	{
//		char temp = *lef;
//		*lef = *right;
//		*right = temp;
//		lef++;
//		right--;
//	}
//}
//int main()
//{
//	//倒置字符串，将一句话的单词倒置，标点符号不倒置，比如 I like China.变成 China. like I
//	char arr[101] = { 0 };
//	gets(arr);
//	int len=strlen(arr);
//	reverse(arr, arr + len - 1);
//	//将每个单词进行逆序
//	char* c = arr;
//	while (*c)
//	{
//		char* str = c;
//		while(*c != ' '&&*c != '\0')
//		{
//			c++;
//		}
//		reverse(str, c - 1);
//		if (c != '\0')
//			c++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //死循环
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)//判断字符串是否结束，‘\0’的ASCII值为0
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char* p = "abcdefghijklm";
//	int len = my_strlen(p);//传的是首元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}

#include<stdio.h>
void OddEvenSpa(int* arr)
{
	int i = 0;
	int n = 0;
	int tmp = 0;
	//题目：
	//输入一个整数数组，实现一个函数，
	//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
	//所有偶数位于数组的后半部分。
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
		{
			tmp = arr[n];
			arr[n] = arr[i];
			arr[i] = tmp;
			n++;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	OddEvenSpa(arr);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
