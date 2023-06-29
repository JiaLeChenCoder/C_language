#include"SList.h"
void Test()
{
	SN* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushFront(&plist, 6);
	SLTPushFront(&plist, 7);
	SLTPrint(plist);
	printf("\n");
	SLTPopBack(&plist);
	SLTPopFront(&plist);
	SLTPrint(plist);

}
int main()
{
	Test();
	return 0;
}