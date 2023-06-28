#include"SList.h"
void SLTCheck(s1* psl)
{
	assert(psl);
	if (psl->capecity == psl->size)
	{
		DataType* temp = (DataType*)realloc(psl->a, sizeof(DataType) * psl->capecity * 2);
		if (temp == NULL)
		{
			perror("realloc fail");
		}
		psl->capecity *= 2;
		psl->a = temp;
	}
}
void SLTInit(s1* psl)
{
	assert(psl);
	psl->a = (DataType*)malloc(sizeof(DataType) * 4);
	if (psl->a == NULL)
	{
		perror("malloc fail");
	}
	psl->capecity = 4;
	psl->size = 0;
}
void SLTDestry(s1* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->capecity = 0;
	psl->size = 0;
}
void SLTPushFront(s1* psl, DataType x)
{
	assert(psl);
	SLTCheck(psl);
	for (int i=psl->size-1; i >=0; i--)
	{
		psl->a[i+1] = psl->a[i];
	}
	psl->a[0] = x;
	psl->size++;
}
void SLTPushBack(s1* psl, DataType x)
{
	assert(psl);
	SLTCheck(psl);
	psl->a[psl->size] = x;
	psl->size++;
}
void SLTPopFront(s1* psl)
{
	assert(psl);
	assert(psl->size > 0);
	int start = 0;
	while (start < psl->size-1)
	{
		psl->a[start] = psl->a[start + 1];
		start++;
	}
	psl->size--;
}
void SLTPopBack(s1* psl)
{
	assert(psl);
	assert(psl->size > 0);
	psl->size--;
}

void SLTInsert(s1* psl, int pos,DataType x)
{
	assert(psl);
	SLTCheck(psl);
	assert(pos >= 0 && pos < psl->size);
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}
void SLTEarse(s1* psl, int pos)
{
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	int start = pos;
	while (start < psl->size - 1)
	{
		psl->a[start] = psl->a[start + 1];
		start++;
	}
	psl->size--;
}

void SLTPrint(s1* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d  ", psl->a[i]);
	}
}

int  SLTFind(s1* psl, DataType x)
{
	assert(psl);
	for(int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SLTModify(s1* psl, int pos, DataType x)
{
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	psl->a[pos] = x;
}





