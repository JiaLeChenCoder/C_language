#include"SeqList.h"
void TestSL()
{
	SL s;
	SLDatatypeInit(&s);
	SLDatatypePushBack(&s, 1);
	SLDatatypePushBack(&s, 2);
	SLDatatypePushBack(&s, 3);
	SLDatatypePushBack(&s, 5);
	SLDatatypePushBack(&s, 6);
	SLDatatypePushBack(&s, 7);
	SLDatatypePopBack(&s);
	/*SLDatatypePushFront(&s, 23);
	SLDatatypePopFront(&s);*/

	/*SLDatatypeInsert(&s, 2, 0);
	SLDatatypeErase(&s,1);*/

	SLDatatypePrint(&s);
	SLDatatypeDestory(&s);
}
int main()
{
	TestSL();
	return 0;
}