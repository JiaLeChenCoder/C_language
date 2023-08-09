#include <stdio.h>

// 交换两个元素的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 调整堆
void heapify(int arr[], int n, int i) {
    int largest = i;    // 初始化最大元素为根节点
    int left = 2 * i + 1;    // 左子节点的索引
    int right = 2 * i + 2;   // 右子节点的索引

    // 如果左子节点大于根节点
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // 如果右子节点大于此时的最大节点
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // 如果最大元素已经不是根节点，则交换它们，继续调整堆
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// 堆排序函数
void heapSort(int arr[], int n) {
    // 构建堆（将数组转换为最大堆）
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 一个个从堆中取出元素
    for (int i = n - 1; i > 0; i--) {
        // 将当前最大元素（根节点）移动到数组末尾
        swap(&arr[0], &arr[i]);

        // 调整剩余的堆
        heapify(arr, i, 0);
    }
}

// 打印数组元素
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// 主函数
int main() {
    int arr[] = { 22, 11, 33, 55, 66, 77 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组：\n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("排序后的数组：\n");
    printArray(arr, n);
    return 0;
}
