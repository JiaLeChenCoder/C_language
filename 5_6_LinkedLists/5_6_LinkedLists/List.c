#include"List.h"
void InitList(LinkList* L) { //初始化线性表
	L = (LinkList*)malloc(sizeof(LinkList)); //创建头结点
	L->next = NULL;
}
void DestroyList(LinkList* L) { //销毁线性表
	LinkList* p = L, * q = p->next;
	while (q != NULL) {
		free(p);
		p = q;
		q = p->next;
	}
	free(p);
}
bool ListEmpty(LinkList* L) { //判线性表是否为空表
	return(L->next == NULL);
}
int ListLength(LinkList* L) { //求线性表的长度
	LinkList* p = L;
	int i = 0;
	while (p->next != NULL) {
		i++;
		p = p->next;
	}
	return(i);
}
void DispList(LinkList* L) { //输出线性表
		LinkList * p = L->next;
	while (p != NULL) {
		printf("%c ", p->data);
		p = p->next;
	}
	printf("\n");
}
bool GetElem(LinkList* L, int i, ElemType e) { //求线性表中某个数据元素值
	int j = 0;
	LinkList* p = L; //p 指向头结点，j 置为0（即头结点的序号为 0）
	while (j < i && p != NULL) { //找第 i 个结点
		j++;
		p = p->next;
	}
	if (p == NULL) //不存在第 i 个数据结点，返回 0
		return false;
	else { //存在第 i 个数据结点，返回1
		e = p->data;
		return true;
	}
}
int LocateElem(LinkList* L, ElemType e) { //按元素值查找
	int i = 1;
	LinkList* p = L->next; //p 指向开始结点，i 置为 1（开始结点的序号）
	while (p != NULL && p->data != e) { //查找 data 值为 e 的结点，其序号为 i
		p = p->next;
		i++;
	}
	if (p == NULL) //不存在元素值为 e 的结点，返回 0
		return 0;
	else //存在元素值为 e 的结点，返回其逻辑序号 i
		return i;
}
bool ListInsert(LinkList* L, int i, ElemType e) { //插入数据元素
	int j = 0;
	LinkList* p = L, * s; //p 指向头结点，j 置为0（头结点的序号）
	while (j < i - 1 && p != NULL) { //查找第 i-1 个结点
		j++;
		p = p->next;
	}
	if (p == NULL) //未找到第 i-1 个结点，返回false
		return false;
	else { //找到第 i-1 个结点*p，插入新结点并返回 1
		s = (LinkList*)malloc(sizeof(LinkList));
			s->data = e; //创建新结点*s，其 data 域置为 e
		s->next = p->next; //将*s 插入到*p 之后
		p->next = s;
		return true;
	}
}
bool ListDelete(LinkList* L, int i, ElemType e) { //删除数据元素
	int j = 0;
	LinkList* p = L, * q; //p 指向头结点，j 置为0（头结点的序号）
	while (j < i - 1 && p != NULL) { //查找第 i-1 个结点
		j++;
		p = p->next;
	}
	if (p == NULL) //未找到第 i-1 个结点，返回false
		return false;
	else { //找到第 i-1 个结点*p
		q = p->next; //q 指向第 i 个结点
		if (q == NULL) //若不存在第 i 个结点，返回false
			return false;
		e = q->data;
		p->next = q->next; //从单链表中删除*q 结点
		free(q); //释放*q 结点
		return true; //返回 true 表示成功删除第 i 个结点
	}
}