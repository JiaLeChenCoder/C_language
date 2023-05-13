int binary_search(int arr[], int n, int target)
{
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (target == arr[mid])
        {
            return mid; // �ҵ�Ŀ��Ԫ�أ�����λ��
        }
        else if (target < arr[mid])
        {
            right = mid - 1; // ���������в���
        }
        else
        {
            left = mid + 1; // ���������в���
        }
    }
    return -1; // δ�ҵ�Ŀ��Ԫ�أ����ز����ڵı�־
}
#include<stdio.h>
int main()
{
    int arr[6] = { 0,4,5,6,8,7 };
    int pos=binary_search(arr, 6, 8);
     printf("8��λ����%d ",pos);
    return 0;
}