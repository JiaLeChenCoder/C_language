#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指针存放首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	int n;	//上半部分行数
//	scanf("%d", &n);
//	//上半部分：
//	for (int i = 1; i <= n; i++) 
//	{	//行数做循环条件
//		//1、打印空格
//		for (int j = 0; j < n - i; j++) {
//			printf(" ");
//		}
//		//2、打印*号
//		for (int j = 0; j < 2 * i - 1; j++) {
//			printf("*");
//		}
//		//3、打印完一排换行
//		printf("\n");
//	}
//	//下半部分：
//	for (int i = 1; i <= n - 1; i++) {
//		for (int j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (n - 1 - i) + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//求出0～100000之间的所有“水仙花数”并输出。
//    //“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//    //如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//	int num = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		int count = 1;
//		int sum = 0;
//		int n = 0;
//		n = num;
//		while (n / 10)
//		{
//			count++;
//			n /= 10;
//		}
//		n = num;
//		while (n)
//		{
//			sum += pow(n % 10, count);
//			n /= 10;
//		}
//		if (sum == num)
//		{
//			printf("%d是水仙花数\n", num);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
    //例如：2 + 22 + 222 + 2222 + 22222
	printf("请输入一个数\n");
	int a = 0;
	int Sn = 0;
	int t = 0;
	scanf("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		t = 10*t + a;
		Sn += t;
	}
	printf("Sn=%d", Sn);
	return 0;
}