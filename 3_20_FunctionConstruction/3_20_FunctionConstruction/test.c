#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
	char* t = dst;
	assert(dst && src);//���ԣ���ֹ��ָ��
	while (*t++ = *src++)//��srcָ����ַ���������cָ�������ռ䣬������0�ַ�
		;
	return dst;
}
int main()
{
	//ģ��ʵ�ֿ⺯����strcpy
	char a[] = "abc";
	char b[] = "qwe";
	my_strcpy(a, b);
	printf("%s", a);
	return 0;
}