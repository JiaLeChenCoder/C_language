#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define MAX 100

int fun(int lim, int aa[MAX])
{
	int i, j, k = 0;
	for (i = 2; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j >= i)
				aa[k++] = i;
		}
	}
	return k;
}

main()
{
	int limit, i, sum; void NONO();
	int aa[MAX];
	printf("����һ��������");
	scanf("%d", &limit);
	sum = fun(limit, aa);
	for (i = 0; i < sum; i++) {
		if (i % 10 == 0 && i != 0) printf("\n");
		printf("%5d", aa[i]);
	}
	NONO();
}

void NONO()
{
	/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
		������ݣ��ر��ļ��� */
	FILE* rf, * wf;
	int limit, i, sum, aa[MAX];

	rf = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	fscanf(rf, "%d", &limit);
	sum = fun(limit, aa);
	for (i = 0; i < sum; i++) fprintf(wf, "%d\n", aa[i]);
	fclose(rf);
	fclose(wf);
}