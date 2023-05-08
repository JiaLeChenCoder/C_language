#pragma once
#include<stdio.h>
typedef int SLDatatype;
typedef struct SeqList
{
	SLDatatype* a;
	int size;
	int capacity;
}SL;

void SLChecktype(SL* psl);
void SLInit(SL* psl);
void SLPushBack(SL* psl, SLDatatype x);
void SLDestroy(SL* psl);
void SLPrint(SL* psl);