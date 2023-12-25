#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
typedef int ElemeType;
typedef struct {
	ElemeType data[MaxSize];//����
	int top;//ʼ��ָ��ջ��һ������
}Sqstack;

//��ʼ��ջ
void Initstack(Sqstack& s)
{
	s.top = -1;//ջΪ��
}

//�п�
bool StackEmpty(Sqstack s)
{
	if (s.top == -1)
	{
		return true;
	}
	else
		return false;
}

//��ջ
bool push(Sqstack& s, ElemeType x)
{
	//�ж��Ƿ�����
	if (MaxSize - 1 == s.top)
	{
		return false;
	}
	s.data[++s.top] = x;
	return true;
}
//��ȡջ��Ԫ��
bool GetTop(Sqstack s, ElemeType& m)
{
	if (StackEmpty(s))
	{
		return false;
	}
	m = s.data[s.top];
	return true;
}

//��ջ
bool Pop(Sqstack& s, ElemeType& m)
{
	if (StackEmpty(s))
	{
		return false;
	}
	m = s.data[s.top--];
	return true;
}

//��ӡ
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
		 printf("ջ��Ԫ����%d\n", x);

	 flag =Pop(s, x);
	 if (flag)
		 printf("����ջ��Ԫ����%d\n", x);
	 printf("�������Ϊ\n");
	 print(s);


	return 0;
}