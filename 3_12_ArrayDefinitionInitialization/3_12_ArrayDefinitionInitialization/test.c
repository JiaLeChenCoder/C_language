//#include<stdio.h>
//int main()
//{
//	//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//	int i = 0;
//	int a[3] = { 1,2,3 };
//	int b[3] = { 4,5,6 };
//	int t = 0;
//	for (i = 0; i < 3; i++)
//	{
//		t = b[i];
//		b[i] = a[i];
//		a[i] = t;
//	}
//	printf("a[3]������Ľ����");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\nb[3]������Ľ����");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void init(int a[])
//{
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//	  /*a[i]=0;*/
//		scanf_s("%d", &a[i]);
//	}
//}
//void print(int a[])
//{
//	for (int  i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int a[])
//{
//	int i = 0;
//	for (int i = 0; i  < 5; i++)
//	{
//		int t = 0;
//		t = a[i];
//		a[i] = a[9 - i];
//		a[9 - i] = t;
//	}
//}
//int main()
//{
//	//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//    //ʵ��print()  ��ӡ�����ÿ��Ԫ��
//    //ʵ��reverse()  �����������Ԫ�ص����á�
//	int a[10];
//	init(a);
//	reverse(a);
//	print(a);
//	return 0;
//}

#include<stdio.h>
int  main()
{
	//ʵ��һ�������������ð������
	int a[10] = {1,3,9,6,5,4,7,8,2,10};
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = 0;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}