#include<stdio.h>
#include<stdlib.h>
//void test()
//{
//	int* p = (int)malloc(4);
//	*p = 20;//���p��ֵ��NULL�����������
//	free(p);
//}

//void test1()
//{
//	int i = 0;
//	int* p = (int)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		return;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}
//
//void test2()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
//
//void test3()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}

//void test4()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	//p = NULL;//�Ӵ�����ȷ
//	free(p);//�ظ��ͷ�
//}

void test5()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}

int main()
{
	//void test();////��NULLָ��Ľ����ò���
	//void test1();//�Զ�̬���ٿռ��Խ�����
	//void test2();//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//void test3();//ʹ��free�ͷ�һ�鶯̬�ڴ��һ����
	//void test4();//��ͬһ�鶯̬�ڴ����ͷ�
	void test5(); //��̬�����ڴ������ͷţ��ڴ�й©
	while (1);//�Ҳ���p���޷��ͷţ��ڴ�й©
}