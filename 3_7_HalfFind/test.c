#include<stdio.h>
int main()
{
	int arr[]={ 1,2,3,4,5,6,7,8,9};
	int a = 8;//Ҫ���ҵ�����
	int i = 0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//�۰���ң�Ҳ�Ƕ��ֲ��ң�ǰ������������
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
		printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
		flag = 1;
		break;
	}
	}
	if(flag == 0)
	{
	printf("�Ҳ���\n");
	}
	return 0;
}