#include<stdio.h>
#include<math.h>
int main()
{
	int n1=0, n10=0, sum = 0;
	for (int i = 10; i <100; i++)
	{
		n1 = i % 10;
		n10 = i / 10;
		if (abs(n1 - n10) == 1)
		{
			sum += i;
		}
	}
	printf("sum=%d\n", sum);
	return 0;
}
