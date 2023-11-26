#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct  LNode* next;
}LNode;

//Í·²åÈë
void List_head_insert(LNode*& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	ElemType x;
	scanf("%d", &x);
	LNode* s;
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
}

//Î²²å
void List_tail_insert(LNode*& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	ElemType x;
	scanf("%d", &x);
	LNode* s,*r;
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = NULL;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
}
//´òÓ¡
void print(LNode* L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%3d", L->data);
		L = L->next;
	}
}
int main()
{
	return 0;
}