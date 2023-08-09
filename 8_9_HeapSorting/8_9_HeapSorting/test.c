#include <stdio.h>

// ��������Ԫ�ص�ֵ
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ������
void heapify(int arr[], int n, int i) {
    int largest = i;    // ��ʼ�����Ԫ��Ϊ���ڵ�
    int left = 2 * i + 1;    // ���ӽڵ������
    int right = 2 * i + 2;   // ���ӽڵ������

    // ������ӽڵ���ڸ��ڵ�
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // ������ӽڵ���ڴ�ʱ�����ڵ�
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // ������Ԫ���Ѿ����Ǹ��ڵ㣬�򽻻����ǣ�����������
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// ��������
void heapSort(int arr[], int n) {
    // �����ѣ�������ת��Ϊ���ѣ�
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // һ�����Ӷ���ȡ��Ԫ��
    for (int i = n - 1; i > 0; i--) {
        // ����ǰ���Ԫ�أ����ڵ㣩�ƶ�������ĩβ
        swap(&arr[0], &arr[i]);

        // ����ʣ��Ķ�
        heapify(arr, i, 0);
    }
}

// ��ӡ����Ԫ��
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// ������
int main() {
    int arr[] = { 22, 11, 33, 55, 66, 77 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("ԭʼ���飺\n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("���������飺\n");
    printArray(arr, n);
    return 0;
}
