#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int ElemTpye;
typedef struct LNode
{
	ElemTpye data;
	struct LNode* next;
}LNode,*LinkList;

LinkList list_head_insert(LinkList &L)
{
	LNode* s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}

LinkList GetMent(LinkList L, int i)
{
	int j = 1;
	LNode *p = L->next;
	if (i == 0)
	{

		return L;
	}
	if (i < 1)
		return NULL;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

bool ListFrontsert(LinkList L, int i, ElemTpye e)
{
	LinkList p = GetMent(L,i - 1);
	if (NULL == p)
	{
	 return false;
	}
	LinkList s = (LNode*)(malloc(sizeof(LNode)));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return s;
}

void print(LinkList L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");
}
int main()
{
	LinkList L;
	LinkList search;
	list_head_insert(L);
	ListFrontsert(L, 3, 100);
	print(L);
	return 0;
}