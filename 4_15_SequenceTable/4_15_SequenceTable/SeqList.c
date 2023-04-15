#include"SeqList.h"

//void SLDatatypeInit(SL* psl)
//{
//	psl->a = NULL;
//	psl->capacity = 0;
//	psl->size = 0;
//}
//ÓÅ»¯
void SLDatatypeInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype)*4);
	if (psl->a == NULL)
	{
		perror("malloc file");
		return;
	}
	psl->capacity = 4;
	psl->size = 0;
}
void SLDatatypeDestory(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->capacity = 0;
	psl->size = 0;
}

void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a, sizeof(SLDatatype) * psl->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		psl->a = tmp;
		psl->capacity *= 2;
	}
	return;
}
void SLDatatypePushBack(SL* psl, SLDatatype x)//Î²²å
{
    SLCheckCapacity(psl);
	psl-> a[psl->size] = x;
	psl->size++;
	//psl-> a[psl->size++] = x;
}

void SLDatatypePushFront(SL* psl, SLDatatype x);
void SLDatatypePopBack(SL* psl);
void SLDatatypePopFront(SL* psl);
void SLDatatypePrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}