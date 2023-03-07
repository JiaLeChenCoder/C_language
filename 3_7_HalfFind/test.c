#include<stdio.h>
int main()
{
	int arr[]={ 1,2,3,4,5,6,7,8,9};
	int a = 8;//要查找的数字
	int i = 0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//折半查找，也是二分查找，前提是数组有序
	int left = 0;
	int right = sz-1;
	int flag = 0;
	while(left<=right)
	{
	int mid= left + (right - left) / 2;
	if(arr[mid] < a)
	{
		left= mid + 1;
	}
	else if(arr[mid]>a)
	{
		right = mid - 1;
	}
	else
	{
		printf("找到了，下标是：%d\n",mid);
		flag = 1;
		break;
	}
	}
	if(flag == 0)
	{
	printf("找不到\n");
	}
	return 0;
}