#include<stdio.h>
int main()
{
	int t = 1;
	int n = 1;
	double s = 0;
	while(n < 100)
	{
		s +=t * 1.0 *n / (n+1);
		t = -t;
		n += 2;
	}
	printf("s = %.4lf\n",s);
	return 0;
}