//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = strlen("abcde");
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>
////int my_strlen(const char* arr)
////{
////	int count = 0;
////	while (*arr)
////	{
////		count++;
////		arr++;
////	}
////	return count;
////}
//
////��ʽ�� ��������ʱ����
//int my_strlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(str + 1);
//}
//
////��ʽ�� ָ��-ָ��ķ�ʽ
//int my_strlen3(const char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	//ģ��ʵ��strlen
//	//��ʽһ ��������ʽ
//	char arr[] = {"abcdefg"};
//	/*printf("%d",my_strlen(arr));*/
//	//printf("%d", my_strlen2(arr));
//	printf("%d", my_strlen3(arr));
//	return 0;
//}

////ģ��ʵ��strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy( char* p, const char* s)
//{
//	char* a = p;
//	assert(p && s);
//	while (*p++ = *s++)
//	{
//		;
//	}
//	return a;
//}
//int main()
//{
//	char arr1[] = { "abcd" };
//	char arr2[] = { "abqe" };
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//ģ��ʵ��strcmp
#include<stdio.h>
int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[] = { "abcde" };
	char arr2[] = { "baaaa" };
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}