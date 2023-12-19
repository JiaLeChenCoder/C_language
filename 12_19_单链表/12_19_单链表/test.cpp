#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef  int Elemtype;
typedef struct LNode {
    Elemtype data;
    struct LNode* next;
}LNode, * LinkList;
 //ͷ�巨
void List_head_insert(LinkList& L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    Elemtype x=0;
    scanf("%d",&x);
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

int main()
{
    LinkList L;
    List_head_insert(L);
    print_list(L);
    return 0;
}