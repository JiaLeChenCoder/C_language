#include<stdio.h>
#include<string.h>
int main()
{
	int i = 1;
	int j = 0;
	int t = 0;
	int s[10] = { 1,3,5,6,4,2,8,7,9 };
	int len = sizeof(s) / sizeof(s[1]);
	for (i = 0; i < len-1; i++)
	{
		for (j = 1; j < len-i; j++)
		{
			if (s[j-1] > s[j])
			{
				t = s[j-1];
				s[j-1] = s[j];
				s[j] = t;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}