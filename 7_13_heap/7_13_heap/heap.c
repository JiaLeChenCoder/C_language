#include"heap.h"

void HpInit(hp* psl)
{
	assert(psl);
	psl->a = NULL;
	psl->capecity = 0;
	psl->size = 0;
}
void HpDestory(hp* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->capecity = psl->size = 0;
}
void Swap(hpdatatype* psl1, hpdatatype* psl2)
{
	hpdatatype temp = *psl1;
	*psl1 = *psl2;
	*psl2 = temp;
}
void HpPop(hp* psl, hpdatatype x)
{
	//É¾³ý¶Ñ¶¥ÔªËØ
	assert(psl);
	assert(!HpEmpyty(psl));
	Swap(psl->a[0], psl->a[psl->size - 1]);
	psl->size--;
	AdjustDown(psl->a, psl->size, 0);
}
void HpPush(hp* psl,hpdatatype x)
{
	assert(psl);
	if (psl->capecity == psl->size)
	{
		int newcapecity = psl->capecity == 0 ? 4 : psl->capecity * 2;
		hpdatatype* temp = (hpdatatype*)realloc(psl->a, newcapecity * sizeof(hpdatatype));
			if (temp == NULL)
			{
				perror("realloc fail");
			}
			psl->capecity = newcapecity;
			psl->a = temp;
	}
	psl->a[psl->size] = x;
	psl->size++;
	Adjustup(psl->a, psl->size - 1);

}
void HpTop(hp* psl)
{
	assert(psl);
	assert(!HpEmpyty);
	return psl->a[0];
}
bool HpEmpyty(hp* psl)
{
	assert(psl);
	return psl->size==0;
}
void HpSize(hp* psl)
{
	assert(psl);
	return psl->size;
}
void Adjustup(hpdatatype* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(hpdatatype* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 && a[child + 1] > a[child])
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}