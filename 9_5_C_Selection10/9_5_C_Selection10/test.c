#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��ѡ10
void fun(char* str)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != ' ')  /*ֻ�����ǿո���ַ����൱��ɾ���ո�*/
            str[j++] = str[i];
    str[j] = '\0';  /*�ַ���ĩβ���Ͻ�����*/
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
    /* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
       ������ݣ��ر��ļ��� */
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
