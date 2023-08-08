#include <stdio.h>

// 插入排序函数
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // 将比key大的元素向后移动
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// 测试示例
int main()
{
    int arr[] = { 13, 21, 63, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("排序后的数组： ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    return 0;
}
