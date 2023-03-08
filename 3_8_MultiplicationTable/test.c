#include<stdio.h>
//int main()
//{
//	//实现乘法表
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
//	//求10 个整数中最大值
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
//   //计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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
//	//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//	printf("共有%d个\n",count);
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
////rand函数会返回一个0~32767之间的随机数
////时间戳
//void game()
//{
//	//1.生成随机数
//	int ret = rand()%100+1;//0~99+1-->1~100
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//猜数字游戏
//	int input = 0;
//	//设置了随机数的生成器
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
////编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//	int a[10]={1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int left = 1;
//	int right = 9;
//	int mid = 0;
//	int b = 6;//要找的数
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
//				printf("找到了，下表为%d\n",mid);
//				flag=1;
//				break;
//		}
//	}
//	if(flag == 0)
//		printf("找不到\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 7;//a是要查找的数字
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//折半查找（二分查找），前提是数组有序
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
//			printf("找到了，下标是：%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}