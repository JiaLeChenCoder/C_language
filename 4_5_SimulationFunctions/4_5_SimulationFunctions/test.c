//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* c = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return c;
//}
//int main()
//{
//	char arr1[20] = { "asdfg" };
//	char arr2[] = { "zxcvbn" };
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}

//#include<stdio.h>
//char* my_strstr(const char* str1,const char* str2)
//{
//	char* s1,*s2;
//	char* ch = (char*)str1;
//	while (*ch)
//	{
//		s1 = ch;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return ch;
//		ch++;
//	}
//	return (NULL);
//}
//int main()
//{
//	char arr1[] = { "abccdef" };
//	char arr2[] = { "cde" };
//	printf("%s", my_strstr(arr1, arr2));
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* dst, const void* src, size_t count)
//{
//	void* r = dst;
//	assert(dst && src);
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return r;
//}
//int main()
//{
//	//模拟实现memcpy
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 7,8,9,10,11,12 };
//	my_memcpy(arr1, arr2, 8);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* r = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前到后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后到前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return r;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6};
	my_memmove(arr + 1, arr, 8);
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}