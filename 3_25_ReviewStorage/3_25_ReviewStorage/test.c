#include<stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	if (check_sys() == 1)
		printf("是小端\n");
	else
		printf("是大端\n");
	return 0;
}