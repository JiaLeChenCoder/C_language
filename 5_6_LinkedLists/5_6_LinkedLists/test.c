#include"List.c"
int main() {
	LinkList* L;
	ElemType e;
	printf("单链表的基本运算如下：\n");
	printf(" 1．初始化单链表\n");
	InitList(L);
	printf(" 2．依次采用尾插法插入元素 a、b、c、d、e\n");
	ListInsert(L, 1, 'a');
	ListInsert(L, 2, 'b');
	ListInsert(L, 3, 'c');
	ListInsert(L, 4, 'd');
	ListInsert(L, 5, 'e');
	printf(" 3．输出单链表：");
	DispList(L);
	printf(" 4．单链表长度：%d\n", ListLength(L));
	printf(" 5．单链表为%s\n", (ListEmpty(L) ? "空" : "非空"));
	GetElem(L, 3,e);
		printf(" 6．单链表的第 3个元素：%c\n", e);
	printf(" 7．元素 a 的位置：%d\n", LocateElem(L, 'a'));
	printf(" 8．在第 4 个元素位置上插入元素 f\n");
	ListInsert(L, 4, 'f');
	printf(" 9．输出单链表：");
	DispList(L);
	printf(" 10．删除单链表的第3 个元素\n");
	ListDelete(L, 3, e);
	printf(" 11．输出单链表：");
	DispList(L);
	printf(" 12．释放单链表\n");
	DestroyList(L);
	return 0;
}