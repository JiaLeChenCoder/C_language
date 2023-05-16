#include"List.h"

void TestList3()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopBack(plist);
	LTPrint(plist);
	LTPopFront(plist);
	LTPrint(plist);

	LTNode* pos = LTFind(plist, 2);
	if (pos)
	{
		LTInsert(pos, 20);
	}
	LTPrint(plist);
	LTErase(pos);
	LTPrint(plist);
	LTDestroy(plist);
	plist = NULL;
}

int main()
{
	TestList3();

	return 0;
}