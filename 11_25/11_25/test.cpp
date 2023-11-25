#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct LinkNode {
	ElemType data;
	struct LinkNode *next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;
}LinkQueue;

void InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}

//入队
void EnQueue(LinkQueue& Q, ElemType x)
{
	LinkNode* pnew = (LinkNode*)malloc(sizeof(LinkNode));
	pnew->data = x;
	pnew->next = NULL;
	Q.rear->next = pnew;
	Q.rear = pnew;
}

bool DeQueue(LinkQueue& Q, ElemType &x)
{
	if (Q.front == Q.rear)
		return false;
	LinkNode* q = Q.front->next;
	x = q->data;
	Q.front->next = q->next;
	if (Q.rear == q)//只剩一个
	{
		Q.rear = Q.front;
	}
	free(q);
}