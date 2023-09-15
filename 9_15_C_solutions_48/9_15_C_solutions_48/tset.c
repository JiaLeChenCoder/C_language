#include <stdio.h>
#define max 100

int fun(int xxx[])
{
	int i, j = 0, a, b, c;
	for (i = 0; i < max; i++)
	{
		xxx[i] = 0;
	}
	for (i = 123; i <= 432; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		if (a != b && b != c && a != c && a >= 1 && a <= 4 && b >= 1 && b <= 4 && c >= 1 && c <= 4)
		{
			xxx[j++] = i;
		}
	}
	return j;


}
int main()
{
	int xx[max], cnt;
	void NONO(int xx[], int cnt);

	cnt = fun(xx);
	printf("符合条件的个数=%d\n", cnt);
	NONO(xx, cnt);
	return 0;
}

void NONO(int xx[], int cnt)
{
	int i;
	FILE* fp;

	fp = fopen("out.dat", "w");
	fprintf(fp, "%d\n", cnt);
	for (i = 0; i < cnt; i++)
		fprintf(fp, "%d\n", xx[i]);
	fclose(fp);
}