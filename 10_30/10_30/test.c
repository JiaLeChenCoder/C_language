#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void change(int* i)
//{
//	*i = *i / 2;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	change(&i);
//	printf("%d", i);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char c;
	scanf("%d", &i);
	char* p = (char*)malloc(i);
	scanf("%c", &c);
	fgets(p, i, stdin);
	puts(p);
	return 0;
}