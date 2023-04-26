#include<stdio.h>
void test(const char* str)
{
	printf("%s\n", str);
}
int main()
{
	//函数指针pfun
	void (*pfun)(const char*) = test;
	//函数指针的数组pfunarr
	void (*pfunarr[6])(const char* str);
	pfunarr[0] = test;
	//指向函数指针数组pfunarr的指针ppfunarr
	void (*(*ppfunarr)[6])(const char*) = &pfunarr;
	return 0;
}