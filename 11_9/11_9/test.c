#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct str
{
	long s;
	char sex[10];
	char name[10];
}s;
int main()
{
	s s1;
	scanf("%ld%s%s", &s1.s, &s1.name, &s1.sex);
	printf("%ld %s %s", s1.s, s1.name, s1.sex);
	return 0;
}