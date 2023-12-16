#include<stdio.h>
int main()
{
	short i = 5;
	short j = 0;
	j = i << 1;
	printf("j=%d\n",j);
	j = i >> 1;
	printf("j=%d\n", j);
	return 0;
}