#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* fun(char(*a)[81], int num, char* max)
{
    int i;
    max = a[0];
    for (i = 1; i < num; i++)         /*找出最长的一个字符串*/
        if (strlen(max) < strlen(a[i]))
            max = a[i];
    return max;                /*传回最长字符串的地址*/
}
void main()
{
    FILE* wf;
    char ss[10][81], * ps = NULL;
    char s[3][81] = { "abcd","deg","diegns" }, * p = NULL;
    int  i = 0, n;
    system("CLS");
    printf("输入若干个字符串：");
    gets(ss[i]);
    puts(ss[i]);
    while (!strcmp(ss[i], "****") == 0)  /*用4个星号作为结束输入的标志*/
    {
        i++;
        gets(ss[i]);
        puts(ss[i]);
    }
    n = i;
    ps = fun(ss, n, ps);
    printf("\nmax=%s\n", ps);
    /******************************/
    wf = fopen("out.dat", "w");
    p = fun(s, 3, p);
    fprintf(wf, "%s", p);
    fclose(wf);
    /*****************************/
}
