#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);
void SLPushFront(SLTNode** pphead, SLTDataType x);
SLTNode* ByLTNode(SLTDataType x);
void SLPushBack(SLTNode** pphead, SLTDataType x);
void SLPopBack(SLTNode** pphead);
void SLPopFront(SLTNode** pphead);
