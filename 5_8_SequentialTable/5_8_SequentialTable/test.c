#include"SL.h"
int main()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 0);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPrint(&s);
	SLDestroy(&s);
}