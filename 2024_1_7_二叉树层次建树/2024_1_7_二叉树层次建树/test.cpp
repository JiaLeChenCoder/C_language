#include<stdio.h>
#include<stdlib.h>
typedef char BiElemtype;
typedef struct BiTNode {
	BiElemtype c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;

typedef struct tag {
	BiTree p;
	struct  tag* pnext;
}tag_t,*ptag_t;//���е�����ʵ��

int main()
{
	BiTree pnew;
	BiTree tree = NULL;
	char B;
	ptag_t phead = NULL, ptail = NULL, ListPew = NULL, pcur;
	while (scanf("%c",&B))
	{
		if (B == '\n')
			break;
	}
	pnew = (BiTree)calloc(1, sizeof(BiTNode));
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
		}
		else if (NULL == pcur->p->rchild)
		{
			pcur->p->rchild = pnew;
			pcur = pcur->pnext;
		}
	}

}