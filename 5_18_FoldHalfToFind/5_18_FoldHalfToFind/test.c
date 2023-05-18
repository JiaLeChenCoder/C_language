#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 1, 2, 3, 5, 8, 12, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = binary_search(arr, n, key);
    if (index != -1) {
        printf("元素 %d 在数组中的下标是 %d", key, index);
    }
    else {
        printf("元素 %d 不在数组中", key);
    }
    return 0;
}