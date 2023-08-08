#include <stdio.h>

// ����������
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // ����key���Ԫ������ƶ�
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// ����ʾ��
int main()
{
    int arr[] = { 13, 21, 63, 5, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("���������飺 ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    return 0;
}
