#include<stdio.h>
#include<assert.h>
void reverse(char* lef, char* right)
{
	assert(lef && right);
	while (lef < right)
	{
		char temp = *lef;
		*lef = *right;
		*right = temp;
		lef++;
		right--;
	}
}
int main()
{
	//�����ַ�������һ�仰�ĵ��ʵ��ã������Ų����ã�����Hello world!���world! Hello
	char arr[101] = { 0 };
	gets(arr);
	int len=strlen(arr);
	reverse(arr, arr + len - 1);
	//��ÿ�����ʽ�������
	char* c = arr;
	while (*c)
	{
		char* str = c;
		while(*c != ' '&&*c != '\0')
		{
			c++;
		}
		reverse(str, c - 1);
		if (c != '\0')
			c++;
	}
	printf("%s", arr);
	return 0;
}