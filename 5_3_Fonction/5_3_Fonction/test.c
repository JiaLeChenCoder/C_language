#define  _CRT_SECURE_NO_WARNINGS 1
//����
//1.
//#include <stdio.h>
//int main() {
//	int x = 2, y = 5;
//	void swap(int, int);
//	printf("���ú���ǰ x=%d,y=%d\n", x, y);
//	swap(x, y);
//	printf("���ú����� x=%d,y=%d\n", x, y);
//	return 0;
//}
//void swap(int a, int b) {
//	int t;
//	t = a; a = b; b = t;
//	printf("������ a,b ֵ������a=%d,b=%d\n", a, b);
//}

//2.
//#include <stdio.h>
//void f() {
//	auto int j = 0;//��� 1 1 1
//	//static int j = 0;//��� 1 2 3
//	j++;
//	printf("%d\n", j);
//}
//int main() {
//	int i;
//	for (i = 1; i <= 3; i++)
//		f();
//	return 0;
//}

//3.
#include <stdio.h>
int main()
{
	int a, b;
	void f1();
	printf("input a,b:\n");
	scanf("%d,%d", &a, &b);
	f1(a, b);
	printf("a=%d,b=%d", a, b);
	return 0;
}
void f1(a, b)
{
	int t = 2;
	a *= t;
	b /= t;
}

//4.��η�
//#include<stdio.h>
//#include<math.h>
//double power(int n,double x)
//{
//	int m;
//	m = pow(x, n);
//	return m;
//}
//int main()
//{
//	double x, y;
//	int n;
//	printf("������x��n\n");
//	scanf("%lf,%d",&x, &n);
//	y = power(n,x);
//	printf("%.4f", y);
//	return 0;
//}
