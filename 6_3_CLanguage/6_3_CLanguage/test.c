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


//交换两个整数的值
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

//求一个整数中二进制补码中1的个数
//unsigned 解决负数问题
//改num值
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

//不改num值
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

//提高效率
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

//打印一个数的整数位和奇数位
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//偶数位
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//求两个整数的二进制序列中有多少bit位不同
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d,%d", &m, &n);
	//一种方法
	/*for (int i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
			count++;
	}*/

	//异或方法
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
//	printf("请输入一个数\n");
//	scanf("%d",&a);
//	a = a & (a - 1);
//	if(a== 0)
//	{
//		printf("是二的幂次方");
//	}
//	else
//		printf("不是二的幂次方");
//
//	return 0;
//}


//int main() {
//	    int n = 0;
//	    int m = 0;
//	    //输入
//	    scanf("%d %d", &n, &m);
//	    //支持变长数组的
//	    int arr1[n];
//	    int arr2[m];
//	    int arr3[n + m];
//	    //输入arr1
//	    int i = 0;
//	    for (i = 0; i < n; i++)
//	    {
//	        scanf("%d", &arr1[i]);
//	    }
//	    //输入arr2
//	    for (i = 0; i < m; i++)
//	    {
//	        scanf("%d", &arr2[i]);
//	    }
//	    //合并arr1和arr2到arr3数组中
//	    i = 0;//i遍历arr1
//	    int j = 0;//j遍历arr2
//	    int k = 0;//k遍历arr3
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
//	    //打印
//	    for (k = 0; k < m + n; k++)
//	    {
//	        printf("%d ", arr3[k]);
//	    }
//	    return 0;
//	}