#include"SqList.h"

void SLTcheck(s1* ps)
{
	if (ps->capecity == ps->size)
	{
		DataType* temp = (DataType*)realloc(ps->a, sizeof(DataType) *ps->capecity* 2);
		if (temp == NULL)
		{
			perror("realloc fail");
		}
		ps->capecity *= 2;
		ps->a = temp;
	}

}
void SLTInit(s1* ps)
{
	ps->a = (DataType*)malloc(sizeof(DataType)*4);
	ps->capecity= 4;
	ps->size = 0;
}

void SLTDestry(s1* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capecity = 0;
	ps->size = 0;
}

void SLTPushBack(s1* ps,DataType x)
{
	SLTcheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SLTPrint(s1* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void SLTPushFront(s1* ps, DataType x)
{
	SLTcheck(ps);
	for(int i = ps->size-1; i >=0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}
void SLTPopFront(s1* ps)
{
	//assert(ps->size>0);
	//或者
	if (ps->size == 0)
	{
		printf("元素个数为空，不能继续删除");
		return;
	}
	/*int start = 0;
	while (start <ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}*/
	int start = 1;
	while (start < ps->size )
	{
		ps->a[start-1] = ps->a[start];
		start++;
	}
	ps->size--;
}
void SLTPopBack(s1* ps)
{
	assert(ps->size > 0);
	ps->size--;
}