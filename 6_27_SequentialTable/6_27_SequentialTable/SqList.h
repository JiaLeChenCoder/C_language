#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
typedef struct S
{
	int* a;
	int size;
	int capecity;
}s1;

void SLTInit(s1* ps);
void SLTDestry(s1* ps);
void SLTPushBack(s1* ps,DataType x);
void SLTcheck(s1* s);
void SLTPrint(s1* s);
void SLTPushFront(s1* ps, DataType x);
void SLTPopFront(s1* ps);
void SLTPopBack(s1* ps);
