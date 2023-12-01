#include<stdio.h>
#include<stdlib.h>

typedef char BiElemType;
typedef struct BiTNode
{
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;

typedef struct tag
{
	BiTree  p;
	struct tag* pnext;
}tag_t,*ptag_t;

void Preorder(BiTree p);
void Inorder(BiTree p);
void Postorder(BiTree p);