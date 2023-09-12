#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define   N    80
void fun(char* w, int  m)
{
    int i, j;
    char t;
    for (i = 0; i < m; i++)
    {
        t = w[0];
        for (j = 1; w[j] != '\0'; j++)
        {
            w[j - 1] = w[j];
        }
        w[j - 1] = t;
    }
}

void main()
{
    char  a[N] = "ABCDEFGHIJK";
    int  m; void NONO();
    printf("The original string:\n"); puts(a);
    printf("\n\nEnter  m:  "); scanf("%d", &m);
    fun(a, m);
    printf("\nThe string after moving:\n"); puts(a);
    printf("\n\n");
    NONO();
}
void NONO()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
    FILE* rf, * wf; char a[N]; int m, i;
    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++) {
        fscanf(rf, "%d %s", &m, a);
        fun(a, m);
        fprintf(wf, "%s\n", a);
    }
    fclose(rf); fclose(wf);
}