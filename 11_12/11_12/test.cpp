#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define size 50
typedef int Element;
typedef struct SList
{
	Element arr[size];
	Element capacity;
}SL;
void FrontPush(SL &s, Element x)
{
	for (int i = 1; i <= s.capacity+1; i++)
	{
		s.arr[i] = s.arr[i-1];
	}
	s.arr[0] = x;
	s.capacity++;
}
void print(SL s)
{
	for (int i = 0; i < s.capacity; i++)
	{
		printf("%d", s.arr[i]);
	}
}
int main()
{
	SL s;
	int i = 0;
	s.capacity = 0;
	while(scanf("%d",&i)!=EOF&&i!=9999)
	{
		FrontPush(s, i);
	}
	print(s);
	return 0;
}