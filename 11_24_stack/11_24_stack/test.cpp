#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
#define Maxsize 50
typedef struct {
	ElemType data[Maxsize];
	int top;
}Sqstack;

void Initsrack(Sqstack& s)
{
	s.top = -1;
}

bool stackEmpty(Sqstack s)
{
	if (s.top == -1)
	{
		return true;
	}
	else
		return false;
}

bool Push(Sqstack& s, ElemType x)
{
	//判断是否为满
	if (s.top == Maxsize - 1)
		return false;
	s.data[++s.top] = x;
	return true;
}

//获取栈顶元素
bool GetTop(Sqstack s, ElemType& m)
{
	if (stackEmpty(s))
		return false;
	m = s.data[s.top];
	return true;
}

//弹栈
bool Pop(Sqstack& s, ElemType& m)
{
	if (stackEmpty(s))
		return false;
	m = s.data[s.top--];
	return true;
}

int main()
{
	Sqstack s;
	Initsrack(s);
	bool flag;
	flag = stackEmpty(s);
	if (flag)
		printf("stack  is  empty\n");
	else
		printf("stack  is  not  empty\n");
	Push(s, 1);
	Push(s, 2);
	Push(s, 3);
	ElemType m;
	flag = GetTop(s, m);//获取栈顶元素
	if (flag)
		printf("get top is %d\n", m);
	flag = Pop(s, m);
	if (flag)
		printf("pop element %d\n",m);
	flag = Pop(s, m);
	if (flag)
		printf("pop element %d\n", m);
	return 0;
}