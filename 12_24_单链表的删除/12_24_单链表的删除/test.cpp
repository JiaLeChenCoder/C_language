#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
typedef struct LNode {
	Elemtype data;
	struct LNode* next;
}LNode, * LinkList;

void List_head_insert(LinkList& L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	Elemtype x;
	scanf("%d", &x);
	LNode* s;
	while (x != 9999)
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
}

void print_list(LinkList L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%3d", L->data);
		L = L->next;
	}
}

LNode* GetElem1(LinkList L, Elemtype e)//值
{
	LNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}

LNode* GetElem(LinkList L, int i)//位置
{
	int j = 1;
	LNode* p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
		return NULL;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

bool ListFrontInsert(LinkList L, int i, Elemtype e)
{
	LinkList P = GetElem(L, i - 1);
	if (NULL == P)
	{
		return 0;
	}
	LinkList s = (LNode*)malloc(sizeof(LNode));//为新的节点申请空间
	s->data = e;
	s->next = P->next;
	P->next = s;
	return true;
}


bool ListDelete(LinkList L, int i)
{
	LinkList p = GetElem(L, i - 1);
	if (NULL == p)
	{
		return false;
	}
	LinkList q = p->next;
	if (NULL == q)
	{
		return false;
	}
	p->next = q->next;
	free(q);
	return true;
}
//int main()
//{
//	LinkList L;
//	LinkList search;
//	List_head_insert(L);
//	print_list(L);
//	printf("\n");
//	//search = GetElem(L, 2);//位置
//	//if (search != NULL)
//	//{
//	//	printf("%d\n", search->data);
//	//}
//	//else
//	//	printf("输入有误\n");
//
//	search = GetElem1(L, 2);//位置
//	if (search != NULL)
//	{
//		printf("%d\n", search->data);
//	}
//	else
//		printf("未查找到\n");
//	ListFrontInsert(L, 2, 99);
//
//
//	return 0;
//}

int main()
{
	LinkList L;
	List_head_insert(L);
	print_list(L);
		printf("\n");

		bool ret;
		ret = ListDelete(L, 2);
		if (ret)
			printf("删除成功\n");
		else
			printf("删除失败\n");
		print_list(L);
	return 0;
}