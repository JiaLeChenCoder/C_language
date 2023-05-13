int binary_search(int arr[], int n, int target)
{
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (target == arr[mid])
        {
            return mid; // 找到目标元素，返回位置
        }
        else if (target < arr[mid])
        {
            right = mid - 1; // 在左区间中查找
        }
        else
        {
            left = mid + 1; // 在右区间中查找
        }
    }
    return -1; // 未找到目标元素，返回不存在的标志
}
#include<stdio.h>
int main()
{
    int arr[6] = { 0,4,5,6,8,7 };
    int pos=binary_search(arr, 6, 8);
     printf("8的位置是%d ",pos);
    return 0;
}