#include"SList.h"
//int main()
//{
//	s1 ss;
//	SLTInit(&ss);
//	SLTPushBack(&ss, 1);
//	SLTPushBack(&ss, 2);
//	SLTPushBack(&ss, 3);
//	SLTPushFront(&ss, 4);
//	SLTPushFront(&ss, 5);
//	SLTPushFront(&ss, 6);
//	SLTPrint(&ss);
//	printf("\n");
//
//	SLTPopFront(&ss);
//	SLTPopFront(&ss);
//	SLTPopBack(&ss);
//	SLTPopBack(&ss);
//	SLTPrint(&ss);
//	printf("\n");
//
//	SLTInsert(&ss, 0, 10);
//	SLTEarse(&ss, 1);
//	SLTPrint(&ss);
//	printf("\n");
//	int pos = SLTFind(&ss, 1);
//	if (pos)
//		printf("1的下标是%d ", pos);
//	else
//		printf("没找到");
//	printf("\n");
//	SLTModify(&ss, 0, 9);
//	SLTPrint(&ss);
//	SLTDestry(&ss);
//}

void swap1(int**p1, int**p2)
{
	int* t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}
void swap2(int* p1, int* p2)
{
	int* t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

int main()
{
	int a = 1, b = 2;
	swap2(&a, &b);
	printf("%d %d", a, b);
}