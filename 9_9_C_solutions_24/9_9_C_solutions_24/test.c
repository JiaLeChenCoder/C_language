#include  <stdio.h>
void NONO();
int fun(char* s)
{
	int i, n = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= '0' && s[i] <= '9')
			n++;
	return n;
}

void main()
{
	char* s = "2def35adh25  3kjsdf 7/kj8655x";
	printf("%s\n", s);
	printf("%d\n", fun(s));
	NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	FILE* fp, * wf;
	int i;
	char s[256];

	fp = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	for (i = 0; i < 10; i++) {
		fgets(s, 255, fp);
		fprintf(wf, "%d\n", fun(s));
	}
	fclose(fp);
	fclose(wf);
}

