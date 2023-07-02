#pragma once

#include"SLT.h"

s* SLTBuyNode(datatype x)
{
	s* newnode = (s*)malloc(sizeof(s));
	if (newnode == NULL)
	{
		perror("malloc fail");
	}
	newnode->data = x;
	newnode->next = NULL;
}
void SLTPushFront(s** pphead, datatype x)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		s* newnode = SLTBuyNode(x);
		*pphead = newnode;
	}
	else
	{
		s* newnode = SLTBuyNode(x);
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
void SLTPrint(s* pphead)
{
	s* tail = pphead;
	while (tail)
	{
		printf("%d->", tail->data);
		tail = tail->next;
	}
	printf("NULL");
}

void SLTPushBack(s** pphead, datatype x)
{
	s* newnode = SLTBuyNode(x);
	if ((*pphead) == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		s* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SLTPopFront(s** pphead)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		return;
	}
	s* delnode = *pphead;
	*pphead = (*pphead)->next;
	free(delnode);
}

void SLTPopBack(s** pphead)
{
	assert(pphead);
	s* tail = *pphead;
	//没有节点
	assert(*pphead);
	//一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

s* SLTFind(s** pphead,datatype x)
{
	s* cur = *pphead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
}
void SLTInsert(s** pphead, s* cur, datatype x)
{
	assert(pphead);
	assert(cur);
	if (*pphead == cur)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		s* str = *pphead;
		while (str->next != cur)
		{
			str = str->next;
		}
		s* newnode=SLTBuyNode(x);
		newnode->next = cur;
		str->next = newnode;
	}
}
void SLTInsertAfter(s* pos, datatype x)
{
	assert(pos);
	s* newnode = SLTBuyNode(x);
	newnode->next=pos->next;
	pos->next=newnode;
}
void SLTErase(s** pphead, s* pos)
{
	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		s* cur = *pphead;
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
	}
}
void SLTEraseAfter(s* pos)
{
	assert(pos);
	s* del = pos->next;
	pos->next = pos->next->next;
	free(del);
}


