#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
void fun(int array[3][3])
{
    int i, j,t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            t = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = t;
        }
    }
}

main()
{
    int i, j; void NONO();
    int array[3][3] = { {100,200,300},
                    {400,500,600},
                    {700,800,900} };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%7d", array[i][j]);
        printf("\n");
    }
    fun(array);
    printf("Converted array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%7d", array[i][j]);
        printf("\n");
    }
    NONO();
}

void NONO()
{
    /* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
    int i, j, array[3][3];
    FILE* rf, * wf;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            fscanf(rf, "%d", &array[i][j]);
    fun(array);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            fprintf(wf, "%7d", array[i][j]);
        fprintf(wf, "\n");
    }
    fclose(rf);
    fclose(wf);
}
