#include<stdio.h>
//int main()
//{
//	//ʵ�ֳ˷���
//	int i = 0;
//	int j = 0;
//	for(i = 1;i < 10;i++)
//	{
//		for(j = 1;j <= i;j++)
//		{
//		  printf("%d*%d=%d ",j,i,i*j);
//		  if(i==j)
//	    	{
//			printf("\n");
//	    	}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//��10 �����������ֵ
//	int i = 0;
//	int a[10]={0};
//	int max = a[0];
//	for(i = 0;i < 10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i = 0;i < 10;i++)
//	{
//		if(a[i]>max)
//		{
//			max=a[i];
//		}
//	}
//	printf("max=%d\n",max);
//    return 0;
//}

//int main()
//{
//   //����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//	int t = 1;
//	double sum = 0;
//	int i = 0;
//	for(i = 1;i <101;i++)
//	{
//		sum += 1.0*t/i;
//		t = -t;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}

//int main()
//{
//	//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//	int count = 0;
//	int i = 0;
//	for(i = 1;i < 101;i++)
//	{
//		if(i % 10 == 9)
//		{
//			count++;
//		}
//		if(i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("����%d��\n",count);
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("*********   1. play  *******\n");
//	printf("*********   0. exit  ********\n");
//	printf("*****************************\n");
//}
////
////rand�����᷵��һ��0~32767֮��������
////ʱ���
//void game()
//{
//	//1.���������
//	int ret = rand()%100+1;//0~99+1-->1~100
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//��������Ϸ
//	int input = 0;
//	//�������������������
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
////��д������һ���������������в��Ҿ����ĳ����
////Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//	int a[10]={1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int left = 1;
//	int right = 9;
//	int mid = 0;
//	int b = 6;//Ҫ�ҵ���
//	int flag = 0;
//	for(i = 0;i < 10;i++)
//	{
//		mid =left + (right - left) / 2;
//		if(a[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else if(a[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//				printf("�ҵ��ˣ��±�Ϊ%d\n",mid);
//				flag=1;
//				break;
//		}
//	}
//	if(flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 7;//a��Ҫ���ҵ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�۰���ң����ֲ��ң���ǰ������������
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}