#include<stdio.h>
////�ݹ�
//int fib(int n)
//{
//if(n<=2)
//	return 1;
//else
//	return fib(n-1)+fib(n-2);
//}
//�ǵݹ�
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
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
	int a = 0;
	printf("������һ����\n");
	scanf("%d",&a);
    printf("�����:%d\n",fib(a));
}