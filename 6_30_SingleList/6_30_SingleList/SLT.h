#pragma once
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