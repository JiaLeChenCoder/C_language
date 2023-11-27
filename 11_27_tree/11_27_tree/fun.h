#include<stdio.h>
#include<stdlib.h>

typedef  char BiElemType;
typedef struct BiTNode {
	BiElemType c;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;

typedef struct tag {
	BiTree p;//树的一个结点的地址
	struct tag* pnext;
}tag_t,*ptag_t;

