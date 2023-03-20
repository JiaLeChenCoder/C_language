#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
	char* t = dst;
	assert(dst && src);//断言，防止空指针
	while (*t++ = *src++)//把src指向的字符串拷贝到c指向的数组空间，包括、0字符
		;
	return dst;
}
int main()
{
	//模拟实现库函数：strcpy
	char a[] = "abc";
	char b[] = "qwe";
	my_strcpy(a, b);
	printf("%s", a);
	return 0;
}