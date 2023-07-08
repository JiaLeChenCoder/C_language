#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
typedef struct SList
{
	struct SList* pre;
	struct SList* next;
	datatype data;
}SL;
SL* SLInit();
void SLDestory(SL* phead);
void SLPushFront(SL* phead, datatype x);
void SLPushBack(SL* phead, datatype x);
void SLPopFront(SL* phead);
void SLPopBack(SL* phead);
SL* SLFind(SL* phead, datatype x);
void SLInsert(SL* pos, datatype x);//��posǰ�����
void SLEarse(SL* pos);//ɾ��posλ�õ�ֵ
bool SLEmpty(SL* phead);
SL* SLBuyNode(SL* phead);
void SLPrint(SL* phead);
