#include"List.h"

void TestList1()
{
	LTNode* plist = NULL;
	LTInit(plist);
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
}

int main()
{
	TestList1();
	return 0;
}