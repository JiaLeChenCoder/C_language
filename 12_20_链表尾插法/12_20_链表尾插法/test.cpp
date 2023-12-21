#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef  int Elemtype;
typedef struct LNode {
    Elemtype data;
    struct LNode* next;
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

void print_list(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%3d ", L->data);
        L = L->next;
    }
}

void List_tail_insert(LNode*& L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    Elemtype x;
    scanf("%d", &x);
    LNode* s,*r=L;
    while (x != 9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
}

int main()
{
    LinkList L;
    //List_head_insert(L);
    List_tail_insert(L);
    print_list(L);
    return 0;
}
