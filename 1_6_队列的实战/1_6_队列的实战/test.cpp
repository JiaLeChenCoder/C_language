#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LinkNode {
	ElemType data;
	struct  LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;
}LinkQueue;

void InitQueue(LinkQueue & Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;//头节点置空
}

//入队
void EmQueue(LinkQueue& Q, ElemType x)
{
	LinkNode* pnew = (LinkNode*)malloc(sizeof(LinkNode));
	pnew->data = x;
	pnew->next = NULL;
	Q.rear->next = pnew;//尾指针的next指向pnew，从尾部入队
	Q.rear = pnew;//rew要指向新的尾部
}

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	if (Q.front == Q.rear)
	{
		return false;
	}
	LinkNode* q = Q.front->next;//拿到第一个结点，存入q
	Q.front->next = q->next;
	if (Q.rear == q)
	{
		Q.rear = Q.front;
	}
	free(q);
}

int main()
{
	return 0;
}