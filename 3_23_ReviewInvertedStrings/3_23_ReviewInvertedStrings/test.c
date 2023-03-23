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
	//倒置字符串，将一句话的单词倒置，标点符号不倒置，比如Hello world!变成world! Hello
	char arr[101] = { 0 };
	gets(arr);
	int len=strlen(arr);
	reverse(arr, arr + len - 1);
	//将每个单词进行逆序
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