#include"SeqList.h"

Test()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLPushFront(&s, 5);
	SLPrint(&s);

	SLPopBack(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPrint(&s);

	SLInsert(&s, 1, 0);
	SLPrint(&s);

	SLErase(&s, 0);
	SLPrint(&s);
	printf("2µƒŒª÷√ «%d\n", SLFind(&s, 2));

	SLModify(&s, 2, 2);
	SLPrint(&s);
}
int main()
{
	Test();
	return 0;
}