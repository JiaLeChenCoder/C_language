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
}tag_t, * ptag_t;//���е�����ʵ��

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
		//��������ĵ�һ���ڵ�
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

	/*printf("ǰ��");
	preordre(pnew);
	printf("����");
	Inordre(pnew);
	printf("����");
	postordre(pnew);*/
	return 0;
}