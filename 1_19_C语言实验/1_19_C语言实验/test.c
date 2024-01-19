#include<stdio.h>
int main()
{
	int a;
	*&a;//无效
	int A[10] = { 1,2,3,4,5 }; int* p; p = a;
	//对于指针变量做加法运算时，每次加1，增加的长度是其基类型的长度，
	// 因为基类型是int，所以p的值增大了4个字节。

	char *q = (char*)malloc(20); //代表在堆空间上，申请20个字节，
	//由于malloc返回的是void* 类型指针，
	//我们要往内部存储字符串，所以强转为char*
	return 0;
}