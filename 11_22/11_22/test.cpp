#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int ElemTtpe;
typedef struct LNode
{
	ElemTtpe data;
	struct LNode* next;
}Node;

void List_tail_insert(Node*& L)
{
	L = (Node*)malloc(sizeof(Node));
	L->next = NULL;
	ElemTtpe x;
	scanf("%d", &x);
	Node* s, * r = L;
	while (x != 9999)
	{
		s = (Node*)malloc(sizeof(Node));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
}

void print(Node* L)
{
	L = L->next;
	while (L != NULL)
	{
		printf("%3d", L->data);
		L = L->next;
	}
}

void find_middle(Node* L, Node*& L2)
{
   L2= (Node*)malloc(sizeof(Node));
   Node* pcur, *ppre;
    ppre=pcur = L->next;
	while (pcur)
	{
		pcur = pcur->next;
		if (NULL == pcur)
		{
			return;
		}
		pcur = pcur->next;
		if (NULL == pcur)
		{
			return;
		}
		ppre = ppre->next;
	}
	L2->next = ppre->next;
	ppre->next = NULL;
}

void reverse(Node* L2)
{
	Node* r, *s, *t;
	r = L2->next;
	if (NULL == r)
	{
		return;
	}
	s = r->next;
	if (NULL == s)
	{
		return;
	}
	t = s->next;
	while (t)
	{
		s->next = r;
		r = s;
		s = t;
		t = t->next;
	}
	s->next = r;
	L2->next->next = NULL;
	L2->next = s;
}

void merge(Node* L, Node* L2)
{
	Node* pcur, * p, * q;
	pcur = L->next;
	p = pcur->next;
	q = L2->next;
	while (p != NULL && q != NULL)
	{
		pcur->next = q;
		q = q->next;
		pcur = pcur->next;
		pcur->next = p;
		p = p->next;
		pcur = pcur->next;
	}
	if(p!=NULL)
	{
		pcur->next = p;
	}
	if (q != NULL)
	{
		pcur->next = q;
	}
}

int main()
{
	Node* L,*L2=NULL;
	List_tail_insert(L);
	print(L);
	find_middle(L,L2);
	reverse(L2);
	merge(L, L2);
	print(L);
	return 0;
}