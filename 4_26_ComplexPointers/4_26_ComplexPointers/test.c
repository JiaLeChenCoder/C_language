#include<stdio.h>
void test(const char* str)
{
	printf("%s\n", str);
}
int main()
{
	//����ָ��pfun
	void (*pfun)(const char*) = test;
	//����ָ�������pfunarr
	void (*pfunarr[6])(const char* str);
	pfunarr[0] = test;
	//ָ����ָ������pfunarr��ָ��ppfunarr
	void (*(*ppfunarr)[6])(const char*) = &pfunarr;
	return 0;
}