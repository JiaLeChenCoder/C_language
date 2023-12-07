#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef  int  ElemType;
typedef  struct {
	ElemType* elem;
	int TableLen;
}SSTable;
void ST_Init(SSTable& ST, int len)
{
	ST.TableLen = len;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i;
	srand(time(NULL));
	for (i = 0; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;
	}
}

int BinarySearch(SSTable L, ElemType key)
{
	int low = 0, high = L.TableLen - 1,mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (L.elem[mid] == key)
		{
			return mid+1;
		}
		else if (L.elem[mid] > key)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return 0;
}

void ST_Print(SSTable ST)
{
	for (int i=0; i < ST.TableLen; i++)
	{
		printf("%d ", ST.elem[i]);
	}
	printf("\n");
}

int compare(const void* left, const void* right)
{
	return  *(ElemType*)left - *(ElemType*)right;
}
int main()
{
	SSTable  ST;
	ElemType key;
	int pos;
	ST_Init(ST,10);
	qsort(ST.elem, ST.TableLen, sizeof(ElemType), compare);
	ST_Print(ST);
	printf("请输入要搜索的值\n");
	scanf("%d", &key);
	pos = BinarySearch(ST, key);
	if (pos)
	{
		printf("%d", pos);
	}
	else
		printf("查找失败");
	return 0;
}