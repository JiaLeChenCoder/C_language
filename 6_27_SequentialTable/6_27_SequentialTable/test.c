#include"SqList.h"
int main()
{
	s1 ss;
	SLTInit(&ss);
     SLTPushBack(&ss, 1);
	 SLTPushBack(&ss, 2);
	 SLTPushBack(&ss, 3);
	 SLTPushBack(&ss, 4);
	 SLTPushBack(&ss, 5);
	 SLTPrint(&ss);
	 printf("\n");
	 SLTPopFront(&ss);
	 SLTPopFront(&ss);

	SLTPushFront(&ss, 6);
	 SLTPushFront(&ss, 7);
	 SLTPushFront(&ss, 8);
	 SLTPushFront(&ss, 9);
	 SLTPrint(&ss);
	 printf("\n");

	 SLTPopBack(&ss);

	 SLTPopBack(&ss); 
	 SLTPrint(&ss);
	 printf("\n");

	 SLTPopFront(&ss);
	 SLTPopFront(&ss);

	 SLTPrint(&ss);
	 printf("\n");
	 SLTDestry(&ss);

	return 0;
}