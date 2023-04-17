#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��̬��˳���(�����С�˲����ã������ò���)
//#define N 10
//typedef int SLDatatype;
//struct SeqList
//{
//	 SLDatatype a[N];
//	int size;
//};

//��̬˳���
typedef int SLDatatype;
typedef struct SeqList
{
	SLDatatype* a;
	int size;//��ȡ����Ч���ݸ���
	int capacity;//����
}SL;

void SLDatatypeInit(SL* psl);//��ʼ��
void SLDatatypeDestory(SL* psl);//ɾ��˳���
void SLDatatypePushBack(SL* psl,SLDatatype X);//β��
void SLDatatypePushFront(SL* psl, SLDatatype X);//ͷ��
void SLDatatypePopBack(SL* psl);//βɾ
void SLDatatypePopFront(SL* psl);//ͷɾ
void SLDatatypeInsert(SL* psl, SL* pos, SLDatatype x);
void SLDatatypeErase(SL* psl, SL* pos);
void SLDatatypePrint(SL* psl);

