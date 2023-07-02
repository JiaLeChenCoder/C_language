
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int datatype;
typedef struct SLTNode
{
	datatype data;
	struct SLTNode* next;
}s;

void SLTPrint(s* phead);
void SLTPushFront(s** pphead, datatype x);
void SLTDestry(s* phead);
s* SLTBuyNode(datatype x);
void SLTPushBack(s** pphead, datatype x);
void SLTPopFront(s** pphead);
void SLTPopBack(s** pphead);
s*  SLTFind(s** pphead,datatype x);
void SLTInsert(s** pphead,s* cur,datatype x);
void SLTInsertAfter(s* pos, datatype x);
void SLTErase(s** pphead, s* pos);
void SLTEraseAfter(s* pos);