#pragma once
#include<stdio.h>
#include<stdlib.h>
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

void SLDatatypeInit(SL* psl);
void SLDatatypeDestory(SL* psl);
void SLDatatypePushBack(SL* psl,SLDatatype X);
void SLDatatypePushFront(SL* psl, SLDatatype X);
void SLDatatypePopBack(SL* psl);
void SLDatatypePopFront(SL* psl);
void SLDatatypePrint(SL* psl);