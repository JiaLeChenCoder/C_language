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
	Q.front->next = NULL;//ͷ�ڵ��ÿ�
}

//���
void EmQueue(LinkQueue& Q, ElemType x)
{
	LinkNode* pnew = (LinkNode*)malloc(sizeof(LinkNode));
	pnew->data = x;
	pnew->next = NULL;
	Q.rear->next = pnew;//βָ���nextָ��pnew����β�����
	Q.rear = pnew;//rewҪָ���µ�β��
}

bool DeQueue(LinkQueue& Q, ElemType& x)
{
	if (Q.front == Q.rear)
	{
		return false;
	}
	LinkNode* q = Q.front->next;//�õ���һ����㣬����q
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