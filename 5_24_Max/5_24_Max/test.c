#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	//��Ԫ�ظ����ķ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)//����ֱ�Ӱ�sz����10
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];//���if{}��ֻ��һ����䣬{}��ʡ��
			j = i;
		}
	}
	printf("%d��λ����%d", max, j);
	return 0;
}