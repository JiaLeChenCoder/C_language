#define _CRT_SECURE_NO_WARNINGS 1
#include"fun.h"
int main()
{
    BiTree pnew;//����ָ��������Ľڵ�
    BiTree tree = NULL;//ָ��������������
    char B;
    ptag_t phead = NULL, ptail = NULL, Listpnew = NULL,pur=NULL;
    while (scanf("%c", &B))
    {
        if (B=='\n')
        {
            break;
        }
        pnew = (BiTree)calloc(1, sizeof(BiTNode));
        pnew->c = B;
        Listpnew = (ptag_t)calloc(1, sizeof(tag_t));
        Listpnew->p = pnew;
        if (NULL == tree)
        {
            tree = pnew;
            phead = Listpnew;
            ptail = Listpnew;
            pur = Listpnew;//����Ԫ��
            continue;
        }
        else
        {
            //����Ԫ�����
            ptail->pnext = Listpnew;
            ptail = Listpnew;
            if (pur->p->lchild == NULL)
            {
                pur->p->lchild = pnew;
            }
            else if (pur->p->rchild == NULL)
            {
                pur->p->rchild = pnew;
                pur = pur->pnext;
            }

        }
    }
    Inorder(tree);
    printf("\n");
    Preorder(tree);
    printf("\n");
    Postorder(tree);
    printf("\n");
    return 0;
}