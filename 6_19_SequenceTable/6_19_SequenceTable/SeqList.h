#include<stdio.h>
#include<stdlib.h>

typedef int SLTypeData;
typedef struct SList
{
	SLTypeData* a;
	int capecity;
	int size;
}s;

void SLCheck(s* ps);
void SLInit(s* ps);
void SLDestory(s* ps);
void SLPrint(s* ps);
void SLPushFront(s* ps, SLTypeData x);