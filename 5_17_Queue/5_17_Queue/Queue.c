#include"Queue.h"
void QueueInit(Queue* pq)
{
	pq->phead = NULL;
	pq->tail =NULL;
	pq->size = 0;
}
void QueueDestroy(Queue* pq)
{
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead =pq->tail= NULL;
	pq->size = 0;
}

void QueuePush(Queue* pq,QDataType x)
{
	assert(pq);
	QNode* node = (QNode*)malloc(sizeof(QNode));
	if (node == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	node->data = x;
	node->next = NULL;
	if (pq->tail == NULL)
	{
		assert(pq->phead == NULL);
		pq->phead = pq->tail = node;
	}
	else
	{
		pq->tail->next = node;
		pq->tail = node;
	}
	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead =pq->tail= NULL;
	}
	else
	{
		QNode* node = pq->phead->next;
		free(pq->phead);
		pq->phead = node;
	}
	pq->size--;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

void QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->phead->data;
}
void QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}
void QueueSize(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->size;
}