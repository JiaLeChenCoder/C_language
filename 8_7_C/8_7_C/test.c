#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换arr[j]与arr[j + 1]的位置
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 示例
int main() {
    int numbers[] = { 5, 8, 6, 2, 10, 3 };
    int n = sizeof(numbers) / sizeof(numbers[0]);
    bubbleSort(numbers, n);

    printf("排序后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf(" ");
        return 0;
}
