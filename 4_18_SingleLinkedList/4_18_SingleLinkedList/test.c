#include"SList.h"
void Test1()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	SLTPushFront(&plist, 5);

	SLTPrint(plist);
}
int main()
{
	Test1();
	return 0;
}