#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef struct s
//{
//	char sex;
//	char name[10];
//	//int age;
//	int arr[100];
//}s;
//void print(struct s* s1)
//{
//	printf("%s %c", s1->name, s1->sex);
//}
//
//void print1(s ss)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",ss.arr[i]);
//	}
//	printf("\n%c\n", ss.sex);
//}
//
//void print2(s* ss)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ss->arr[i]);
//	}
//	printf("\n%c\n", ss->sex);
//}
//int main()
//{
//	/*s s1 = { 'n',"chenjiale",18 };
//	s s2 = { .age = 19,.name = "lisi",.sex = 'z' };
//	printf("%d %c %s\n", s1.age, s1.sex, s1.name);
//	printf("%d %c %s\n", s2.age, s2.sex, s2.name);*/
//
//	/*print(&s1);*/
//	s s3 = { 'n',"cjl",{1,2,3,4,5,6},};
//	print1(s3);
//	print2(&s3);
//	return 0;
//}


//��������������ֵ
//int main()
//{
//	int a = 3;
//	int b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//��һ�������ж����Ʋ�����1�ĸ���
//unsigned �����������
//��numֵ
int count_one_bit(unsigned num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num /= 2;
	}
	return count;
}

//����numֵ
//int count_one_bit1(unsigned num)
//{
//	int count = 0;
//	for(int i=0;i<32;i++)
//	{
//		if (((num >> i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//���Ч��
//int count_one_bit2(unsigned num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", count_one_bit2(num));
//	return 0;
//}

//��ӡһ����������λ������λ
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//ż��λ
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	//����λ
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//�����������Ķ������������ж���bitλ��ͬ
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d,%d", &m, &n);
	//һ�ַ���
	/*for (int i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
			count++;
	}*/

	//��򷽷�
	/*int ret = m ^ n;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	printf("%d", count);
	return 0;*/
//}

//int main()
//{
//	int a = 0;
//	printf("������һ����\n");
//	scanf("%d",&a);
//	a = a & (a - 1);
//	if(a== 0)
//	{
//		printf("�Ƕ����ݴη�");
//	}
//	else
//		printf("���Ƕ����ݴη�");
//
//	return 0;
//}


//int main() {
//	    int n = 0;
//	    int m = 0;
//	    //����
//	    scanf("%d %d", &n, &m);
//	    //֧�ֱ䳤�����
//	    int arr1[n];
//	    int arr2[m];
//	    int arr3[n + m];
//	    //����arr1
//	    int i = 0;
//	    for (i = 0; i < n; i++)
//	    {
//	        scanf("%d", &arr1[i]);
//	    }
//	    //����arr2
//	    for (i = 0; i < m; i++)
//	    {
//	        scanf("%d", &arr2[i]);
//	    }
//	    //�ϲ�arr1��arr2��arr3������
//	    i = 0;//i����arr1
//	    int j = 0;//j����arr2
//	    int k = 0;//k����arr3
//	    while (i < n && j < m)
//	    {
//	        if (arr1[i] < arr2[j])
//	        {
//	            arr3[k] = arr1[i];
//	            i++;
//	            k++;
//	        }
//	        else
//	        {
//	            arr3[k] = arr2[j];
//	            j++;
//	            k++;
//	        }
//	    }
//	    if (i == n)
//	    {
//	        for (; j < m; j++)
//	        {
//	            arr3[k] = arr2[j];
//	            k++;
//	        }
//	    }
//	    if (j == m)
//	    {
//	        for (; i < n; i++)
//	        {
//	            arr3[k] = arr1[i];
//	            k++;
//	        }
//	    }
//	    //��ӡ
//	    for (k = 0; k < m + n; k++)
//	    {
//	        printf("%d ", arr3[k]);
//	    }
//	    return 0;
//	}