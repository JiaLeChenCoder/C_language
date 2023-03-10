#include<stdio.h>
////递归
//int fib(int n)
//{
//if(n<=2)
//	return 1;
//else
//	return fib(n-1)+fib(n-2);
//}
//非递归
int fib(int n)
{
int result=1;
int pre_result=1;
int next_order_result;
while(n >2)
{
    n -= 1;
    next_order_result = pre_result;
	pre_result=result;
	result=next_order_result+pre_result;
}
return result;
}
int main()
{
//递归和非递归分别实现求第n个斐波那契数
	int a = 0;
	printf("请输入一个数\n");
	scanf("%d",&a);
    printf("结果是:%d\n",fib(a));
}