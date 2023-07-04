
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* LTInit(LTNode* phead);
LTNode* BuyLTNode(LTDataType x);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);