#include"fun.h"

int main()
{
	BiTree pnew;//����ָ������������ڵ�
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
		Listpew = (ptag_t)calloc(1, sizeof(tag_t));//�����нڵ�����ռ�
		Listpew->p = pnew;
		if (NULL == tree)
		{
			tree = pnew;//treeָ�����ĸ����
			phead = Listpew;
			ptail = Listpew;
			pcur = Listpew;//pcurҪָ�����ĸ��׽ڵ�
		}
		else
		{
			//��Ԫ�������
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