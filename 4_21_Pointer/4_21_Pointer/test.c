#include<stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
void print1(int** p)
{
	printf("num=%d", **p);
}
void test()
{
	printf("���");
}

typedef void(*a_a)(int);
int main()
{
	/*int arr[9] = { 1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	//һ��ָ�봫��
	//print(p, sz);
	// 
	//����ָ�봫��
	//int a = 10;
	//int* p = &a;
	//int** pp = &p;
	//print1(pp);
	//return 0;

	//����ָ�루ָ������ָ�룩
	printf("%p\n", print1);
	printf("%p\n",&print1);//��������&���������Ǻ����ĵ�ַ

	(*(void(*)())0)();//��0ǿתΪvoid(*)���͵ĺ���ָ�룬����0��ַ������һ������������û�в���
	                   //����������Ϊ�գ����ǵ���0��ַ���ĺ���
	void(*A(int, void(*)(int)))(int);
	a_a A(int,a_a);
	//A�����Ĳ�����һ����int���ͣ��ڶ���������void(*)(int)���͵ĺ���ָ�룬A�����ķ�������Ҳ��һ������ָ�롣
	//�˺���ָ��ָ��ĺ���������int�����������ǿ�
	
}


