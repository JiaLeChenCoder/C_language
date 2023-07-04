#include"List.h"

LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
LTNode* LTInit(LTNode* phead)
{
	 phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}