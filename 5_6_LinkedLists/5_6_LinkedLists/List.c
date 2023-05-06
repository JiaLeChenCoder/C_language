#include"List.h"
void InitList(LinkList* L) { //��ʼ�����Ա�
	L = (LinkList*)malloc(sizeof(LinkList)); //����ͷ���
	L->next = NULL;
}
void DestroyList(LinkList* L) { //�������Ա�
	LinkList* p = L, * q = p->next;
	while (q != NULL) {
		free(p);
		p = q;
		q = p->next;
	}
	free(p);
}
bool ListEmpty(LinkList* L) { //�����Ա��Ƿ�Ϊ�ձ�
	return(L->next == NULL);
}
int ListLength(LinkList* L) { //�����Ա�ĳ���
	LinkList* p = L;
	int i = 0;
	while (p->next != NULL) {
		i++;
		p = p->next;
	}
	return(i);
}
void DispList(LinkList* L) { //������Ա�
		LinkList * p = L->next;
	while (p != NULL) {
		printf("%c ", p->data);
		p = p->next;
	}
	printf("\n");
}
bool GetElem(LinkList* L, int i, ElemType e) { //�����Ա���ĳ������Ԫ��ֵ
	int j = 0;
	LinkList* p = L; //p ָ��ͷ��㣬j ��Ϊ0����ͷ�������Ϊ 0��
	while (j < i && p != NULL) { //�ҵ� i �����
		j++;
		p = p->next;
	}
	if (p == NULL) //�����ڵ� i �����ݽ�㣬���� 0
		return false;
	else { //���ڵ� i �����ݽ�㣬����1
		e = p->data;
		return true;
	}
}
int LocateElem(LinkList* L, ElemType e) { //��Ԫ��ֵ����
	int i = 1;
	LinkList* p = L->next; //p ָ��ʼ��㣬i ��Ϊ 1����ʼ������ţ�
	while (p != NULL && p->data != e) { //���� data ֵΪ e �Ľ�㣬�����Ϊ i
		p = p->next;
		i++;
	}
	if (p == NULL) //������Ԫ��ֵΪ e �Ľ�㣬���� 0
		return 0;
	else //����Ԫ��ֵΪ e �Ľ�㣬�������߼���� i
		return i;
}
bool ListInsert(LinkList* L, int i, ElemType e) { //��������Ԫ��
	int j = 0;
	LinkList* p = L, * s; //p ָ��ͷ��㣬j ��Ϊ0��ͷ������ţ�
	while (j < i - 1 && p != NULL) { //���ҵ� i-1 �����
		j++;
		p = p->next;
	}
	if (p == NULL) //δ�ҵ��� i-1 ����㣬����false
		return false;
	else { //�ҵ��� i-1 �����*p�������½�㲢���� 1
		s = (LinkList*)malloc(sizeof(LinkList));
			s->data = e; //�����½��*s���� data ����Ϊ e
		s->next = p->next; //��*s ���뵽*p ֮��
		p->next = s;
		return true;
	}
}
bool ListDelete(LinkList* L, int i, ElemType e) { //ɾ������Ԫ��
	int j = 0;
	LinkList* p = L, * q; //p ָ��ͷ��㣬j ��Ϊ0��ͷ������ţ�
	while (j < i - 1 && p != NULL) { //���ҵ� i-1 �����
		j++;
		p = p->next;
	}
	if (p == NULL) //δ�ҵ��� i-1 ����㣬����false
		return false;
	else { //�ҵ��� i-1 �����*p
		q = p->next; //q ָ��� i �����
		if (q == NULL) //�������ڵ� i ����㣬����false
			return false;
		e = q->data;
		p->next = q->next; //�ӵ�������ɾ��*q ���
		free(q); //�ͷ�*q ���
		return true; //���� true ��ʾ�ɹ�ɾ���� i �����
	}
}