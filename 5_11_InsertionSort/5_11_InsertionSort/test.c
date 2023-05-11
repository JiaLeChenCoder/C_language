#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        //��arr[0..i-1]�б�key���Ԫ��ȫ�������ƶ�һ��λ��
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        //��key���뵽��ȷ��λ��
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 1, 11, 16, 8, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("ԭ����: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    insertion_sort(arr, n);

    printf("\n���������: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}