#include<stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	if (check_sys() == 1)
		printf("���\n");
	else
		printf("С��\n");
	return 0;
}