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
//	//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//	//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//    //���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//    //���룺1729�������19
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
//	 /*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//		ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//		Ҫ�󣺲���ʹ��C�������е��ַ�������������
//		����:
//		char arr[] = "abcdef";
//		����֮����������ݱ�ɣ�fedcba*/
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
//////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//////�ݹ�
////	char *p="abcde";
////	int len=strlen(p);
////	printf("%d",len);
////	return 0;
//
////�ǵݹ�
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
//	//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//	//�ݹ�
//	/*int n = 0;
//	scanf("%d",&n);
//	printf("%d",F(n));
//	return 0;*/
	//�ǵݹ�
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
//	////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//	int num = 0;
//	scanf("%d",&num);
//	A(num);
//}

