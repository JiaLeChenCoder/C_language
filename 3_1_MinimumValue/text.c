#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int min = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	if (c < min)
	{
		min = c;
	}
	printf("min=%d\n", min);
	return 0;
}