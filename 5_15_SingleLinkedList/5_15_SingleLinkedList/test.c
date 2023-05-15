#include"SList.h"
void test1()
{
	SLTNode* s=NULL;
	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLTPrint(s);

	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLTPrint(s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLTPrint(s);

	SLPopFront(&s);
	SLTPrint(s);

}
int main()
{
	test1();
	return 0;
}