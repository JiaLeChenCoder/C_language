#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void fun(char* ss)
{
    int i;
    for (i = 0; ss[i] != '\0'; i++) /*��ss��ָ�ַ����������±�Ϊ����λ�õ���ĸת��Ϊ��д*/
        if (i % 2 == 1 && ss[i] >= 'a' && ss[i] <= 'z')
            ss[i] = ss[i] - 32;
}

void main(void)
{
    char tt[51]; void NONO();
    printf("\nPlease enter an character string within 50 characters:\n");
    gets(tt);
    printf("\n\nAfter changing, the string\n  \"%s\"", tt);
    fun(tt);
    printf("\nbecomes\n  \"%s\"", tt);
    NONO();
}

void NONO()
{
    /* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
       ������ݣ��ر��ļ��� */
    char tt[51], ch;
    FILE* rf, * wf;
    int len, i = 0;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    while (i < 10) {
        fgets(tt, 50, rf);
        len = strlen(tt) - 1;
        ch = tt[len];
        if (ch == '\n' || ch == 0x1a) tt[len] = 0;
        fun(tt);
        fprintf(wf, "%s\n", tt);
        i++;
    }
    fclose(rf);
    fclose(wf);
}