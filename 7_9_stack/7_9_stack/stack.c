#include"stack.h"
void STInit(ST* phead)
{
	assert(phead);
	phead->a = NULL;
	phead->capecity = 0;
	phead->top = 0;
}
void STDestory(ST* phead)
{
	assert(phead);
	free(phead->a);
	phead->capecity = 0;
	phead->top = 0;
}
void STPop(ST* phead)
{
	assert(phead);
	assert(!STEmpty(phead));
	phead->top--;
}
void STPush(ST* phead, datatype x)
{
	assert(phead);
	if (phead->top == phead->capecity)
	{
		int newcapacity = phead->capecity == 0 ? 4 : phead->capecity * 2;
		datatype* temp = (datatype*)realloc(phead->a, sizeof(datatype)*newcapacity);
		if (temp == NULL)
		{
			perror("realloc fail");
			return;
		}
		phead->a = temp;
		phead->capecity=newcapacity;
	}
	phead->a[phead->top] = x;
	phead->top++;
}
datatype STTop(ST* phead)
{
	assert(phead);
	assert(!STEmpty(phead));
	return phead->a[phead->top-1];
}
bool STEmpty(ST* phead)
{
	assert(phead);
	return phead->top == 0;
}
void STSize(ST* phead)
{
	assert(phead);
	return phead->top;
}