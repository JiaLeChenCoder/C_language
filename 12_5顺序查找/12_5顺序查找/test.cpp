#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef  int ElemType;
typedef struct {
	ElemType* elem;//����ָ��
	int TableLen;//�洢��̬�������Ԫ�صĸ���
}SSTable;

int search_seq(SSTable ST, ElemType key)
{
	ST.elem[0] = key;
	int i;
	for (i = ST.TableLen - 1; ST.elem[i] != key; --i)
	{
		return i;
	}
}
void ST_Init(SSTable &ST, int len)
{
	ST.TableLen = len + 1;//������һ��Ϊ�ڱ�λ
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i = 0;
	srand(time(NULL));
	for (i = 1; i < ST.TableLen; i++)
	{
		ST.elem[i] = rand() % 100;
	}
}


int main()
{
	SSTable ST;
	ElemType key=0;
	int pos;
	ST_Init(ST, 10);
	printf("������keyֵ");
	scanf("%d", key);
	pos = search_seq(ST, key);
	if (pos)
	{
		printf("���ҳɹ���%d\n", pos);

	}
	else
		printf("����ʧ��");
	return 0;
}