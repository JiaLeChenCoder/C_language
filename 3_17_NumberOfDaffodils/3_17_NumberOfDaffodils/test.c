#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
int main()
{
	int num, sum, digit,n;
	printf("������һ����\n");
	scanf("%d", &num);
	digit = num % 10;//ȡ����λ��
	sum = digit * digit * digit;
	n=num /10;
	digit = n% 10;//ȡ��ʮλ��
	sum += digit * digit * digit;
	n /= 10;
	digit = n % 10;//ȡ����λ��
	sum += digit * digit * digit;
	if (sum == num)
	{
		printf("%d��ˮ�ɻ���\n", num);
	}
	else
	{
		printf("%d����ˮ�ɻ���\n", num);
	}
	return 0;
}