#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

typedef int hpdatatype;
typedef struct heap
{
	hpdatatype* a;
	int size;
	int capecity;
}hp;

void Swap(hpdatatype* psl1, hpdatatype* psl2);
void HpInit(hp* psl);
void HpDestory(hp* psl);
void HpPush(hp* psl, hpdatatype x);
void HpPop(hp* psl);
void HpTop(hp* psl);
bool HpEmpyty(hp* psl);
void HpSize(hp* psl);
void Adjustup(hpdatatype* a,int child );
void AdjustDown(hpdatatype* a, int n, int parent);
