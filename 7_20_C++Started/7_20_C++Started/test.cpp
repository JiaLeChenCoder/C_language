#include <iostream>
using namespace std;
//int main()
//{
//	int a;
//	double b;
//	char c;
//	// 可以自动识别变量的类型
//	cin >> a>>b>>c;
//	cout << a << endl;
//	cout << b << "  " << c << endl;
//	return 0;
//}

//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();     // 没有传参时，使用参数的默认值
//	Func(10);   // 传参时，使用指定的实参
//	Func(1, 2);
//	//Func(1, ,2)这种不支持
//	return 0;
//}

//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}

//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 0, char b = 1)
//{
//	cout << "f(int a,char b)" << endl;
//}

//int f(int a, int b)
//{
//	cout << "f(int a,char b)" << endl;
//	return 0;
//}
//
//char f(int b, int a)
//{
//	cout << "f(int a,char b)" << endl;
//	return 'A';
//}



//void Test()
//{
//	int a = 10;
//	int& ra = a;//定义引用类型
//	printf("%p\n", &a);
//	printf("%p\n", &ra);
//}

//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap(a, b);
//	cout << a << endl;
//	return 0;
//
//	//double d = 11.13;
//	//cout << (int)d << endl;//输出临时变量
//	//return 0;
//	//Test();
//	/*f(1, 1);
//	f(2, 2);
//	return 0;*/
//	//Add(100, 220);
//	//Add(12.1, 22.2);
//	//f();
//	//f(100);
//	/*f(100, 'a');
//	f('a', 100);*/
//	/*f(10);
//	f(10, 20);
//	f();*/
//}

//int Count1()
//{
//	int n = 0;
//	cout << &n << endl;
//	n++;
//	// ...
//	return n;
//}
//
//int& Count2()
//{
//	int n = 0;
//	cout << &n << endl;
//	n++;
//	// ...
//	return n;
//}
//
//int main()
//{
//	int ret1 = Count1();
//	int ret2 = Count2();
//	cout << ret1 << endl;
//	cout << ret2 << endl;
//	return 0;
//}


//#include <time.h>
//struct A { int a[10000]; };
//A a;
//// 值返回
//A TestFunc1() { return a; }
//// 引用返回
//A& TestFunc2() { return a; }
//void Test()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
int main()
{
	//Test();
		int a = 10;
		int& ra = a;
		ra = 20;
		int* pa = &a;
		*pa = 20;
		return 0;
}