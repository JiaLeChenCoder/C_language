#include <stdio.h>
//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//问题1：在屏幕上打印一个单引号'，怎么做？
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", sizeof("abcdef"));
//	// \62被解析成一个转义字符
//
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}

//代码1
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//代码2
//#include <stdio.h>
//void test()
//{
//	//static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//代码1


//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
////代码2
////add.c
//static int g_val = 2018;
////test.c
//#include"add.c"
//extern g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

////define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	&num;//取出num的地址
//	//注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//	printf("%p\n", &num);//打印地址，%p是以地址的形式打印
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

int main()
{
	int a = 1;
	double s = 2.1;
	s = a;
	printf("%f", s);
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/
	return 0;
}