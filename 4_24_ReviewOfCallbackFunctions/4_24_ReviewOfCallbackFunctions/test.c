#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Calc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int r = 0;
	printf("����������������\n");
	scanf("%d %d", &x, &y);
	r = p(x, y);
	printf("%d\n", r);
}
int main()
{
	int input = 0;
	do
	{
		printf("1.�ӣ�2.����3.�ˣ�4.����\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:Calc(Add); break;
			case 2:Calc(Sub); break;
			case 3:Calc(Mul); break;
			case 4:Calc(Div); break;
			case 5:printf("�˳�\n"); return;
			default:printf("�������\n"); break;
			break;
		}
	} while (input);
	return 0;
}