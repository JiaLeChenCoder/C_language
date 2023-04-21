#include<stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
void print1(int** p)
{
	printf("num=%d", **p);
}
void test()
{
	printf("你好");
}

typedef void(*a_a)(int);
int main()
{
	/*int arr[9] = { 1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	//一级指针传参
	//print(p, sz);
	// 
	//二级指针传参
	//int a = 10;
	//int* p = &a;
	//int** pp = &p;
	//print1(pp);
	//return 0;

	//函数指针（指向函数的指针）
	printf("%p\n", print1);
	printf("%p\n",&print1);//函数名和&函数名都是函数的地址

	(*(void(*)())0)();//将0强转为void(*)类型的函数指针，所以0地址处放了一个函数，并且没有参数
	                   //，返回类型为空，就是调用0地址处的函数
	void(*A(int, void(*)(int)))(int);
	a_a A(int,a_a);
	//A函数的参数第一个是int类型，第二个参数是void(*)(int)类型的函数指针，A函数的返回类型也是一个函数指针。
	//此函数指针指向的函数参数是int，返回类型是空。
	
}


