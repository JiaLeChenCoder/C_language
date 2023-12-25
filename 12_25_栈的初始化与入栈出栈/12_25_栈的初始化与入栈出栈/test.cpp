#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
typedef int ElemeType;
typedef struct {
	ElemeType data[MaxSize];//数组
	int top;//始终指向栈顶一个变量
}Sqstack;

//初始化栈
void Initstack(Sqstack& s)
{
	s.top = -1;//栈为空
}

//判空
bool StackEmpty(Sqstack s)
{
	if (s.top == -1)
	{
		return true;
	}
	else
		return false;
}

//入栈
bool push(Sqstack& s, ElemeType x)
{
	//判断是否满了
	if (MaxSize - 1 == s.top)
	{
		return false;
	}
	s.data[++s.top] = x;
	return true;
}
//获取栈顶元素
bool GetTop(Sqstack s, ElemeType& m)
{
	if (StackEmpty(s))
	{
		return false;
	}
	m = s.data[s.top];
	return true;
}

//弹栈
bool Pop(Sqstack& s, ElemeType& m)
{
	if (StackEmpty(s))
	{
		return false;
	}
	m = s.data[s.top--];
	return true;
}

//打印
void print(Sqstack s)
{
	int i = 0;
	while (i <= s.top)
	{
		printf("%d ", s.data[i]);
		i++;
	}
}

int main()
{
	Sqstack s;
	Initstack(s);
	bool flag;
	flag = StackEmpty(s);
	if (flag)
	{
		printf("stack is empty\n");
	}

	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	push(s, 5);
	push(s, 6);
	 print(s);
	 printf("\n");

	 int x=0;
	 flag = GetTop(s,x);
	 if (flag)
		 printf("栈顶元素是%d\n", x);

	 flag =Pop(s, x);
	 if (flag)
		 printf("弹出栈顶元素是%d\n", x);
	 printf("弹出后的为\n");
	 print(s);


	return 0;
}