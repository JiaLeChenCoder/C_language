#include"SList.h"
//void SLInit(SLTNode** pphead)
//{
//	*pphead = NULL;
//}
void SLTPrint(SLTNode* phead)
{
	assert(phead);
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d ",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SLTNode* ByLTNode(SLTDataType x)
{
	SLTNode* newNode=(SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newNode->data = x;
	newNode->next= NULL;
	return newNode;
}
void SLPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = ByLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = ByLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SLPopBack(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SLTNode* cur = *pphead;
		while (cur->next->next)
		{
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;
	}
}

void SLPopFront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* cur = *pphead;
	*pphead = cur->next;
	free(cur);
}

