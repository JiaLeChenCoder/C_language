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
}