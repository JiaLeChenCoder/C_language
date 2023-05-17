#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;
typedef struct QueueNode
{
	struct	QueueNode* next;
	QDataType data;
}QNode;
typedef struct	Queue
{
	QNode* phead;
	QNode* tail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq,QDataType x);
void QueuePop(Queue* pq);
void QueueFront(Queue* pq);
void QueueBack(Queue* pq);
void QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);