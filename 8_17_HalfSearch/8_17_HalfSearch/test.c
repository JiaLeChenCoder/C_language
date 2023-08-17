#include <stdio.h>s

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // 找到目标元素，返回索引
        }

        if (arr[mid] < target) {
            left = mid + 1; // 目标元素在右半部分
        }
        else {
            right = mid - 1; // 目标元素在左半部分
        }
    }

    return -1; // 没有找到目标元素
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 ,17,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        printf("目标元素未找到  ");
    }
    else {
        printf("目标元素的索引是：%d", result);
    }

    return 0;
}
