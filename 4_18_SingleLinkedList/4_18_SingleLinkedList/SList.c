#pragma once
#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTPushFront(SLTDataType** Pphead, SLTDataType x)
{
	SLTNode* newnode =(SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	newnode->next = *Pphead;
	*Pphead = newnode;
}