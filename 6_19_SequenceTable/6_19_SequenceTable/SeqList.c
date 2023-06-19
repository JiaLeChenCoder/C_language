#include"SeqList.h"

void SLCheck(s* ps)
{
	if (ps->capecity == ps->size)
	{
		SLTypeData* temp = (SLTypeData*)realloc(ps->a, sizeof(SLTypeData) * ps->capecity * 2);
		if (temp == NULL)
		{
			perror("realloc fail");
			return 0;
		}
		ps->a = temp;
		ps->capecity = 2 * ps->capecity;
	}
}
void SLInit(s* ps)
{
	ps->a = (SLTypeData*)malloc(sizeof(SLTypeData)*4);
	ps->capecity = 4;
	ps->size = 0;
}
void SLDestory(s* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capecity = 0;
	ps->size = 0;
}
void SLPrint(s* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void SLPushFront(s* ps, SLTypeData x)
{
	SLCheck(ps);
	ps->a[ps->size] = x;
	ps->size++;
}