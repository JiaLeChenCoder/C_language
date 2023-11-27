#include"fun.h"

int main()
{
	BiTree pnew;//用来指向新申请的树节点
	BiTree tree = NULL;
	char B;
	ptag_t phead = NULL, ptail = NULL, Listpew = NULL,pcur;
	while (scanf("%d", B))
	{
		if (B == '\n')
		{
			break;
		}
		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));
		pnew->c = B;
		Listpew = (ptag_t)calloc(1, sizeof(tag_t));//给队列节点申请空间
		Listpew->p = pnew;
		if (NULL == tree)
		{
			tree = pnew;//tree指向树的根结点
			phead = Listpew;
			ptail = Listpew;
			pcur = Listpew;//pcur要指向树的父亲节点
		}
		else
		{
			//让元素入队列
			ptail->pnext = Listpew;
			ptail = Listpew;
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
	return 0;
}