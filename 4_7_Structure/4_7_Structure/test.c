#include<stdio.h>
//����һ��ѧ��
	//struct stu
	//{
	//	char name[20];//����
	//	int age;
	//	char sex[5];//�Ա�
	//};
	//�����ṹ��
	/*struct
	{
		int a;
		char b;
		float c;
	}s;*/

	//struct
	//{
	//	int a;
	//	char b;
	//	float c;
	//}b[20],*p;
	//p = &s;//��*��*�����Ͳ�����

	//�ṹ���������
	//struct Node
	//{
	//	int data;
	//	struct Node*  next;//struct Node  next;����
	//};
	//return 0;

	//�ṹ������Ķ���ͳ�ʼ��
	//struct stu
	//{
	//	int x;
	//	int y;
	//}s1;//����������ͬʱ�������s1
	//struct stu s2;//����ṹ�����s2
	//��ʼ�������������ͬʱΪ�丳��ֵ
	/*struct stu
	{
		char name[10];
		int age;
	}s1={ "����",20 };
	printf("%s %d", s1.name, s1.age);*/

	//�ṹ���ڴ����
struct s2
{
	char c;
	char c1;
	int a;
};
int main()
{
	printf("%d", sizeof(struct s2));
}