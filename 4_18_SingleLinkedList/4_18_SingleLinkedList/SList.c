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

SLTNode* BuyLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
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
void SLPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead); // ����Ϊ�գ�ppheadҲ��Ϊ�գ���Ϊ����ͷָ��plist�ĵ�ַ
	//assert(*pphead); // ����Ϊ�գ�����β��

	SLTNode* newnode = BuyLTNode(x);

	// 1��������
	// 2���ǿ�����
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SLPopFront(SLTNode** pphead)
{
	assert(pphead); // ����Ϊ�գ�ppheadҲ��Ϊ�գ���Ϊ����ͷָ��plist�ĵ�ַ
	assert(*pphead); // ����Ϊ�գ�����ͷɾ������Ȼ�㻹����������ļ�飩

	SLTNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);

	// һ���ڵ�
	// ����ڵ�
	//if ((*pphead)->next == NULL)
	//{
	//	free(*pphead);
	//	*pphead = NULL;
	//}
	//else
	//{
	//	SLTNode* del = *pphead;
	//	//*pphead = del->next;
	//	*pphead = (*pphead)->next;
	//	free(del);
	//}
}

void SLPopBack(SLTNode** pphead)
{
	assert(pphead); // ����Ϊ�գ�ppheadҲ��Ϊ�գ���Ϊ����ͷָ��plist�ĵ�ַ
	assert(*pphead); // ����Ϊ�գ�����ͷɾ������Ȼ�㻹����������ļ�飩

	// û�нڵ�(������)

	// �������
	//assert(*pphead);

	// ����ļ��
	/*if (*pphead == NULL)
	{
		return;
	}*/

	// һ���ڵ�
	// ����ڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//SLTNode* prev = NULL;
		//SLTNode* tail = *pphead;
		//// ��β
		//while (tail->next)
		//{
		//	prev = tail;
		//	tail = tail->next;
		//}

		//free(tail);
		//prev->next = NULL;

		SLTNode* tail = *pphead;
		// ��β
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

SLTNode* STFind(SLTNode* phead, SLTDataType x)
{
	//assert(phead);

	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// ��pos֮ǰ����
void SLInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	//assert(*pphead);

	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLTNode* newnode = BuyLTNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

// ��pos֮ǰ����
void SLInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuyLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// ɾ��posλ�õ�ֵ
void SLErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}

void SLEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
}