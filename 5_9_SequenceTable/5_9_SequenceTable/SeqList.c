#include"SeqList.h"

void SLCheckCapacity(SL* psl)
{
	assert(psl);
	if (psl->capacity == psl->size)
	{
		SLDatatype* temp =(SLDatatype*)realloc(psl->a, sizeof(SLDatatype)*psl->capacity * 2);
		if (temp == NULL)
		{
			perror("realloc fail");
			return;
		}
		psl->a = temp;
		psl->capacity *= 2;
	}
}

void SLInit(SL* psl)
{
	assert(psl);
	psl->a =(SLDatatype*)malloc(sizeof(SLDatatype)*4);
	psl->capacity = 4;
	psl->size = 0;
}

void SLDestroy(SL* psl)
{
	assert(psl);
	free(psl);
	psl->a = NULL;
	psl->capacity = 0;
	psl->size = 0;
}

void SLPushBack(SL* psl, SLDatatype x)
{
	SLCheckCapacity(psl);
	assert(psl);
	psl->a[psl->size++] = x;
}

void SLPrint(SL* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SLPushFront(SL* psl, SLDatatype x)
{
	assert(psl);
	SLCheckCapacity(psl);
	int str=psl->size-1;
	while(str>=0)
	{
		psl->a[str+1] = psl->a[str];
		str--;
	}
	psl->a[0] = x;
	psl->size++;
}

void SLPopBack(SL* psl)
{
	assert(psl);
	psl->size--;
}

void SLPopFront(SL* psl)
{
	assert(psl);
	int str =0;
	for (int i = 0; i <psl->size-1; i++)
	{
		psl->a[str] = psl->a[str + 1];
		str++;
	}
	psl->size--;
}

void SLInsert(SL* psl, int pos, SLDatatype x)
{
	assert(psl);
	assert(pos>=0&&pos<=psl->size);
	SLCheckCapacity(psl);
	int end = psl->size-1;
	while (end >= pos)
	{
		psl->a[end+1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}

void SLErase(SL* psl, int pos)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	int start = pos;
	while (start < psl->size)
	{
		psl->a[start] = psl->a[start + 1];
		start++;
	}
	psl->size--;
}

int SLFind(SL* psl, SLDatatype x)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
}

void SLModify(SL* psl, int pos, SLDatatype x)
{
	assert(psl);
	assert(pos >= 0 && pos < psl->size);
	psl->a[pos] = x;
}