//#include<stdio.h>
//void BubblingSorting(int *arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = 0;
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	return 0;
//}
//void offset(int *arr, int  sz, int *num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz;i++ )
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i ++;
//		}
//		else
//		{
//			num[j] = arr[i];
//			j++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num[2] = { 0 };
//	BubblingSorting(arr,sz);
//	offset(arr, sz, num);
//	int sz1 = sizeof(num) / sizeof(num[0]);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//ģ��ʵ��strncpy
//#include<assert.h>
//#include<stdio.h>
//char*  my_strncpy(char* arr, const char* arr1, int num)
//{
//	assert(arr && arr1);
//	char* dest = arr;
//	while (num--)
//	{
//		*arr++ = *arr1++;
//	}
//	return dest;
//}
//int main()
//{
//	char arr[] = { "abcde" };
//	char arr1[] = { "hij" };
//	my_strncpy(arr,arr1,3);
//	printf("%s",arr);
//	return 0;
//}

////ģ��ʵ��strncat
//#include<assert.h>
//#include<stdio.h>
//char* my_strncat( char* arr,const  char* arr1, int num)
//{
//	assert(arr && arr1);
//	char* dest = arr;
//	while (*arr)
//	{
//		arr++;
//	}
//	while (num--)
//	{
//		*arr++ = *arr1++;
//	}
//	*arr  = '\0';
//	return dest;
//}
//int main()
//{
//	char arr[] = { "hello " };
//	char arr1[] = { "world!" };
//	my_strncat(arr,arr1,6);
//	printf("%s",arr);
//	return 0;
//}


//atoi    ��һ���ַ���ת��Ϊһ������
#include<stdio.h>
#include<assert.h>
#include<limits.h>
#include<ctype.h>
enum state
{
	Value,
	ErrValue
};
 enum  state date = ErrValue;
 int my_atoi(const char* str)
 {
	 assert(str);
	 char* p = str;
	 long long n = 0; //����һ��ֵ�����д��ת��֮���ֵ����ֹת��֮���ֵ���
	 int flag = 1;//����
	 //�ַ�������Ϊ0
	 if (*str == '\0')
	 {
		 return 0;
	 }
	 //�ַ���ǰ���кܶ�ո�
	 while (*p == ' ')
	 {
		 p++;
	 }
	 //�жϷ���
	 if (*p == '+')
	 {
		 flag = 1;
		 p++;
	 }
	 else if (*p == '-')
	 {
		 flag = -1;
		 p++;
	 }
	 //��ʼ����
	 while (*p != '\0')
	 {
		 if (isdigit(*p))//isdigit�����������ж��Ƿ�Ϊ10���Ƶ�����
		 {
			 n = n * 10 + flag * (*p - '0');
			 if (n > INT_MAX)//��ʹ��INT_MAX��INT_MINʱ����Ҫ #include<limits.h>;
			 {
				 n = INT_MAX;
				 break;
			 }
			 else if (n < INT_MIN)//INT_MAXΪ 2 ^ 31 - 1 ���� 2147483647;INT_MINΪ - 2 ^ 31, �� 2147483648;
			 {
				 n = INT_MIN;
				 break;
			 }
		 }
		 else
		 {
			 break;
		 }
		 p++;
	 }
	 if (*p == '\0')
	 {
		 date = Value;
	 }
	 return (int)n;
 }
 /*
 ���������
 1.ǰ����һ���ո�
 2.�������ǿ�ָ��
 3.�ַ�������Ϊ0
 4.�������
 5.���������ַ�
 */
int main()
{
	char arr[] = "123456";
	int m = my_atoi(arr);
	if (date == Value)
	{
		printf("%d\n", m);
	}
	if (date == ErrValue)
	{
		printf("�Ƿ�ת��\n");
	}
	return 0;
}