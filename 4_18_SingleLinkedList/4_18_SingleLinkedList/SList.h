#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);
void SLTPushFront(SLTDataType** Pphead, SLTDataType x);