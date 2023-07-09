#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int datatype;
typedef struct Stack
{
	datatype* a;
	int capecity;
	int top;
}ST;

void STInit(ST* phead);
void STDestory(ST* phead);
void STPop(ST* phead);
void STPush(ST* phead, datatype x);
datatype STTop(ST* phead);
bool STEmpty(ST* phead);
void STSize(ST* phead);

