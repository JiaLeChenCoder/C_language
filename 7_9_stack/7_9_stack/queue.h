#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
typedef struct queuenode
{
	struct queuenode* next;
	datatype data;
}qnode;

typedef struct queue
{
	struct queuenode* pro;
	struct queuenode* tail;
	int size;
}queue;

void QueueInit(queue* pq);
void QueueDestory(queue* pq);
void QueuePop(queue* pq);
void QueuePush(queue* pq, datatype x);
bool QueueEmpty(queue* pq);
int QueueSize(queue* pq);
datatype QuquqPre(queue* pq);
datatype QueueBack(queue* pq);