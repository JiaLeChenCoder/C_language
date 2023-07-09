#include"queue.h"


void QueueInit(queue* pq)
{
	pq->pro = NULL;
	pq->tail = NULL;
	pq->size = 0;
}
void QueueDestory(queue* pq)
{
	qnode* cur = pq;
	while (cur)
	{
		free(cur);
		cur = cur->next;
	}
	pq->pro = NULL;
	pq->tail = NULL;
	pq->size = 0;
}
void QueuePop(queue* pq)
{
	//一个节点
	if (pq->pro->next == NULL)
	{
		free(pq->pro);
		pq->pro = pq->tail = NULL;
	}
	else//多个节点
	{
		qnode* next = pq->pro->next;
		free(pq->pro);
		pq->pro = next;
	}
	pq->size--;
}
void QueuePush(queue* pq, datatype x)
{
	qnode* node = (qnode*)malloc(sizeof(qnode));
	if (node == NULL)
	{
		perror("malloc fail");
		return;
	}
	node->data = x;
	node->next = NULL;

	if (pq->tail == NULL)
	{
		assert(pq->pro);
		pq->tail = pq->pro = node;
	}
	else
	{
		pq->tail->next = node;
		pq->tail = node;
	}
	pq->size++;
}
bool QueueEmpty(queue* pq);
int QueueSize(queue* pq);
datatype QuquqPre(queue* pq);
datatype QueueBack(queue* pq);