#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//дһ����������������һ���ַ��������ݡ�
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int right = len - 1;
//	int left = 0;
//	while (left < right)
//	{
//		char t;
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

#include <stdio.h>
//int Drink(int money, int price)
//{
//	int sum = 0;
//	int temp = 0;
//	int ret = 0;
//	sum = money / price;
//	ret = sum;
//	while (ret / 2 != 0)
//	{
//		temp = ret;
//		ret = ret / 2;
//		sum += ret;
//		ret = temp % 2 + ret;
//	}
//	return sum;
//}
//int main()
//{
//	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//	int money = 0;
//	int price = 0;
//	printf("�������ܽ��ÿƿ�۸�:\n");
//	scanf("%d %d", &money, &price);
//	int bottle = Drink(money, price);
//	printf("%dԪ���Ժ���ˮ%dƿ\n", money, bottle);
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}