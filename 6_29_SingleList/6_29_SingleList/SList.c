#include"SList.h"
void SLTPrint(SN* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL");
}

SN* BuySLTNode(SLTDatatype x)
{
	SN* NewNode = (SN*)malloc(sizeof(SN));
	if (NewNode == NULL)
	{
		perror("malloc fail");
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

void SLTPushFront(SN** pphead, SLTDatatype x)
{
	SN* NewNode = BuySLTNode(x);
	NewNode->next = *pphead;
	*pphead = NewNode;
}
void SLTPushBack(SN** pphead, SLTDatatype x)
{
	SN* NewNode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = NewNode;
	}
	else
	{
		SN* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = NewNode;
	}
}
void SLTPopFront(SN** pphead)
{
	assert(pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SN* del = *pphead;
		*pphead = (*pphead)->next;
		free(del);
	}
}
void SLTPopBack(SN** pphead)
{
	assert(*pphead);
	//第一种方法
	//SN* cur = *pphead;
	//while (cur->next->next)
	//{
	//	cur = cur->next;
	//}
	//free(cur->next);
	//cur->next = NULL;
	//第二种方法
	SN* cur = *pphead;
	SN* pre = NULL;
	while (cur->next)
	{
		pre = cur;
		cur = cur->next;
	}
	free(cur);
	pre->next = NULL;
}