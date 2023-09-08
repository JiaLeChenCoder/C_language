#define  _CRT_SECURE_NO_WARNINGS  1

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m, int k, int xx[])
{
    int i = 0, j = 0, n = 0;
    for (i = m + 1; n < k; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j >= i)
            xx[n++] = i;

    }
}

void main()
{
    int m, n, zz[1000]; void NONO();

    printf("\nPlease enter two integers:");
    scanf("%d%d", &m, &n);
    fun(m, n, zz);
    for (m = 0; m < n; m++)
        printf("%d ", zz[m]);
    printf("\n");
    NONO();
}

void NONO()
{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
    int m, n, zz[1000], i;
    FILE* rf, * wf;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++) {
        fscanf(rf, "%d %d", &m, &n);
        fun(m, n, zz);
        for (m = 0; m < n; m++) fprintf(wf, "%d ", zz[m]);
        fprintf(wf, "\n");
    }
    fclose(rf);
    fclose(wf);
}
