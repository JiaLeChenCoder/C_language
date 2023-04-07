#include<stdio.h>
//描述一个学生
	//struct stu
	//{
	//	char name[20];//名字
	//	int age;
	//	char sex[5];//性别
	//};
	//匿名结构体
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
	//p = &s;//从*到*的类型不兼容

	//结构体的自引用
	//struct Node
	//{
	//	int data;
	//	struct Node*  next;//struct Node  next;错误
	//};
	//return 0;

	//结构体变量的定义和初始化
	//struct stu
	//{
	//	int x;
	//	int y;
	//}s1;//声明变量的同时定义变量s1
	//struct stu s2;//定义结构体变量s2
	//初始化：定义变量的同时为其赋初值
	/*struct stu
	{
		char name[10];
		int age;
	}s1={ "张三",20 };
	printf("%s %d", s1.name, s1.age);*/

	//结构体内存对齐
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