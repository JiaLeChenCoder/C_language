#include <stdio.h>
#include <string.h>
void NONO();

int fun(int a[], int n)
{
	int j, k, s, m, b[10], i = 0, sum = 0, flag = 0;
	for (; i < n; i++)
	{
		j = 0;
		while (a[i])
		{
			b[j++] = a[i] % 10;
			a[i] = a[i] / 10;
		}

		for (k = 0; k < j; k++)
		{
			s = b[k];
			for (m = k + 1; m < j; m++)
				if (s == b[m]) flag = 1;
		}
		if (flag == 1)
		{
			sum++;
			flag = 0;
		}
	}
	return sum;
}


void main()
{
	int a[10] = { 2430,3001,1798,199,498,277,229,851,369,1146 };
	int m;

	m = fun(a, 10);
	printf("符合条件的数共有：%d\n", m);
	NONO();
	getch();
}

void NONO()
{
	FILE* fp = fopen("in.dat", "r");
	FILE* fw = fopen("out.dat", "w");
	int a[5000];
	int cnt = 0, m;

	while (!feof(fp)) fscanf(fp, "%d", &a[cnt++]);
	m = fun(a, cnt);
	fprintf(fw, "%d\n", m);
	fclose(fp); fclose(fw);
}
