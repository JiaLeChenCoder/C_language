#include <stdio.h>
//������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
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
//	//����1������Ļ�ϴ�ӡһ��������'����ô����
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", sizeof("abcdef"));
//	// \62��������һ��ת���ַ�
//
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}

//����1
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
//����2
//#include <stdio.h>
//void test()
//{
//	//static���ξֲ�����
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

//����1


//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
////����2
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

////define�����ʶ������
//#define MAX 1000
////define�����
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
//	&num;//ȡ��num�ĵ�ַ
//	//ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//	printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
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