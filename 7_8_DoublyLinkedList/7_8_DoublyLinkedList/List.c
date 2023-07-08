#include"List.h"
SL* SLBuyNode(datatype x)
{
	SL* node = (SL*)malloc(sizeof(SL));
	if (node == NULL)
	{
		perror("malloc fail");
		return;
	}
	node->data = x; 
	node->pre = NULL;
	node->pre = NULL;
	return node;
}
SL*  SLInit()
{
	SL* phead = SLBuyNode(-1);
	phead->next = phead;
	phead->pre = phead;
	return phead;
}
void SLDestory(SL* phead)
{
	assert(phead);
	SL* cur = phead;
	while (cur != phead)
	{
		SL* next = cur->next;
		free(next);
		cur = next;
	}
	free(phead);
	//phead = NULL;
}
void SLPushFront(SL* phead, datatype x)
{
	assert(phead);
	SL* node = SLBuyNode(x);
	SL* nextnode=phead->next;

	phead->next = node;
	node->pre = phead;
	node->next = nextnode;
	nextnode->pre = node;
}
void SLPushBack(SL* phead, datatype x)
{
	assert(phead);
	SL* node = SLBuyNode(x);
	SL* cur = phead;
	while (cur->next!=phead)
	{
		cur = cur->next;
	}
	cur->next = node;
	node->pre = cur;
	node->next = phead;
	phead->pre = node;
}
void SLPopFront(SL* phead)
{
	assert(phead);
	assert(!SLEmpty(phead));
	/*SL* next = phead->next->next;
	free(phead->next);
	phead->next = next;
	next->pre = phead;*/

	SLEarse(phead->next);
}
void SLPopBack(SL* phead)
{
	assert(!SLEmpty(phead));
	assert(phead);
	/*SL* cur = phead;
	while (cur->next->next!=phead)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = phead;
	phead->pre = cur;*/

	SLEarse(phead->pre);
}
SL* SLFind(SL* phead,datatype x)
{
	assert(phead);
	SL* cur = phead->next;
	while (cur->next != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
	}
	return NULL;
}
void SLInsert(SL* pos, datatype x)
{
	assert(pos);
	SL* node = SLBuyNode(x);
	SL* pre = pos->pre;
	pre->next = node;
	node->pre = pre;
	node->next = pos;
	pos->pre = node;
}//在pos前面插入
void SLEarse(SL* pos)
{
	assert(pos);
	SL* pre = pos->pre;
	SL* next = pos->next;
	free(pos);
	pre->next = next;
	next->pre = pre;
}//删除pos位置的值
bool SLEmpty(SL* phead)
{
	assert(phead);
	return phead->next == phead;
}

void SLPrint(SL* phead)
{
	SL* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}