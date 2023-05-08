#include"SL.h"
#include<stdlib.h>
void SLChecktype(SL* psl)
{
	if (psl->capacity == psl->size)
	{
		SLDatatype* temp = (SLDatatype*)realloc(psl->a, sizeof(SLDatatype) * 2);
		psl->a = temp;
		psl->capacity *= 2;
	}
}

void SLInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);
	psl->capacity = 4;
	psl->size = 0;
}

void SLPushBack(SL* psl, SLDatatype x)
{
	psl->a[psl->size] = x;
	psl->size++;
}

void SLDestroy(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void SLPrint(SL* psl)
{
	for(int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}