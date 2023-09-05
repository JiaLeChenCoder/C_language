#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define    N   80
//精选一
int  fun(char* s)
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))   /*如果一个字母的下一个字符为空格或者结束标记，则表示一个单词结束*/
			j++;
	return j;           /*返回单词个数*/
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
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
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
