#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int num, sum, digit,n;
	printf("请输入一个数\n");
	scanf("%d", &num);
	digit = num % 10;//取出个位数
	sum = digit * digit * digit;
	n=num /10;
	digit = n% 10;//取出十位数
	sum += digit * digit * digit;
	n /= 10;
	digit = n % 10;//取出百位数
	sum += digit * digit * digit;
	if (sum == num)
	{
		printf("%d是水仙花数\n", num);
	}
	else
	{
		printf("%d不是水仙花数\n", num);
	}
	return 0;
}