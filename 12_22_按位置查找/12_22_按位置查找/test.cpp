#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
typedef struct LNode {
	Elemtype data;
	struct  LNode* next;
}LNode, * LinkList;

void List_head_insert(LinkList& L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    Elemtype x = 0;
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

LNode* GetElem(LinkList L, int i)
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

void print_list(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%3d ", L->data);
        L = L->next;
    }
}

int main()
{
    LinkList L;
    LinkList search;
    List_head_insert(L);
    print_list(L);
    search = GetElem(L, 0);
    printf("\n");
    if (search != NULL)
    {
        printf("%d\n", search->data);
    }
    return 0;
}