#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//double Pow(int n,int k)
//{
//	if (k < 0)
//		return(1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	//编写一个函数实现n的k次方，使用递归实现。
//	int n = 1;
//	int k = 1;
//	double value = 0.0;
//	scanf("%d%d",&n,&k);
//	value=Pow(n,k);
//	printf("%.2lf",value);
//	return 0;
//}
//
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
// 
//	{	
//		return DigitSum(n / 10)+n % 10;
//	}
//	else
//	{
//		return n;
//	}
//
//}
//int main()
//{
//	//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//    //例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//    //输入：1729，输出：19
//	int n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	printf("%d",DigitSum(n));
//}


//#include<stdio.h>
//void reverse_string(char  *str) { 
//	if (*str != '\0') {
//		str++;
//		reverse_string(str);
//		printf("%c", *(str - 1));
//	}
//}
//
//int main()
//{
//	 /*编写一个函数 reverse_string(char * string)（递归实现）
//		实现：将参数字符串中的字符反向排列，不是逆序打印。
//		要求：不能使用C函数库中的字符串操作函数。
//		比如:
//		char arr[] = "abcdef";
//		逆序之后数组的内容变成：fedcba*/
//	char ch[] = "abcdef";
//	printf("%s\n", ch);
//	reverse_string(ch);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int strlen(char *str)
//{
//	if(*str=='\0')
//		return 0;
//	else
//		return 1+strlen(str+1);
//
//}
//int main()
//{
//////递归和非递归分别实现strlen
//////递归
////	char *p="abcde";
////	int len=strlen(p);
////	printf("%d",len);
////	return 0;
//
////非递归
//char *p="abcde";
//int len=strlen(p);
//	printf("%d",len);
//
//}

//#include<stdio.h>
//int F(int n)
//{
//	if(n<1)
//		return 1;
//	else
//		return n*F(n-1);
//}
//int main()
//{
//	//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//	//递归
//	/*int n = 0;
//	scanf("%d",&n);
//	printf("%d",F(n));
//	return 0;*/
	//非递归
//	int n = 0;
//	int i = 1; 
//	int a = 1;
//	scanf("%d",&n);
//	for(i = 1 ;i <= n ; i++)
//	{
//		a *= i;
//	}
//	printf("%d\n",a);
//}


//#include<stdio.h>
//int A(int num)
//{
//	if(num>9)
//	{
//		A(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main()
//{
//	////递归方式实现打印一个整数的每一位
//	int num = 0;
//	scanf("%d",&num);
//	A(num);
//}

