#define _CRT_SECURE_NO_WARNINGS 1
//实验8 数组
//#include<stdio.h>
//int main()
//{
	//方法一 一个数组实现逆序
	//char arr[100] = { 0 };
	//gets(arr);//输入字符串用
	//int len = strlen(arr);//strlen函数用来求长度
	//int i = len - 1;
	//int j = 0;
	//int t = 0;
	//while (j < i)
	//{
	//	t = arr[i];
	//	arr[i] = arr[j];
	//	arr[j] = t;
	//	i--;
	//	j++;
	//}
	//puts(arr);
	
	//方法二 两个数组实现逆序
	//char arr1[100] = { 0 };
	//char arr2[100] = { 0 };
	//gets(arr1);
	//int len = strlen(arr1);
	//int i = 0;
	//int j = 0;
	//for (i = len-1; i >=0; i--)//从后往前
	//{
	//	arr2[j++] = arr1[i];//arr2[j++] 也可以写成arr2[j],再在下一行j++
	//}
	//arr2[j] = '\0';
	//puts(arr2);
	//return 0;
//}

	//实验9 指针  
	// 1.交换a,b的值
//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//2.从小到大输出这三个数
//#include<stdio.h>
//void compare(int* p1, int* p2, int* p3)
//{
//	if (*p1 < *p2)//当p1指向的值小于p2指向的值，就交换
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p1;
//		*p1 = t;
//	}//到此，目前p1指向的值最大，下面再与另一个地址的值相比
//	if(*p1<*p3)
//	{
//		int t = 0;
//		t = *p3;
//		*p3 = *p1;
//		*p1 = t;
//	}//到此，p1指向的值最大
//	if (*p2 < *p3)
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p3;
//		*p3 = t;
//	}//到此p2指向的值第二大，p3指向的值第三大
//}
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//scanf("%d,%d,%d", &a, &b, &c);
//	//compare(&a, &b, &c);//比较函数
//	//printf("%d,%d,%d\n", c, b, a);
//	//return 0;
//	
//	//另一种写法
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int* p1 = &a, * p2 = &b, * p3 = &c;
//	scanf("%d,%d,%d", p1, p2, p3);
//	compare(p1,p2,p3);//比较函数
//	printf("%d,%d,%d\n",*p3,*p2,*p1);
//	return 0;
//}

