#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
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

void SLDatatypeInit(SL* psl);//初始化
void SLDatatypeDestory(SL* psl);//删除顺序表
void SLDatatypePushBack(SL* psl,SLDatatype X);//尾插
void SLDatatypePushFront(SL* psl, SLDatatype X);//头插
void SLDatatypePopBack(SL* psl);//尾删
void SLDatatypePopFront(SL* psl);//头删
void SLDatatypeInsert(SL* psl, SL* pos, SLDatatype x);
void SLDatatypeErase(SL* psl, SL* pos);
void SLDatatypePrint(SL* psl);

