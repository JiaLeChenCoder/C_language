#include"SLT.h"
int main()
{
	s* s1 = NULL;
	SLTPushFront(&s1, 1);
	SLTPushFront(&s1, 2);
	SLTPushBack(&s1, 3);
	SLTPushBack(&s1, 4);
	SLTPrint(s1);
	printf("\n");

	SLTPopBack(&s1);
	SLTPopFront(&s1);
	SLTPrint(s1);
	printf("\n");
	s* pos = SLTFind(&s1, 1);
	if (pos)
	{
		SLTInsert(&s1, pos, 20);
		SLTInsertAfter(pos, 30);
		SLTPrint(s1);
		printf("\n");
		
		SLTEraseAfter(pos);
		SLTPrint(s1);
		printf("\n");
		
		SLTErase(&s1,pos);
		SLTPrint(s1);
	}
	printf("\n");


}
