#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//����С������
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//��һ�ַ���
//	/*int m = a > b ? a : b;
//	while (m % a != 0 || m % b != 0)
//	{
//		m++;
//	}*/
//	//�ڶ��ַ���
//	int i = 1;
//	while (i * a % b != 0)
//	{
//		i++;
//	}
//	/*printf("��С�������ǣ�%d", m);*/
//	printf("��С�������ǣ�%d", i * a);
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
//	//�����ַ�������һ�仰�ĵ��ʵ��ã������Ų����ã����� I like China.��� China. like I
//	char arr[101] = { 0 };
//	gets(arr);
//	int len=strlen(arr);
//	reverse(arr, arr + len - 1);
//	//��ÿ�����ʽ�������
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
//    //��ѭ��
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
//	while (*str)//�ж��ַ����Ƿ��������\0����ASCIIֵΪ0
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char* p = "abcdefghijklm";
//	int len = my_strlen(p);//��������Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//	return 0;
//}

#include<stdio.h>
void OddEvenSpa(int* arr)
{
	int i = 0;
	int n = 0;
	int tmp = 0;
	//��Ŀ��
	//����һ���������飬ʵ��һ��������
	//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
	//����ż��λ������ĺ�벿�֡�
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
