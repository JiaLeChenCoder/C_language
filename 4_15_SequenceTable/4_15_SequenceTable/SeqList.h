#pragma once
#include<stdio.h>
#include<stdlib.h>
//静态的顺序表(如果给小了不够用，大了用不了)
//#define N 10
//typedef int SLDatatype;
//struct SeqList
//{
//	 SLDatatype a[N];
//	int size;
//};

//动态顺序表
typedef int SLDatatype;
typedef struct SeqList
{
	SLDatatype* a;
	int size;//存取的有效数据个数
	int capacity;//容量
}SL;

void SLDatatypeInit(SL* psl);
void SLDatatypeDestory(SL* psl);
void SLDatatypePushBack(SL* psl,SLDatatype X);
void SLDatatypePushFront(SL* psl, SLDatatype X);
void SLDatatypePopBack(SL* psl);
void SLDatatypePopFront(SL* psl);
void SLDatatypePrint(SL* psl);