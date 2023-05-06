#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef char ElemType;
typedef struct LNode { //定义单链表结点类型
	ElemType data;
	struct LNode* next;
} LinkList;
void InitList(LinkList* L);
void DestroyList(LinkList* L);
bool ListEmpty(LinkList* L);
int ListLength(LinkList* L);
void DispList(LinkList* L);
bool GetElem(LinkList* L, int i, ElemType e);
int LocateElem(LinkList* L, ElemType e);
bool ListInsert(LinkList* L, int i, ElemType e);
bool ListDelete(LinkList* L, int i, ElemType e);