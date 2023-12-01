#include"fun.h"

void Preorder(BiTree p)
{
	if (p != NULL)
	{
		printf("%c", p->c);
		Preorder(p->lchild);
		Preorder(p->rchild);
	}
}
void Inorder(BiTree p)
{
	if (p != NULL)
	{
		Inorder(p->lchild);
		printf("%c", p->c);
		Inorder(p->rchild);
	}
}
void Postorder(BiTree p)
{
	if (p != NULL)
	{
		Postorder(p->lchild);
		Postorder(p->rchild);
		printf("%c", p->c);
	}
}