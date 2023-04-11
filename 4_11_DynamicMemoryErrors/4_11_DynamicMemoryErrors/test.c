#include<stdio.h>
#include<stdlib.h>
//void test()
//{
//	int* p = (int)malloc(4);
//	*p = 20;//如果p的值是NULL，会出现问题
//	free(p);
//}

//void test1()
//{
//	int i = 0;
//	int* p = (int)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		return;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}
//
//void test2()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
//
//void test3()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不在指向动态内存的起始位置
//}

//void test4()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	//p = NULL;//加此行正确
//	free(p);//重复释放
//}

void test5()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}

int main()
{
	//void test();////对NULL指针的解引用操作
	//void test1();//对动态开辟空间的越界访问
	//void test2();//对非动态开辟内存使用free释放
	//void test3();//使用free释放一块动态内存的一部分
	//void test4();//对同一块动态内存多次释放
	void test5(); //动态开辟内存忘记释放，内存泄漏
	while (1);//找不到p，无法释放，内存泄漏
}