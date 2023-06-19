#include"SeqList.h"
int main()
{
	s s1;
	SLInit(&s1);
	SLPushFront(&s1, 1);
	SLPushFront(&s1, 2);
	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPushFront(&s1, 5);
	SLPrint(&s1);
	SLDestory(&s1);
	return 0;
}