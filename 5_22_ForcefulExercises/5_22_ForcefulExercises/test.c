//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//#include<stdio.h>
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//typedef struct {
//	ST pushst;
//	ST popst;
//}MyQueue;
//
//void STInit(ST* pst);
//void STDestroy(ST* pst);
//void STPush(ST* pst, STDataType x);
//void STPop(ST* pst);
//STDataType STTop(ST* pst);
//bool STEmpty(ST* pst);
//int STSize(ST* pst);
//void STInit(ST* pst)
//{
//	assert(pst);
//	pst->a = NULL;
//	pst->top = 0;  
//	pst->capacity = 0;
//}
//
//void STDestroy(ST* pst)
//{
//	assert(pst);
//
//	free(pst->a);
//	pst->a = NULL;
//	pst->top = pst->capacity = 0;
//}
//
//void STPush(ST* pst, STDataType x)
//{
//	if (pst->top == pst->capacity)
//	{
//		int newCapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(pst->a, newCapacity * sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//
//		pst->a = tmp;
//		pst->capacity = newCapacity;
//	}
//
//	pst->a[pst->top] = x;
//	pst->top++;
//}
//
//void STPop(ST* pst)
//{
//	assert(pst);
//	assert(!STEmpty(pst));
//	pst->top--;
//}
//
//STDataType STTop(ST* pst)
//{
//	assert(pst);
//	assert(!STEmpty(pst));
//	return pst->a[pst->top - 1];
//}
//
//bool STEmpty(ST* pst)
//{
//	assert(pst);
//	return pst->top == 0;
//}
//
//int STSize(ST* pst)
//{
//	assert(pst);
//	return pst->top;
//}
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	if (obj == NULL)
//	{
//		perror("malloc fail");
//		return NULL;
//	}
//	STInit(&obj->pushst);
//	STInit(&obj->popst);
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	STPush(&obj->pushst, x);
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (STEmpty(&obj->popst))
//	{
//		while (!STEmpty(&obj->pushst))
//		{
//			STPush(&obj->popst, STTop(&obj->pushst));
//			STPop(&obj->pushst);
//		}
//	}
//	return STTop(&obj->popst);
//}
//int myQueuePop(MyQueue* obj) {
//	int front = myQueuePeek(obj);
//	STPop(&obj->popst);
//	return front;
//}
//
//
//
//bool myQueueEmpty(MyQueue* obj) {
//	return STEmpty(&obj->pushst) && STEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//	STDestroy(&obj->pushst);
//	STDestroy(&obj->popst);
//	free(obj);
//}
//
//
////环形队列
//typedef struct {
//	int front;
//	int rear;
//	int k;
//	int* a;
//} MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	return (obj->rear + 1) % (obj->k + 1) == obj->front;
//}
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->a = (int*)malloc(sizeof(int) * (k + 1));
//	obj->front = obj->rear = 0;
//	obj->k = k;
//	return obj;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj))
//		return false;
//	obj->a[obj->rear] = value;
//	obj->rear++;
//	obj->rear %= (obj->k + 1);
//	return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return false;
//	obj->front++;
//	obj->front %= (obj->k + 1);
//	return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	return obj->a[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->a);
//	free(obj);
//}
//
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdbool.h>
//typedef int QDataType;
//typedef struct QueueNode
//{
//	struct	QueueNode* next;
//	QDataType data;
//}QNode;
//typedef struct	Queue
//{
//	QNode* phead;
//	QNode* tail;
//	int size;
//}Queue;
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//	return pq->size == 0;
//}
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->phead = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueueDestroy(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->phead;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->phead = pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail\n");
//		return;
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		assert(pq->phead == NULL);
//		pq->phead = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//	pq->size++;
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	if (pq->phead->next == NULL)
//	{
//		free(pq->phead);
//		pq->phead = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->phead->next;
//		free(pq->phead);
//		pq->phead = next;
//	}
//	pq->size--;
//}
//
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	return pq->phead->data;
//}
//
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	return pq->tail->data;
//}
//
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//	return pq->size;
//}
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	if (obj == NULL)
//	{
//		perror("malloc fail");
//		return NULL;
//	}
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Queue* pEmptyQ = &obj->q1;
//	Queue* pNonEmptyQ = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		pEmptyQ = &obj->q2;
//		pNonEmptyQ = &obj->q1;
//	}
//	while (QueueSize(pNonEmptyQ) > 1)
//	{
//		QueuePush(pEmptyQ, QueueFront(pNonEmptyQ));
//		QueuePop(pNonEmptyQ);
//	}
//	int top = QueueFront(pNonEmptyQ);
//	QueuePop(pNonEmptyQ);
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//}

