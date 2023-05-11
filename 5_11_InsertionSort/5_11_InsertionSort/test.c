#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        //将arr[0..i-1]中比key大的元素全部往后移动一个位置
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        //将key插入到正确的位置
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 1, 11, 16, 8, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("原数组: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    insertion_sort(arr, n);

    printf("\n排序后数组: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}