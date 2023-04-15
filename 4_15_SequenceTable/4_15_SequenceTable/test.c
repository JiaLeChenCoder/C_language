#include"SeqList.h"
int main()
{
	SL s;
	SLDatatypeInit(&s);
	SLDatatypePushBack(&s, 1);
	SLDatatypePushBack(&s, 2);
	SLDatatypePushBack(&s, 3);
	SLDatatypePushBack(&s, 4);
	SLDatatypePushBack(&s, 5);
	SLDatatypePushBack(&s, 6);
	SLDatatypePrint(&s);
	SLDatatypeDestory(&s);
	return 0;
}