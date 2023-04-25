#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, size_t num, size_t width,int (*cmp)(const void*p1,const void*p2))
{
	size_t i = 0;
	for(i=0;i<num-1;i++)
	{
		//一趟冒泡排序的过程
		size_t j = 0;
		for (j = 0; j < num - 1; j++)
		{
			//两个相邻的元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
//自己提供的函数
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

printf_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void tset()
{
	int arr[] = { 3,5,1,2,4,6,9,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	printf_arr(arr, sz);
}
int main()
{
	tset();
	return 0;
}