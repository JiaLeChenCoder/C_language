#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��8 ����
//#include<stdio.h>
//int main()
//{
	//����һ һ������ʵ������
	//char arr[100] = { 0 };
	//gets(arr);//�����ַ�����
	//int len = strlen(arr);//strlen���������󳤶�
	//int i = len - 1;
	//int j = 0;
	//int t = 0;
	//while (j < i)
	//{
	//	t = arr[i];
	//	arr[i] = arr[j];
	//	arr[j] = t;
	//	i--;
	//	j++;
	//}
	//puts(arr);
	
	//������ ��������ʵ������
	//char arr1[100] = { 0 };
	//char arr2[100] = { 0 };
	//gets(arr1);
	//int len = strlen(arr1);
	//int i = 0;
	//int j = 0;
	//for (i = len-1; i >=0; i--)//�Ӻ���ǰ
	//{
	//	arr2[j++] = arr1[i];//arr2[j++] Ҳ����д��arr2[j],������һ��j++
	//}
	//arr2[j] = '\0';
	//puts(arr2);
	//return 0;
//}

	//ʵ��9 ָ��  
	// 1.����a,b��ֵ
//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//2.��С���������������
//#include<stdio.h>
//void compare(int* p1, int* p2, int* p3)
//{
//	if (*p1 < *p2)//��p1ָ���ֵС��p2ָ���ֵ���ͽ���
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p1;
//		*p1 = t;
//	}//���ˣ�Ŀǰp1ָ���ֵ�������������һ����ַ��ֵ���
//	if(*p1<*p3)
//	{
//		int t = 0;
//		t = *p3;
//		*p3 = *p1;
//		*p1 = t;
//	}//���ˣ�p1ָ���ֵ���
//	if (*p2 < *p3)
//	{
//		int t = 0;
//		t = *p2;
//		*p2 = *p3;
//		*p3 = t;
//	}//����p2ָ���ֵ�ڶ���p3ָ���ֵ������
//}
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//int c = 0;
//	//scanf("%d,%d,%d", &a, &b, &c);
//	//compare(&a, &b, &c);//�ȽϺ���
//	//printf("%d,%d,%d\n", c, b, a);
//	//return 0;
//	
//	//��һ��д��
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int* p1 = &a, * p2 = &b, * p3 = &c;
//	scanf("%d,%d,%d", p1, p2, p3);
//	compare(p1,p2,p3);//�ȽϺ���
//	printf("%d,%d,%d\n",*p3,*p2,*p1);
//	return 0;
//}

