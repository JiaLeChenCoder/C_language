#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//дһ�������ӡ1-100֮������3�ı���������
//	int i=0;
//	for(i=1;i<101;i++)
//	{
//		if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//void Swap(int* x,int* y)
//{
//	int t;
//	t=*x;
//	*x=*y;
//	*y=t;
//}
//int main()
//{
//	д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//		Swap(&a,&b);
//	if(a<c)
//		Swap(&a,&c);
//	if(b<c)
//		Swap(&b,&c);
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//int main()
//{
//	//дһ�����룺��ӡ100~200֮�������
//	int i=0;
//	for(i=100;i<201;i++)
//	{
//		if(i%2)
//	}
//}

//int main()
//{
//	//��ӡ1000�굽2000��֮�������
//	int i=0;
//	for(i=1000;i<2001;i++)
//	{
//	if((i%4==0)&&(i%100!=0)||(i%400==0))
//	{
//		printf("%d ",i);
//	}
//	}
//return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for(i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		for(j = 2; j <= i/2; j++)
//		{
//			if(i % j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if(j > i/2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	//	���������������������������Լ��
//���磺
//���룺20 40
//�����20
	int a = 0;
	int b = 0;
	int t = 0;
	scanf("%d%d",&a,&b);
	while(t = a % b)
	{
		a = b;
		b = t;
	}
	printf("%d\n", b);
	return 0;
}


