#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDatatype;
typedef struct SLTNode
{
	SLTDatatype data;
	struct SLTNode* next;
}SN;

void SLTPrint(SN* phead);
void SLTPushFront(SN** pphead, SLTDatatype x);
SN* BuySLTNode(SLTDatatype x);
void SLTPushBack(SN** pphead, SLTDatatype x);
void SLTPopFront(SN** pphead);
void SLTPopBack(SN** pphead);