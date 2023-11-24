#include<stdio.h>
#include<stdlib.h>

#define Maxsize 5
typedef int ElemType;
typedef struct
{
	ElemType data[Maxsize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.front = Q.rear = 0;
}

//判空
bool  isEmpty(SqQueue Q)
{
	return Q.front == Q.rear;
}

//入队

bool EnQueue(SqQueue& Q, ElemType x)
{
	//判满
	if ((Q.rear + 1) % Maxsize == Q.front)
	{
		return false;
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % Maxsize;
	return true;
}

//出队
bool DeQueue(SqQueue& Q, ElemType& x)
{
	if (Q.rear == Q.front)//判空
	{
		return false;
	}

	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % Maxsize;
	return true;
}

int main()
{
	SqQueue Q;
	InitQueue(Q);
	bool ret;
	ret = isEmpty(Q);
	if (ret)
		printf("sqQueue is  Empty\n");
	else
		printf("sqQueue  is not Empty\n");
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	ret=EnQueue(Q, 4);
	ret = EnQueue(Q, 5);
	if (ret)
		printf("EnQueue success\n");
	else
		printf("EnQueue failed\n");

	ElemType element;
	ret = DeQueue(Q, element);
	if (ret)
		printf("Dequeue succes  %d\n",element);
	else
		printf("Dequeue failse\n");
	ret = DeQueue(Q, element);
	if (ret)
		printf("Dequeue succes  %d\n", element);
	else
		printf("Dequeue failse\n");

	ret = EnQueue(Q, 5);
	if (ret)
		printf("EnQueue success ");
	else
		printf("EnQueue failed\n");
	return 0;
}