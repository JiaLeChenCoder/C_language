//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//    //如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
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
//	//实现一个函数来交换两个整数的内容
//	int a = 6;
//	int b = 8;
//	printf("交换前:%d %d\n",a,b);
//	swap(&a,&b);
//	printf("交换后:%d %d\n",a,b);
//return 0;
//}

//int LeapYear(int year)
//{
//return((year%4==0)&&(year%100!=0)||(year%400==0));
//}
//#include<stdio.h>
//int main()
//{
//	//实现函数判断year是不是润年。
//	int year = 0;
//	int value = 0;
//	scanf("%d",&year);
//	value=LeapYear(year);
//	if(value==1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
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
//		return 0;//不是质数返回0
//		break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//		//实现一个函数，判断一个数是不是素数。
//        //利用上面实现的函数打印100到200之间的素数。
//	int i = 0;
//	for(i = 101;i < 201;i+=2)//把偶数去掉
//	{
//		if(PrimeNumber(i))
//		{
//			printf("%d  ",i);
//		}
//	}
//	return 0;
//}