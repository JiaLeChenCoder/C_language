#include"List.c"
int main() {
	LinkList* L;
	ElemType e;
	printf("������Ļ����������£�\n");
	printf(" 1����ʼ��������\n");
	InitList(L);
	printf(" 2�����β���β�巨����Ԫ�� a��b��c��d��e\n");
	ListInsert(L, 1, 'a');
	ListInsert(L, 2, 'b');
	ListInsert(L, 3, 'c');
	ListInsert(L, 4, 'd');
	ListInsert(L, 5, 'e');
	printf(" 3�����������");
	DispList(L);
	printf(" 4���������ȣ�%d\n", ListLength(L));
	printf(" 5��������Ϊ%s\n", (ListEmpty(L) ? "��" : "�ǿ�"));
	GetElem(L, 3,e);
		printf(" 6��������ĵ� 3��Ԫ�أ�%c\n", e);
	printf(" 7��Ԫ�� a ��λ�ã�%d\n", LocateElem(L, 'a'));
	printf(" 8���ڵ� 4 ��Ԫ��λ���ϲ���Ԫ�� f\n");
	ListInsert(L, 4, 'f');
	printf(" 9�����������");
	DispList(L);
	printf(" 10��ɾ��������ĵ�3 ��Ԫ��\n");
	ListDelete(L, 3, e);
	printf(" 11�����������");
	DispList(L);
	printf(" 12���ͷŵ�����\n");
	DestroyList(L);
	return 0;
}