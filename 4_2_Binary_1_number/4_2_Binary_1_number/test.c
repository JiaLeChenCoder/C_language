#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//����㷨�Ը����е�����
//int count_one_bit(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//-1
// 
//int count_one_bit(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}


//int count_one_bit(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

int count_one_bit(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);//10 20 15 -1

	int ret = count_one_bit(num);
	printf("%d\n", ret);
	return 0;
}