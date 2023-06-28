#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
typedef struct s
{
	int* a;
	int size;
	int capecity;
}s1;

void SLTInit(s1* psl);
void SLTDestry(s1* psl);
void SLTPushFront(s1* psl, DataType x);
void SLTPushBack(s1* psl, DataType x);
void SLTPopFront(s1* psl);
void SLTPopBack(s1* psl);
void SLTCheck(s1* psl);
void SLTInsert(s1* psl,int pos,DataType x);
void SLTEarse(s1* psl,int pos);
void SLTPrint(s1* psl);
int SLTFind(s1* psl,DataType x); 
void SLTModify(s1* psl, int pos, DataType x);