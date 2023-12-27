#include<stdio.h>
#define maxsize 50
typedef int ElemType;
typedef struct {
	ElemType data[maxsize];
	int front, rear;
}sqQueue;

//初始化
void InitQueue(sqQueue& Q)
{
	Q.front = Q.rear = 0;
}

//判空
bool isEmpty(sqQueue Q)
{
	return Q.rear == Q.front;
}

bool EnQueue(sqQueue& Q, ElemType  x)
{
	if (Q.rear + 1 % maxsize == Q.front)//判满
	{
		return false;
	}
	else
		Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % maxsize;
	return true;
}

//出队
bool Dequeue(sqQueue& Q, ElemType& x)
{
	if (Q.rear == Q.front)
	{
		return true;
	}
}

int main()
{
	sqQueue Q;
	InitQueue(Q);
	bool ret;
	ret = isEmpty(Q);
	if (ret)
		printf("sqQueue is Empty\n");
	else

		printf("sqQueue is not Empty\n");
		ret=EnQueue(Q, 3);
		ret=EnQueue(Q, 4);
		ret=EnQueue(Q, 5);
		ret=EnQueue(Q, 6);
		if (ret)
			printf("EnQueue success\n");
		else
			printf("EnQueue failed\n");
		ElemType element;
		ret = Dequeue(Q, element);
		if (ret)
			printf("Dequeue success\n");
		else
			printf("Dequeue failed\n");
		return 0;
}
