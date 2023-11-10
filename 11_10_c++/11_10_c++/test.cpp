#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void func(char* &s)
//{
//	s = (char*)malloc(100);
//	fgets(s, 100, stdin);
//}
//int main()
//{
//	char *s;
//	func(s);
//	puts(s);
//	free(s);
//	return 0;
//}
#define size 50 
typedef int EleMent;
typedef struct Stlist
{
	EleMent arr[size];
	EleMent capacity;;
}slt;
bool push(slt &s,int pos,EleMent x)
{
	for (int i = s.capacity-1; i >=pos-1; i--)
	{
		s.arr[i+1] = s.arr[i];
	}
	s.arr[pos-1] = x;
	s.capacity++;
	return true;
}
bool Pop(slt &s, int pos)
{
	if (pos > 4 || pos < 1)
	{
		return false;;
	}
	for (int i =pos; i < s.capacity ; i++)
	{
		s.arr[i-1 ] = s.arr[i];
	}
	s.capacity--;
	return true;

}
void print(slt s)
{
	for (int i = 0; i < s.capacity; i++)
	{
		printf("%3d", s.arr[i]);
	}
	printf("\n");
}
int main()
{
	slt s;
	s.arr[0] = 1;
	s.arr[1] = 2;
	s.arr[2] = 3;
	s.capacity = 3;
	int i = 0;
	scanf("%d", &i);
	push(s, 2, i);
		print(s);
	bool ret;
	scanf("%d", &i);
	ret=Pop(s, i);
	if (ret == 0)
	{
		printf("false");
	}
	else
	{
		print(s);
	}
	return 0;
}
