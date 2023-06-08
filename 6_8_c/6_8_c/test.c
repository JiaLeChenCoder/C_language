#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i = 1, n = 0;
	double s = 1;
	printf("ÇëÊäÈëÕûÊın: \n");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		s *= (2.0 * i / (2 * i - 1)) * (2.0 * i/(2 * i + 1));
	}
	printf("s=%.4lf\n", s);
	return 0;
}