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
	struct  tag* ptag_t;
}tag_t,*ptag_t;//���е�����ʵ��

int main()
{
	BiTNode pnew;
	BiTree tree = NULL;
	char B;
	ptag_t phead = NULL, ptail = NULL, ListPew = NULL, pcur;
	while (scanf("%c",&B))
	{
		if (B == '\n')
			break;
	}
	

}