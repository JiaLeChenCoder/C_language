#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//精选10
void fun(char* str)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != ' ')  /*只保留非空格的字符，相当于删除空格*/
            str[j++] = str[i];
    str[j] = '\0';  /*字符串末尾加上结束符*/
}

main()
{
    char str[81]; void NONO();

    printf("Input a string:");
    gets(str);
    puts(str);
    fun(str);
    printf("*** str: %s\n", str);
    NONO();
}

void NONO()
{
    /* 请在此函数内打开文件，输入调试数据，调用 fun 函数，
       输出数据，关闭文件。 */
    char str[81];
    int n = 0;
    FILE* rf, * wf;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    while (n < 10) {
        fgets(str, 80, rf);
        fun(str);
        fprintf(wf, "%s", str);
        n++;
    }
    fclose(rf);
    fclose(wf);
}
