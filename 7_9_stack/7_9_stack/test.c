#include"stack.h"

void test1()
{
	ST s;
	STInit(&s);
	STPush(&s, 1);
	STPush(&s, 2);
	STPush(&s, 3);
	printf("%d", STTop(&s));
	STPop(&s);
	printf("\n");
	while (!STEmpty(&s))
	{
		printf("%d ", STTop(&s));
		STPop(&s);
	}
	STDestory(&s);
	return 0;
}
int main()
{
	test1();
	return 0;
}
