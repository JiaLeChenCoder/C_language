#include <stdio.h>
void  fun(int x, int  pp[], int* n)
{
	int i, j = 0;
	for (i = 1; i <= x; i = i + 2) /*i�ĳ�ʼֵΪ1������Ϊ2��ȷ��iΪ����*/
		if (x % i == 0) /*��������x������������pp��*/
			pp[j++] = i;
	*n = j; /*�����������������ĸ���*/
}

main()
{
	int  x, aa[1000], n, i; void NONO();
	printf("\nPlease enter an integer number:\n"); scanf("%d", &x);
	fun(x, aa, &n);
	for (i = 0; i < n; i++)
		printf("%d ", aa[i]);
	printf("\n");
	NONO();
}

void NONO()
{/* ���������ڴ��ļ�������������ݣ�����fun������������ݣ��ر��ļ���*/
	int x, aa[1000], n, i, j;
	FILE* fp;
	fp = fopen("out.dat", "w");
	for (j = 0; j < 10; j++) {
		x = 30 + j;
		fun(x, aa, &n);
		for (i = 0; i < n; i++) fprintf(fp, "%d ", aa[i]);
		fprintf(fp, "\n");
	}
	fclose(fp);
}