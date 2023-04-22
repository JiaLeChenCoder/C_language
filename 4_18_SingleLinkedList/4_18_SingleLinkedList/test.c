#define _CRT_SECURE_NO_WARNINGS  1
#include"SList.h"
//void Test1()
//{
//	SLTNode* plist = NULL;
//	SLTPushFront(&plist, 1);
//	SLTPushFront(&plist, 2);
//	SLTPushFront(&plist, 3);
//	SLTPushFront(&plist, 4);
//	SLTPushFront(&plist, 5);

//	SLTPrint(plist);
//}
//int main()
//{
//	Test1();
//	return 0;
//}


void TestSList4()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);
	SLTPrint(plist);

	SLTNode* pos = STFind(plist, 3);
	if (pos)
	{
		SLInsert(&plist, pos, 30);
	}
	SLTPrint(plist);

	pos = STFind(plist, 2);
	if (pos)
	{
		SLInsertAfter(pos, 20);
	}
	SLTPrint(plist);

	pos = STFind(plist, 2);
	if (pos)
	{
		SLErase(&plist, pos);
	}
	SLTPrint(plist);
}

int main()
{
	TestSList4();

	return 0;
}
