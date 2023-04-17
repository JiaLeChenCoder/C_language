#include"SeqList.h"

//void SLDatatypeInit(SL* psl)
//{
//	psl->a = NULL;
//	psl->capacity = 0;
//	psl->size = 0;
//}
//优化
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
void SLDatatypePushBack(SL* psl, SLDatatype x)//尾插
{ 
    SLCheckCapacity(psl);
	/*psl->a[psl->size] = x;
	psl->size++;*/
	//psl-> a[psl->size++] = x;
	SLDatatypeInsert(psl, psl->size, x);
}

void SLDatatypePushFront(SL* psl, SLDatatype x)
{
	SLCheckCapacity(psl);
	/*int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;*/
	SLDatatypeInsert(psl,0, x);
}
void SLDatatypePopBack(SL* psl)
{
	assert(psl->size > 0);
	/*if (psl->size < 0)
		return;*/
	//psl->size--;
	SLDatatypeErase(psl, psl->size-1);
}
void SLDatatypePopFront(SL* psl);
void SLDatatypePrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{ 
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SLDatatypePopFront(SL* psl)
{
	if (psl->size < 0)
		return;
	//int start = 0;//或者改为1
	//while (start < psl->size - 1)//或者改为 psl->size
	//{
	//	psl->a[start] = psl->a[start + 1];
	//	start++;
	//}
	//psl->size--;
	SLDatatypeErase(psl, 0);
}

void SLDatatypeInsert(SL* psl,int pos, SLDatatype x)
{
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end+1] = psl->a[end ];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}

void SLDatatypeErase(SL* psl, int pos)
{
	assert(0 <= pos && pos < psl->size);
	int start = pos+1;
	while (start < psl->size)
	{
		psl->a[start-1] = psl->a[start];
		start++;
	}
	psl->size--;
}