#include <stdio.h>

int sequentialSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // 返回目标元素在数组中的索引
        }
    }
    return -1;  // 目标元素不存在，返回-1
}

int main() {
    int arr[] = { 15, 12, 8, 2, 16, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    int result = sequentialSearch(arr, n, target);
    if (result == -1) {
        printf("目标元素不存在");
    }
    else {
        printf("目标元素在数组中的索引为：%d ", result);
    }
    return 0;
}
