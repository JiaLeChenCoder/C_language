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
//	//-5�Ķ���������
//	int a = -5;
//	//10000000 00000000 00000000 00000101  ԭ��
//	//11111111 11111111 11111111 11111010  ���루����λ���䣬����λ��λȡ����
//	//11111111 11111111 11111111 11111011 ���루�����һ��
//
//	//5�Ķ���������
//	int b = 5;
//	//00000000 00000000 00000000 00000101  ԭ��
//	//00000000 00000000 00000000 00000101  ����
//	//00000000 00000000 00000000 00000101  ����
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;//�з��Ÿ�������������
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111 - �ض�(����a�Ķ�����λ�����룩��ֻ��8������λ)
//	//������������Ϊchar���з��ŵ�char,��������������ʱ�򣬸�λ�������λ����Ϊ1��������Ľ�����£�
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 -1
//
//	unsigned char c = -1;//�޷��Ÿ�������������
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111  ��λֱ�Ӳ�0
//
//	char b = 1;
//	//����b�Ķ�����λ�����룩��ֻ��8������λ��00000001
//	//��Ϊchar���з��ŵ�char����������������ʱ�򣬸�λ�������λ����Ϊ0��������£�
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
//	int i = 0;//�ӵ�0�п�ʼ��
//	int j = col - 1;//�ӵ�0�е����һλ��ʼ��
//	while (i < row && j >= 0)//����С�ڵ�row��,���ڵ��ڵ�0λ
//	{
//		if (key > a[i][j])//�������һλ������+1
//		{
//			i++;
//		}
//		else if (key < a[i][j])//С�����һλ��λ����ǰ-1
//		{
//			j--;
//		}
//		else {
//			return 1;//�ҵ�����1ֵ
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
//		printf("�ҵ��ˡ�\n");
//	}
//	else {
//		printf("û�ҵ���\n");
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