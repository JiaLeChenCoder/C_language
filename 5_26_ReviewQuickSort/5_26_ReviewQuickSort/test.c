#include<stdio.h>
void quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = arr[left];
    int i = left;
    int j = right;
    while (i < j) {
        while (i < j && arr[j] >= pivot) {
            j--;
        }
        if (i < j) {
            arr[i++] = arr[j];
        }
        while (i < j && arr[i] < pivot) {
            i++;
        }
        if (i < j) {
            arr[j--] = arr[i];
        }
    }
    arr[i] = pivot;
    quick_sort(arr, left, i - 1);
    quick_sort(arr, i + 1, right);
}
    int main()
    {
        int arr[10] = { 2,5,8,7,9,6,4,1,3,0 };
        quick_sort(arr, 0, 9);
        for (int i = 0; i <= 9; i++)
        {
            printf("%d ", arr[i]);
        }
    }