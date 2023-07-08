#include"List.h"
void test1()
{
	SL* s = SLInit();
	SLPushFront(s, 1);
	SLPushFront(s, 2);
	SLPushBack(s, 3);
	SLPushBack(s, 4);
	SLPrint(s);
	printf("\n");
	SLPopBack(s);
	SLPopFront(s);
	SLPrint(s);
	SLDestory(s);
}
test2()
{

	SL* s = SLInit();
	SLPushFront(s, 1);
	SLPushFront(s, 2);
	SLPushBack(s, 3);
	SLPushBack(s, 4);
    SL* pos=SLFind(s,2);
	if (pos)
	{
		SLInsert(pos, 20);
	}
	SLPrint(s);
	SLDestory(s);
	return 0;
}
int main()
{
	//test1();
	test2();
	return 0;
}