#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef char BiElemtype;
typedef struct BiTNode {
	BiElemtype c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;

typedef struct tag {
	BiTree p;
	struct  tag* pnext;
}tag_t, * ptag_t;//队列的链表实现

void preordre(BiTree p)
{
	if (p != NULL) {
		printf("%c", p->c);
		preordre(p->lchild);
		preordre(p->rchild);
	}
}

void Inordre(BiTree p)
{
	if (p != NULL) {
		Inordre(p->lchild);
		printf("%c", p->c);
		Inordre(p->rchild);
	}
}

void postordre(BiTree p)
{
	if (p != NULL) {
		postordre(p->lchild);
		postordre(p->rchild);
		printf("%c", p->c);
	}
}

int main()
{
	BiTree pnew=NULL;
	BiTree tree = NULL;
	char B;
	ptag_t phead = NULL, ptail = NULL, ListPew = NULL, pcur=NULL;
	while (scanf("%c", &B))
	{
		if (B == '\n')
			break;

		pnew = (BiTree)calloc(1, sizeof(BiTNode));
		pnew->c = B;
		ListPew = (ptag_t)calloc(1, sizeof(tag_t));
		ListPew->p = pnew;
		//如果是树的第一个节点
		if (NULL == true)
		{
			tree = pnew;
			phead = ListPew;
			ptail = ListPew;
			pcur = ListPew;
		}
		else
		{
			ptail->pnext = ListPew;
			ptail = ListPew;
			if (pcur->p->lchild == NULL)
			{
				pcur->p->lchild = pnew;
				pcur = pcur->pnext;
			}
			else if (NULL == pcur->p->rchild)
			{
				pcur->p->rchild = pnew;
				pcur = pcur->pnext;
			}
		}
	}

	/*printf("前序：");
	preordre(pnew);
	printf("中序：");
	Inordre(pnew);
	printf("后序：");
	postordre(pnew);*/
	return 0;
}