#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Eletype;
typedef struct Lnode {
	Eletype data;
	struct  Lnode* next;
}Lnode,*Linklist;

void insret_head(Linklist &L)
{
	int i = 0;
	L=(Linklist)malloc(sizeof(Lnode));
	L->next = NULL;
	scanf("%d", &i);
	Linklist s;
	while (i != 9999)
	{
		 s = (Linklist)malloc(sizeof(Lnode));
		s->data = i;
		s->next = L->next;
		L->next = s;
		scanf("%d", &i);
	}
}

void insret_tail(Linklist& L)
{
	int i = 0;
	L = (Linklist)malloc(sizeof(Lnode));
	L->next = NULL;
	scanf("%d", &i);
	Linklist m;
	m = L;
	while (i != 9999)
	{
		Linklist s = (Linklist)malloc(sizeof(Lnode));
         		
		s->data = i;
		s->next = NULL;
		m->next = s;
		m = s;
		scanf("%d", &i);
	}
}
void print(Linklist L)
{
	L = L->next;
	while (L)
	{
		printf("%d ", L->data);
		L = L->next;
	}
}
int main()
{
	Linklist l;
	//insret_head(l);
	insret_tail(l);
	print(l);
	return 0;
}
