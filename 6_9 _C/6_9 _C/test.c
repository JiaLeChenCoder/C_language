#include <stdio.h>
#define N 6
void main()
{
	int i, j;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
			if (i > j)			
				printf("0");
			else
				printf("1");	
		printf("\n");			
	}
}