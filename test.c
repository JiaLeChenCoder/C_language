//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//    //�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d",&a);
//	for(i = 1;i<=a;i++)
//	{
//	for(j = 1;j <= i;j++)
//	{
//		printf("%d*%d=%d ",j,i,i*j);
//		if(i == j)
//		{
//		printf("\n");
//		}
//	}
//	}
//return 0;
//}
//void swap(int* a,int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//#include<stdio.h>
//int main()
//{
//	//ʵ��һ��������������������������
//	int a = 6;
//	int b = 8;
//	printf("����ǰ:%d %d\n",a,b);
//	swap(&a,&b);
//	printf("������:%d %d\n",a,b);
//return 0;
//}

//int LeapYear(int year)
//{
//return((year%4==0)&&(year%100!=0)||(year%400==0));
//}
//#include<stdio.h>
//int main()
//{
//	//ʵ�ֺ����ж�year�ǲ������ꡣ
//	int year = 0;
//	int value = 0;
//	scanf("%d",&year);
//	value=LeapYear(year);
//	if(value==1)
//		printf("������");
//	else
//		printf("��������");
//return 0;
//}

//#include<stdio.h>
////#include<math.h>
//int PrimeNumber(int a)
//{
//	int i = 0;
//    for(i = 2;i < a; i++)
//	{
//		if(a%i == 0)
//		{
//		return 0;//������������0
//		break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//		//ʵ��һ���������ж�һ�����ǲ���������
//        //��������ʵ�ֵĺ�����ӡ100��200֮���������
//	int i = 0;
//	for(i = 101;i < 201;i+=2)//��ż��ȥ��
//	{
//		if(PrimeNumber(i))
//		{
//			printf("%d  ",i);
//		}
//	}
//	return 0;
//}