#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define    N   80
//��ѡһ
int  fun(char* s)
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))   /*���һ����ĸ����һ���ַ�Ϊ�ո���߽�����ǣ����ʾһ�����ʽ���*/
			j++;
	return j;           /*���ص��ʸ���*/
}
main()
{
	char  line[N];    int  num = 0; void NONO();
	printf("Enter a string :\n"); gets(line);
	num = fun(line);
	printf("The number of word is  :  %d\n\n", num);
	NONO();
}
void NONO()
{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������������ݣ��ر��ļ��� */
	FILE* rf, * wf; int i, num; char line[N], * p;
	rf = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	for (i = 0; i < 10; i++) {
		fgets(line, N, rf);
		p = strchr(line, '\n');
		if (p != NULL) *p = 0;
		num = fun(line);
		fprintf(wf, "%d\n", num);
	}
	fclose(rf); fclose(wf);
}
